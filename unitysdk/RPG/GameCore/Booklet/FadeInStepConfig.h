#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class FadeInStepConfig; }

#define RPG_GAMECORE_BOOKLET_FADEINSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D446AE0)
#define RPG_GAMECORE_BOOKLET_FADEINSTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D446AF0)
#define RPG_GAMECORE_BOOKLET_FADEINSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D446A20)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int FadeInStepConfig_TypeDefinitionIndex = 24979;

	class FadeInStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::System::UInt32 ElementID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_FADEINSTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::FadeInStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::FadeInStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_FADEINSTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::FadeInStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::FadeInStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_FADEINSTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
