#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CustomCameraBattleTransitionShotConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CUSTOMCAMERABATTLETRANSITIONSHOTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E9960)
#define RPG_GAMECORE_CUSTOMCAMERABATTLETRANSITIONSHOTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E9110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomCameraBattleTransitionShotConfig_TypeDefinitionIndex = 20424;

	class CustomCameraBattleTransitionShotConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 CenterOffset; // 0x10
		::System::Single Radius; // 0x1C
		::System::Single Duration; // 0x20
		::System::Single AngleSpeed; // 0x24
		::System::Single LinearSpeed; // 0x28
		::System::Single RotDuration; // 0x2C
		::System::Single WorldYOffset; // 0x30
		::System::Single Dutch; // 0x34
		::System::Boolean UseStartPoleAngle; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single StartPoleAngle; // 0x3C
		::System::Single SecondStartPoleAngle; // 0x40
		::System::Single StartPoleAngleBias; // 0x44
		::System::Single SecondStartPoleAngleBias; // 0x48
		::System::Single RadiusOffsetMin; // 0x4C
		::System::String* OffsetChangeCurve; // 0x50
		::System::Single FOVStart; // 0x58
		::System::Single FOVEnd; // 0x5C
		::System::String* FOVChangeCurve; // 0x60
		::System::Single CameraRadius; // 0x68
		::RPG::MVector3 CameraMove; // 0x6C
		::System::String* CameraMoveCurveX; // 0x78
		::System::String* CameraMoveCurveY; // 0x80
		::System::String* CameraMoveCurveZ; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMCAMERABATTLETRANSITIONSHOTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CustomCameraBattleTransitionShotConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CustomCameraBattleTransitionShotConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMCAMERABATTLETRANSITIONSHOTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
