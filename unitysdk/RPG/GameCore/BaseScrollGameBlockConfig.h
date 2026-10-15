#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseScrollGameBlockConfig; }
namespace System { class String; }

#define RPG_GAMECORE_BASESCROLLGAMEBLOCKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D43FB40)
#define RPG_GAMECORE_BASESCROLLGAMEBLOCKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D43FB50)
#define RPG_GAMECORE_BASESCROLLGAMEBLOCKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D43F990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseScrollGameBlockConfig_TypeDefinitionIndex = 18807;

	class BaseScrollGameBlockConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PresetName; // 0x10
		::System::Single BlockLength; // 0x18
		::System::Single Probability; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESCROLLGAMEBLOCKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseScrollGameBlockConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseScrollGameBlockConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESCROLLGAMEBLOCKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseScrollGameBlockConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseScrollGameBlockConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESCROLLGAMEBLOCKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
