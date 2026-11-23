#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEBBCE9B834ECEAB/AA131E20D5A278C3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define BDE8CBE0D869BF37_E6627FE3E5DDF6CF_OFFSET UNITYSDK_OFFSET(0x3C6A610)
#define BDE8CBE0D869BF37__CTOR_OFFSET UNITYSDK_OFFSET(0x3C6A620)

inline static constexpr unsigned int BDE8CBE0D869BF37_TypeDefinitionIndex = 11645;

struct alignas(8) BDE8CBE0D869BF37
{
	::System::Object* E8F3148A854C0045; // 0x10
	::System::Int32 FDD22F1893BA1D03; // 0x18

	static ::System::Boolean E6627FE3E5DDF6CF(::EEBBCE9B834ECEAB::AA131E20D5A278C3 E937D4885DAA1AE8)
	{
		return ((::System::Boolean(*)(::EEBBCE9B834ECEAB::AA131E20D5A278C3))((::PBYTE)hIl2Cpp + BDE8CBE0D869BF37_E6627FE3E5DDF6CF_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor(::System::Int32 EBCEDFBB335C0AC5, ::System::Object* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + BDE8CBE0D869BF37__CTOR_OFFSET))(this, EBCEDFBB335C0AC5, E937D4885DAA1AE8);
	}
};
