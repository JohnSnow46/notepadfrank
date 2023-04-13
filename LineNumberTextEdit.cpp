#include "LineNumberTextEdit.h"
#include <QHBoxLayout>
#include <QScrollBar>

LineNumberTextEdit::LineNumberTextEdit(QWidget *parent) :
    QWidget(parent)
{
    // Create the line number area
    m_lineNumberArea = new QPlainTextEdit(this);
    m_lineNumberArea->setReadOnly(true);
    m_lineNumberArea->setFixedWidth(50);

    // Create the text edit area
    m_textEdit = new QTextEdit(this);

    // Create a layout to contain the two widgets
    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addWidget(m_lineNumberArea);
    layout->addWidget(m_textEdit);

    // Connect the text edit widget's scrolling to the line number area's scrolling
    connect(m_textEdit->verticalScrollBar(), SIGNAL(valueChanged(int)), m_lineNumberArea->verticalScrollBar(), SLOT(setValue(int)));
}
