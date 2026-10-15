#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetTargetAnimSpeedScale; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETANIMSPEEDSCALE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC44C0)
#define RPG_GAMECORE_SETTARGETANIMSPEEDSCALE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC44D0)
#define RPG_GAMECORE_SETTARGETANIMSPEEDSCALE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC4490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetAnimSpeedScale_TypeDefinitionIndex = 22885;

	class SetTargetAnimSpeedScale : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* AnimSpeedScale; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETANIMSPEEDSCALE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetAnimSpeedScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetAnimSpeedScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETANIMSPEEDSCALE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetAnimSpeedScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetAnimSpeedScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETANIMSPEEDSCALE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
