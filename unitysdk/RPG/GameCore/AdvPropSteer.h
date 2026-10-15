#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropSteerMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvPropSteer; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVPROPSTEER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AB5F0)
#define RPG_GAMECORE_ADVPROPSTEER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AB620)
#define RPG_GAMECORE_ADVPROPSTEER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AB5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPropSteer_TypeDefinitionIndex = 22050;

	class AdvPropSteer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* SteerTarget; // 0x20
		::RPG::GameCore::DynamicFloat* SteerAngle; // 0x28
		::RPG::GameCore::PropSteerMode Mode; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Duration; // 0x38
		::RPG::GameCore::DynamicFloat* Speed; // 0x40
		::System::Boolean IsFollow; // 0x48
		::System::Boolean Stop; // 0x49
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPROPSTEER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPropSteer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPropSteer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPROPSTEER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPropSteer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPropSteer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPROPSTEER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
