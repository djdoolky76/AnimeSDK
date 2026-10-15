#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesToastStyleType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesToastConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESTOASTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D590F90)
#define RPG_GAMECORE_CHENLINGFESTOASTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5901E0)

namespace RPG::GameCore
{
	class ChenLingFesToastConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Text; // 0x10
		::System::String* TextID; // 0x18
		::System::String* IconPath; // 0x20
		::RPG::GameCore::ChenLingFesToastStyleType StyleType; // 0x28
		::System::Single Duration; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESTOASTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesToastConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesToastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESTOASTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
