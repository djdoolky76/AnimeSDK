#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicCondScepterFilterBySelectedStyleTypeConfig; }

#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A5E60)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A5E70)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A5E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondScepterFilterBySelectedStyleTypeConfig_TypeDefinitionIndex = 19579;

	class RogueMagicCondScepterFilterBySelectedStyleTypeConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicCondScepterFilterBySelectedStyleTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicCondScepterFilterBySelectedStyleTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicCondScepterFilterBySelectedStyleTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicCondScepterFilterBySelectedStyleTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
