#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActRemoveAllRogueBuffAndAddCoinConfig; }

#define RPG_GAMECORE_ROGUEACTREMOVEALLROGUEBUFFANDADDCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A0EE0)
#define RPG_GAMECORE_ROGUEACTREMOVEALLROGUEBUFFANDADDCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A0EF0)
#define RPG_GAMECORE_ROGUEACTREMOVEALLROGUEBUFFANDADDCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A0EA0)

namespace RPG::GameCore
{
	class RogueActRemoveAllRogueBuffAndAddCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEALLROGUEBUFFANDADDCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActRemoveAllRogueBuffAndAddCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActRemoveAllRogueBuffAndAddCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEALLROGUEBUFFANDADDCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActRemoveAllRogueBuffAndAddCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActRemoveAllRogueBuffAndAddCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEALLROGUEBUFFANDADDCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
