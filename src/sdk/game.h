#pragma once
#include "units.h"

struct GameInfo {
	auto& in_hanger() const noexcept {
		return*reinterpret_cast<bool*>(std::uintptr_t(this) + 0xD5);
	}

	auto map() const noexcept {
		return *reinterpret_cast<const char**>(std::uintptr_t(this) + 0x1D0);
	}

	auto time() const noexcept {
		return *reinterpret_cast<const char**>(std::uintptr_t(this) + 0x1D8);
	}

	auto weather() const noexcept {
		return *reinterpret_cast<const char**>(std::uintptr_t(this) + 0x1E0);
	}

	auto mission() const noexcept {
		return *reinterpret_cast<const char**>(std::uintptr_t(this) + 0x200);
	}

	auto unit_list_one() const noexcept {
		return *reinterpret_cast<UnitList**>(std::uintptr_t(this) + 0x350);
	}

	auto unit_list_two() const noexcept {
		return *reinterpret_cast<UnitList**>(std::uintptr_t(this) + 0x370);
	}

	auto unit_list_three() const noexcept {
		return *reinterpret_cast<UnitList**>(std::uintptr_t(this) + 0x390);
	}

	auto& view_matrix() const noexcept {
		return *reinterpret_cast<ViewMatrix*>(*reinterpret_cast<std::uintptr_t*>(std::uintptr_t(this) + 0x750) + 0x258);
	}
};
