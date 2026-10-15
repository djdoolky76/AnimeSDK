#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FiveDimSetLevelVarShortAction; }
namespace RPG::GameCore { class LittleGameDynamicVar; }

#define RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D9BC0)
#define RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D9BD0)
#define RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D9B90)

namespace RPG::GameCore
{
	class FiveDimSetLevelVarShortAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::LittleGameDynamicVar* Name; // 0x10
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::System::Boolean IsSetOnce; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetLevelVarShortAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetLevelVarShortAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetLevelVarShortAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetLevelVarShortAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
