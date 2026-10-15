#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicJson; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TravelShipArriveTo; }

#define RPG_GAMECORE_TRAVELSHIPARRIVETO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC3BAB0)
#define RPG_GAMECORE_TRAVELSHIPARRIVETO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC3BB00)
#define RPG_GAMECORE_TRAVELSHIPARRIVETO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC3BA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelShipArriveTo_TypeDefinitionIndex = 20974;

	class TravelShipArriveTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicJson* TargetCurve; // 0x20
		::RPG::GameCore::DynamicFloat* Duration; // 0x28
		::RPG::MVector3 CurveRotationOffset; // 0x30
		::System::Boolean UseCurveRotationYaw; // 0x3C
		::System::Boolean UseCurveRotationRoll; // 0x3D
		::System::Boolean UseCurveRotationPitch; // 0x3E
		::System::Boolean ForceTick; // 0x3F
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPARRIVETO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipArriveTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipArriveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPARRIVETO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipArriveTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipArriveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPARRIVETO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
