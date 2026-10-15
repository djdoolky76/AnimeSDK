#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCurveType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceMoveStateConfig; }
namespace RPG::GameCore { class FloatCurve; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACEMOVESTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D551560)
#define RPG_GAMECORE_CAKERACEMOVESTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D551280)

namespace RPG::GameCore
{
	class CakeRaceMoveStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ChargeDurationMs; // 0x10
		::System::UInt32 DurationMs; // 0x14
		::System::UInt32 AmplitudeMm; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* AnimTrigger; // 0x20
		::RPG::GameCore::CakeRaceCurveType CurveType; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::GameCore::FloatCurve* Curve; // 0x30
		::System::Boolean NeedApplyTrapSpeedFactor; // 0x38
		::System::Boolean NeedApplyGravity; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEMOVESTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceMoveStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceMoveStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEMOVESTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
