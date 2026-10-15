#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameLevelVarBindingExtraInfo; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGEXTRAINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B6720)
#define RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGEXTRAINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7B66C0)
#define RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGEXTRAINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B65D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVarBindingExtraInfo_TypeDefinitionIndex = 18893;

	class LittleGameLevelVarBindingExtraInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGEXTRAINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVarBindingExtraInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVarBindingExtraInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGEXTRAINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelVarBindingExtraInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelVarBindingExtraInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARBINDINGEXTRAINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
