#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

namespace UnityEngine { class B196ACFA9D2AE729; }
namespace UnityEngine { class FAED0374422E783A; }

#define E18A594C2C17FC8C_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x286CBF0)
#define E18A594C2C17FC8C__CTOR_OFFSET UNITYSDK_OFFSET(0x286D150)

inline static constexpr unsigned int E18A594C2C17FC8C_TypeDefinitionIndex = 16133;

class E18A594C2C17FC8C : public ::ABEBA93AD61764EF
{
public:
	::System::Single FC0F9757BF6635FD; // 0x18
	::UnityEngine::E46B881AA2636190 BBCA6C79F316A123; // 0x1C
	::System::Single BE249802882875B2; // 0x2C
	::System::Single A60732FD50E1415D; // 0x30
	::System::Single EAAA73237818EF59; // 0x34
	::System::Single BC9CDC325972DCE5; // 0x38
	::System::Single F0546A42B1E28CA5; // 0x3C
	::System::Single AA7659748CBDF666; // 0x40
	::System::Single B09F61FF6822A75C; // 0x44
	::System::Boolean A735FA888D2C39C8; // 0x48
	::System::Byte _padding0[0x3];
	::System::Single B6DD8B23DB0664BC; // 0x4C
	::System::Single B793F7D5EBE9C14C; // 0x50
	::System::Single E6C4D194F08DBA4D; // 0x54
	::System::Single BCD0D2E9E3792FCF; // 0x58
	::UnityEngine::E8984F4E44AE20E5 EE2E83EFF59681A4; // 0x5C
	::UnityEngine::E8984F4E44AE20E5 FB48B32C3B265EA1; // 0x6C
	::UnityEngine::E8984F4E44AE20E5 A6126E8AA0152307; // 0x7C
	::UnityEngine::E8984F4E44AE20E5 AE7484343999DC6E; // 0x8C
	::UnityEngine::E8984F4E44AE20E5 AE4D3CB7FB2AC95F; // 0x9C
	::System::Boolean F20381A85FA6A8B5; // 0xAC
	::System::Boolean E10CAF4D842443E6; // 0xAD
	::System::Byte _padding1[0x2];
	::UnityEngine::FAED0374422E783A* ED0B4654A1B427DD; // 0xB0
	::UnityEngine::B196ACFA9D2AE729* AFA235D48BAD811B; // 0xB8

	::System::Boolean FC3208D7B8C7EE04(::E18A594C2C17FC8C* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::E18A594C2C17FC8C*))((::PBYTE)hIl2Cpp + E18A594C2C17FC8C_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E18A594C2C17FC8C__CTOR_OFFSET))(this);
	}
};
