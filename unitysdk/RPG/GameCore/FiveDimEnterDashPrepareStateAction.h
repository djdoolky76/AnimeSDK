#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEnterDashPrepareStateAction; }

#define RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68DC60)
#define RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D68DC70)
#define RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68DBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEnterDashPrepareStateAction_TypeDefinitionIndex = 18739;

	class FiveDimEnterDashPrepareStateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
