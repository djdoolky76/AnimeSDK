#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class MarkSectionHasReadStepConfig; }

#define RPG_GAMECORE_BOOKLET_MARKSECTIONHASREADSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D446C70)
#define RPG_GAMECORE_BOOKLET_MARKSECTIONHASREADSTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D446C80)
#define RPG_GAMECORE_BOOKLET_MARKSECTIONHASREADSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D446BE0)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int MarkSectionHasReadStepConfig_TypeDefinitionIndex = 24980;

	class MarkSectionHasReadStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_MARKSECTIONHASREADSTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::MarkSectionHasReadStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::MarkSectionHasReadStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_MARKSECTIONHASREADSTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::MarkSectionHasReadStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::MarkSectionHasReadStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_MARKSECTIONHASREADSTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
