#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_LiftMode.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveDirection.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveMode.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveType.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class CurveMoveComponent_Config; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CURVEMOVECOMPONENTCONFIG_GET_RUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0x1641F0A0)
#define MOLEMOLE_CONFIG_CURVEMOVECOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1641F1C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CurveMoveComponentConfig_TypeDefinitionIndex = 64885;

	class CurveMoveComponentConfig : public ::System::Object
	{
	public:
		::MoleMole::Battle::CurveMoveComponent_Config* _runtimeConfig; // 0x10
		::UnityEngine::AnimationCurve* curve; // 0x18
		::System::String* curvePath; // 0x20
		::System::Single speed; // 0x28
		::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode speedMode; // 0x2C
		::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection moveDirection; // 0x30
		::MoleMole::Battle::CurveMoveComponent_Config_MoveType moveType; // 0x34
		::MoleMole::Battle::CurveMoveComponent_Config_LiftMode liftMode; // 0x38
		::MoleMole::Battle::CurveMoveComponent_Config_MoveMode moveMode; // 0x3C
		::System::Boolean useCache; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single speedDownAcceleration; // 0x44
		::System::Single speedUpAcceleration; // 0x48
		::System::Single time; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVECOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::CurveMoveComponent_Config* get_runtimeConfig()
		{
			return ((::MoleMole::Battle::CurveMoveComponent_Config*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVECOMPONENTCONFIG_GET_RUNTIMECONFIG_OFFSET))(this);
		}
	};
}
