#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define B2C64D5391C64A1E_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x28881A0)
#define B2C64D5391C64A1E__CTOR_OFFSET UNITYSDK_OFFSET(0x28884E0)

inline static constexpr unsigned int B2C64D5391C64A1E_TypeDefinitionIndex = 16148;

class B2C64D5391C64A1E : public ::ABEBA93AD61764EF
{
public:
	::System::Single FE67884EF162770D; // 0x18
	::System::Single E56F2EE26C7A1921; // 0x1C
	::UnityEngine::Vector2 E1A58B1093379655; // 0x20
	::UnityEngine::Vector2 F870AE69B1231C82; // 0x28
	::UnityEngine::Vector2 E92C7279142F7DFF; // 0x30
	::System::Single F726CF827720D7C2; // 0x38
	::System::Single B886BA44D8C2CD1B; // 0x3C
	::System::Single F9A36B1035869A2D; // 0x40
	::UnityEngine::E46B881AA2636190 E62DA198F7E6FFFF; // 0x44
	::UnityEngine::E46B881AA2636190 B40226DE1DF3F609; // 0x54
	::UnityEngine::E46B881AA2636190 E38D556B28AA0636; // 0x64
	::UnityEngine::E46B881AA2636190 EDFFAD3F8885DEF7; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B2C64D5391C64A1E__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::B2C64D5391C64A1E* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::B2C64D5391C64A1E*))((::PBYTE)hIl2Cpp + B2C64D5391C64A1E_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
};
