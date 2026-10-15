#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareServerSubMissionState; }

#define RPG_GAMECORE_BYCOMPARESERVERSUBMISSIONSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A6100)
#define RPG_GAMECORE_BYCOMPARESERVERSUBMISSIONSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A6110)
#define RPG_GAMECORE_BYCOMPARESERVERSUBMISSIONSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A60C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareServerSubMissionState_TypeDefinitionIndex = 20314;

	class ByCompareServerSubMissionState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERVERSUBMISSIONSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareServerSubMissionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareServerSubMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERVERSUBMISSIONSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareServerSubMissionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareServerSubMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERVERSUBMISSIONSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
