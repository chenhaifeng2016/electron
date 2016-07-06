// Copyright (c) 2016 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#include "atom/browser/ui/views/menu_model_adapter.h"

namespace atom {

MenuModelAdapter::MenuModelAdapter(ui::MenuModel* menu_model)
  : views::MenuModelAdapter(menu_model) {
}

} // namespace atom
