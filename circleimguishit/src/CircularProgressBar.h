#pragma once

#include "../imgui/imgui.h"
#include "../imgui/imgui_impl_dx9.h"
#include "../imgui/imgui_impl_win32.h"
#include "../imgui/imgui_internal.h"

void CircularProgressBar(const char* label, float progress, const ImVec2& size, const ImVec4& color);