#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicJson; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropCurveSetStartPoint; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPCURVESETSTARTPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D948850)
#define RPG_GAMECORE_PROPCURVESETSTARTPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9488A0)
#define RPG_GAMECORE_PROPCURVESETSTARTPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9487D0)

namespace RPG::GameCore
{
	class PropCurveSetStartPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicJson* TargetCurve; // 0x20
		::RPG::GameCore::DynamicString* CurvePointIndex; // 0x28
		::RPG::GameCore::DynamicFloat* Duration; // 0x30
		::RPG::MVector3 CurveRotationOffset; // 0x38
		::System::Boolean Positive; // 0x44
		::System::Boolean DurationLerp; // 0x45
		::System::Boolean UseCurveGORotation; // 0x46
		::System::Boolean UseCurveRotationYaw; // 0x47
		::System::Boolean UseCurveRotationRoll; // 0x48
		::System::Boolean UseCurveRotationPitch; // 0x49
		::System::Boolean WaitFinish; // 0x4A
		::System::Boolean ForceTick; // 0x4B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVESETSTARTPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveSetStartPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveSetStartPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVESETSTARTPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveSetStartPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveSetStartPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVESETSTARTPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
