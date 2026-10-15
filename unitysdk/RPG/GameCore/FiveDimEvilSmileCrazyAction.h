#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEvilSmileCrazyAction; }

#define RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BC760)
#define RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BC770)
#define RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BC6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileCrazyAction_TypeDefinitionIndex = 18786;

	class FiveDimEvilSmileCrazyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEvilSmileCrazyAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEvilSmileCrazyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEvilSmileCrazyAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEvilSmileCrazyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILECRAZYACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
