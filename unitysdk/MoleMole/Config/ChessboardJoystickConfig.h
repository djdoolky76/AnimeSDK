#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_CONFIG_CHESSBOARDJOYSTICKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFFCF940)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardJoystickConfig_TypeDefinitionIndex = 57942;

	class ChessboardJoystickConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector4 InsideDeadZonePercent; // 0x10
		::UnityEngine::Vector4 SafeArea; // 0x20
		::UnityEngine::Vector2 AnchorPosition; // 0x30
		::UnityEngine::Vector4 Angle; // 0x38
		::System::Boolean IsUseJoystick; // 0x48
		::System::Boolean IsFixedJoystick; // 0x49
		::System::Boolean SafeAreaVisible; // 0x4A
		::System::Byte _padding0[0x1];
		::System::Single OutsideDeadZonePercent; // 0x4C
		::UnityEngine::Vector4 Anchor; // 0x50
		::System::Single MaxMoveInterval; // 0x60
		::System::Single FixedFadeOutTime; // 0x64
		::System::Single FadeOutTime; // 0x68
		::UnityEngine::Vector3Int DefaultSettingParam; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDJOYSTICKCONFIG__CTOR_OFFSET))(this);
		}
	};
}
