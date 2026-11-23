#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace UnityEngine { class Texture2D; }

#define BB220F981638F7CF_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x28E90D0)
#define BB220F981638F7CF__CTOR_OFFSET UNITYSDK_OFFSET(0x28E92C0)

inline static constexpr unsigned int BB220F981638F7CF_TypeDefinitionIndex = 16405;

class BB220F981638F7CF : public ::ABEBA93AD61764EF
{
public:
	::System::Single F3A68FAEF6E019D4; // 0x18
	::System::Single B8DB511664657089; // 0x1C
	::UnityEngine::E46B881AA2636190 B3372B5672ED8FE8; // 0x20
	::System::Single E79FA51C3440C1CB; // 0x30
	::System::Single ACB97B49BFE63C6C; // 0x34
	::System::Single A6C7195AC6D60070; // 0x38
	::System::Single A1966C674055A014; // 0x3C
	::System::Single B5C02F1942272B8A; // 0x40
	::System::Byte _padding0[0x4];
	::UnityEngine::Texture2D* B6BA66F0DEE53682; // 0x48
	::UnityEngine::Texture2D* F47BB287EBAE54EF; // 0x50

	::System::Boolean FC3208D7B8C7EE04(::BB220F981638F7CF* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::BB220F981638F7CF*))((::PBYTE)hIl2Cpp + BB220F981638F7CF_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB220F981638F7CF__CTOR_OFFSET))(this);
	}
};
