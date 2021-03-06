//
// Created by Fte on 03/08/2017.
//

#ifndef TASKMANGER_TASK_H
#define TASKMANGER_TASK_H
#include <iostream>
#include "Date.h"
#include "Color.h"
#include "Tag.h"

using std::string;
class Task {
private:
    string nameOfTask;
    Date dateOfTask;
    Color colorOfTask;
    Tag tagTask;//in future possible be class category

public:

    explicit Task (string s="New Task"):nameOfTask(s){
        // Color c= Color ::rose,Tag tag=Tag::life,bool done= false
        colorOfTask= Color ::Pink;
        tagTask=Tag::life;
    };
    explicit Task(Date d,string s="New Task"):dateOfTask(d),nameOfTask(s){
        colorOfTask= Color ::Pink;
        tagTask=Tag::life;


    };
    /*
    Task(Date d,string s="New Task",Color color=Color ::Pink, Tag tag=Tag::life)
            :dateOfTask(d),nameOfTask(s),colorOfTask(color),tagTask(tag){};
*/
    Task ( int d, int m, int y,string s="New Task"):dateOfTask(d,m,y),nameOfTask(s){
        colorOfTask= Color ::Pink;
        tagTask=Tag::life;
    };

    Task(const Task& t);

    virtual  ~Task()= default;// delete Date obj??//virtual??!!
    Task& operator =(const Task& t);
    bool operator==(const Task&t)const ;

    const string &getNameOfTask() const {
        return nameOfTask;
    }

    void setNameOfTask(const string &nameOfTask) {
        Task::nameOfTask = nameOfTask;
    }

    const Date &getDateOfTask() const {
        return dateOfTask;
    }

    void setDateOfTask(const Date &dateOfTask) {//

        Task::dateOfTask = dateOfTask;
    }

    Color getColorOfTask() const {
        return colorOfTask;
    }

    void setColorOfTask(Color colorOfTask) {
        Task::colorOfTask = colorOfTask;
    }

    Tag getTagTask() const {
        return tagTask;
    }

    void setTagTask(Tag tagTask) {
        Task::tagTask = tagTask;
    }


};


#endif //TASKMANGER_TASK_H
