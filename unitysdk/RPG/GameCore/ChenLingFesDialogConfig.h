#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDialogStyleType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesProperty.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesDialogConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESDIALOGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58DC20)
#define RPG_GAMECORE_CHENLINGFESDIALOGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D58DA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesDialogConfig_TypeDefinitionIndex = 18454;

	class ChenLingFesDialogConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Text; // 0x10
		::System::String* TextID; // 0x18
		::System::String* IconPath; // 0x20
		::RPG::GameCore::ChenLingFesProperty Property; // 0x28
		::RPG::GameCore::ChenLingFesDialogStyleType StyleType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESDIALOGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesDialogConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesDialogConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESDIALOGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
