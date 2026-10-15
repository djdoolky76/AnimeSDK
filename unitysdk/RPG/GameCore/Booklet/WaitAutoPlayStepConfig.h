#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class WaitAutoPlayStepConfig; }

#define RPG_GAMECORE_BOOKLET_WAITAUTOPLAYSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D475AB0)
#define RPG_GAMECORE_BOOKLET_WAITAUTOPLAYSTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D475AC0)
#define RPG_GAMECORE_BOOKLET_WAITAUTOPLAYSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D475C80)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int WaitAutoPlayStepConfig_TypeDefinitionIndex = 24982;

	class WaitAutoPlayStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_WAITAUTOPLAYSTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::WaitAutoPlayStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::WaitAutoPlayStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_WAITAUTOPLAYSTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::WaitAutoPlayStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::WaitAutoPlayStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_WAITAUTOPLAYSTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
