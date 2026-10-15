#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPlayerAnimConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPLAYERANIMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D1690)
#define RPG_GAMECORE_FIVEDIMPLAYERANIMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D1290)

namespace RPG::GameCore
{
	class FiveDimPlayerAnimConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single UnitLength; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* ShootArrowCurvePath; // 0x18
		::RPG::MVector3 ShootArrowPositionOffset; // 0x20
		::RPG::MVector3 ShootArrowRotationOffset; // 0x2C
		::RPG::MVector3 ShootArrowScaleOffset; // 0x38
		::System::Single ArrowMoveByCurveTransformDuration; // 0x44
		::System::Single ArrowMoveByCurvePosYDuration; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERANIMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlayerAnimConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlayerAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERANIMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
