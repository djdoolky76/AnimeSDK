#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEnableOwnerIdleShow; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENABLEOWNERIDLESHOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39C990)
#define RPG_GAMECORE_ADVENABLEOWNERIDLESHOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39C9A0)
#define RPG_GAMECORE_ADVENABLEOWNERIDLESHOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39C960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEnableOwnerIdleShow_TypeDefinitionIndex = 20561;

	class AdvEnableOwnerIdleShow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEOWNERIDLESHOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEnableOwnerIdleShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEnableOwnerIdleShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEOWNERIDLESHOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEnableOwnerIdleShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEnableOwnerIdleShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEOWNERIDLESHOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
