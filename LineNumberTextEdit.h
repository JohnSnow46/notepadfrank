#ifndef LINENUMBERTEXTEDIT_H
#define LINENUMBERTEXTEDIT_H

#endif // LINENUMBERTEXTEDIT_H

#include <QWidget>
#include <QTextEdit>
#include <QPlainTextEdit>

class LineNumberTextEdit : public QWidget {
    Q_OBJECT

public:
    explicit LineNumberTextEdit(QWidget *parent = nullptr);
    void setText(const QString &text);

private:
    QPlainTextEdit *m_lineNumberArea;
    QTextEdit *m_textEdit;
};
