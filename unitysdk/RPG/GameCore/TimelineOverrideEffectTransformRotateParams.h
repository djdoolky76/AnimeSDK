#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_Transform_RotateType.h"
#include "unitysdk/RPG/Client/RotateAxis.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class Effect_Transform; }
namespace RPG::GameCore { class TimelineOverrideEffectTransformRotateParams; }

#define RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMROTATEPARAMS_ANLOAIENLBA_OFFSET UNITYSDK_OFFSET(0xE7AB170)
#define RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMROTATEPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0xE7AB140)
#define RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMROTATEPARAMS_FNGBMCBEOCP_OFFSET UNITYSDK_OFFSET(0xE7AB040)

namespace RPG::GameCore
{
	class TimelineOverrideEffectTransformRotateParams : public ::System::Object
	{
	public:
		::RPG::Client::Effect_Transform_RotateType TransRotateType; // 0x10
		::System::Boolean UseLoopRotate; // 0x14
		::System::Boolean RotateObjectSpace; // 0x15
		::System::Boolean IsTimeSetAngle; // 0x16
		::System::Byte _padding0[0x1];
		::RPG::Client::RotateAxis RotAxis; // 0x18
		::System::Single RotateSpeed; // 0x1C
		::System::Single RotateFrequency; // 0x20
		::System::Single RotateNoise3DSpeed; // 0x24
		::System::Single WobbyScale; // 0x28
		::UnityEngine::Vector3 WobblyCenterOffset; // 0x2C
		::System::Single SwingAngle; // 0x38
		::System::Single SwingFrequency; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMROTATEPARAMS_CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::TimelineOverrideEffectTransformRotateParams* FNGBMCBEOCP(::RPG::Client::Effect_Transform* a1)
		{
			return ((::RPG::GameCore::TimelineOverrideEffectTransformRotateParams*(*)(::RPG::Client::Effect_Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMROTATEPARAMS_FNGBMCBEOCP_OFFSET))(a1);
		}

		::System::Void ANLOAIENLBA(::RPG::Client::Effect_Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMROTATEPARAMS_ANLOAIENLBA_OFFSET))(this, a1);
		}

	};
}
