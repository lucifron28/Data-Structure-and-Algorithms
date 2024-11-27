#include <iostream>
#include <string>
#include <vector>


int main() {
    std::vector<std::string> todo;
    if (todo.empty()) {
        std::cout << "Your To-Do List is empty.\n\n";
    }
    while (true) {
        std::string task; 
        std::cout << "Add a task: ";
        std::getline(std::cin, task);
        todo.push_back(task);
        std::cout << "Add another task? (y/n): ";
        char response;
        std::cin >> response;
        std::cin.ignore();
        if (response == 'n') {
            break;
        } else if (response == 'y') {
            continue;
        } else {
            std::cout << "Invalid response.\n";
        }
    }
    std::cout << "\n";
    std::cout << "Your todo list:\n";
    for (int i = 0; i < todo.size(); i++) {
        std::cout << i << ": " << todo[i] << std::endl;
    }

    std::cout << "\nMark a task as completed by entering its number: ";
    int completed_task;
    std::cin >> completed_task;
    std::string ctask = todo[completed_task];
    if (completed_task >= 0 && completed_task < todo.size()) {
        todo.erase(todo.begin() + completed_task);
    } else {
        std::cout << "Invalid task number.\n";
    }
    std::cout << "Task " << "\"" << ctask << "\"" << " marked as completed.\n\n";

    std::cout << "Your updated To-Do List:\n";
    for (int i = 0; i < todo.size(); i++) {
        std::cout << i << ": " << todo[i] << std::endl;
    }
}