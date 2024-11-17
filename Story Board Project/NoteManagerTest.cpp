#include <gtest/gtest.h>
#include "NoteManager.h"

TEST(NoteManagerTest, AddNote) {
    NoteManager noteManager;
    noteManager.addNote();
    
}

TEST(NoteManagerTest, SearchNoteByTitle) {
    NoteManager noteManager;
    noteManager.addNote();
    noteManager.searchNoteByTitle();
    
}

TEST(NoteManagerTest, SearchNoteByText) {
    NoteManager noteManager;
    noteManager.addNote();
    noteManager.searchNoteByText();
    
}

TEST(NoteManagerTest, DeleteNote) {
    NoteManager noteManager;
    noteManager.addNote();
    noteManager.deleteNote();
    
}