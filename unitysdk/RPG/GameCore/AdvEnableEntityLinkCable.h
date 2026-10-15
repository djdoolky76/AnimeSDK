#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEnableEntityLinkCable; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENABLEENTITYLINKCABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36EB40)
#define RPG_GAMECORE_ADVENABLEENTITYLINKCABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D36EB50)
#define RPG_GAMECORE_ADVENABLEENTITYLINKCABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D36EB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEnableEntityLinkCable_TypeDefinitionIndex = 21812;

	class AdvEnableEntityLinkCable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEENTITYLINKCABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEnableEntityLinkCable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEnableEntityLinkCable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEENTITYLINKCABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEnableEntityLinkCable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEnableEntityLinkCable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEENTITYLINKCABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
