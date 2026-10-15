#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class LGameEntityRef; }
namespace System { class String; }

#define ANMMOFEEPEP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2E792E0)
#define ANMMOFEEPEP_CTOR_2_OFFSET UNITYSDK_OFFSET(0x2E79330)
#define ANMMOFEEPEP_CTOR_OFFSET UNITYSDK_OFFSET(0x2E792B0)
#define ANMMOFEEPEP_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0x2E793A0)
#define ANMMOFEEPEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2E79390)

inline static constexpr unsigned int ANMMOFEEPEP_TypeDefinitionIndex = 64216;

	struct alignas(4) ANMMOFEEPEP
	{
		::System::UInt32 LLDCHLHNADA; // 0x10
		::System::UInt32 GDBJDAOOCOH; // 0x14
		::System::UInt32 ODMPMJCAHPN; // 0x18
		::UnityEngine::Vector3 AIBGEDIGEOO; // 0x1C
		::UnityEngine::Quaternion LOLLEGPLMOO; // 0x28
		::System::Boolean MCAFKKOOGPI; // 0x38
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ANMMOFEEPEP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::RPG::GameCore::LGameEntityRef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LGameEntityRef*))((::PBYTE)hIl2Cpp + ANMMOFEEPEP_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ANMMOFEEPEP_CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMMOFEEPEP_TOSTRING_OFFSET))(this);
		}

		::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMMOFEEPEP_GNNPFBBMFLA_OFFSET))(this);
		}

	};
