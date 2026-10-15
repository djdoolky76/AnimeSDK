#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEvilSmileDieAction; }

#define RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BC840)
#define RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BC850)
#define RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BC7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileDieAction_TypeDefinitionIndex = 18787;

	class FiveDimEvilSmileDieAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEvilSmileDieAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEvilSmileDieAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEvilSmileDieAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEvilSmileDieAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
