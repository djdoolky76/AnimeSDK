#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDestroyCleanerBotAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68AF60)
#define RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D68AF80)
#define RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68AF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDestroyCleanerBotAction_TypeDefinitionIndex = 18732;

	class FiveDimDestroyCleanerBotAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* NormalCleanerBotPreset; // 0x10
		::System::String* EnhancedCleanerBotPreset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDestroyCleanerBotAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDestroyCleanerBotAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDestroyCleanerBotAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDestroyCleanerBotAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
