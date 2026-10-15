#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropSteerMode.h"
#include "unitysdk/RPG/GameCore/SteerModeV2.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvPropSteerV2; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVPROPSTEERV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3ABA20)
#define RPG_GAMECORE_ADVPROPSTEERV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3ABA50)
#define RPG_GAMECORE_ADVPROPSTEERV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AB9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPropSteerV2_TypeDefinitionIndex = 22052;

	class AdvPropSteerV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::SteerModeV2 SteerMode; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* SteerAngle; // 0x28
		::RPG::GameCore::TargetEvaluator* SteerTarget; // 0x30
		::RPG::GameCore::TargetEvaluator* SteerFollowTarget; // 0x38
		::System::Boolean EnableFollow; // 0x40
		::System::Byte _padding1[0x7];
		::RPG::GameCore::DynamicFloat* StartThreshold; // 0x48
		::RPG::GameCore::DynamicFloat* StopThreshold; // 0x50
		::RPG::GameCore::PropSteerMode SpeedMode; // 0x58
		::System::Byte _padding2[0x4];
		::RPG::GameCore::DynamicFloat* Duration; // 0x60
		::RPG::GameCore::DynamicFloat* Speed; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPROPSTEERV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPropSteerV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPropSteerV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPROPSTEERV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPropSteerV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPropSteerV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPROPSTEERV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
