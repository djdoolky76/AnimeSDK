#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class MarkSpreadHasReadStepConfig; }

#define RPG_GAMECORE_BOOKLET_MARKSPREADHASREADSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4747E0)
#define RPG_GAMECORE_BOOKLET_MARKSPREADHASREADSTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4747F0)
#define RPG_GAMECORE_BOOKLET_MARKSPREADHASREADSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D474750)

namespace RPG::GameCore::Booklet
{
	class MarkSpreadHasReadStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_MARKSPREADHASREADSTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::MarkSpreadHasReadStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::MarkSpreadHasReadStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_MARKSPREADHASREADSTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::MarkSpreadHasReadStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::MarkSpreadHasReadStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_MARKSPREADHASREADSTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
