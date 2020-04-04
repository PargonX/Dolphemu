// Copyright 2020 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#pragma once

#include <memory>

#include <QDialog>
#include <QList>

#include "DiscIO/Blob.h"

class QComboBox;

namespace UICommon
{
class GameFile;
}

class ConvertDialog final : public QDialog
{
  Q_OBJECT

public:
  explicit ConvertDialog(QList<std::shared_ptr<const UICommon::GameFile>> files,
                         QWidget* parent = nullptr);

private slots:
  void Convert();

private:
  void AddToFormatComboBox(const QString& name, DiscIO::BlobType format);

  QComboBox* m_format;
  QList<std::shared_ptr<const UICommon::GameFile>> m_files;
};
