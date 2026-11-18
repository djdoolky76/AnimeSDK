#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/CharacterAimAnimConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class CharacterAimControlConfig; }
namespace MoleMole::Config { class IAimModeCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CHARACTERAIMMODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19095280)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAimModeConfig_TypeDefinitionIndex = 47763;

	class CharacterAimModeConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::IAimModeCameraConfig* cameraConfig; // 0x10
		::MoleMole::Config::CharacterAimControlConfig* controlConfig; // 0x18
		::System::Single crosshairShowDelay; // 0x20
		::System::Byte _padding0[0x4];
		::Foundation::AssetPath crosshairPath; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* aimTargetPointIgnoreTags; // 0x38
		::System::Boolean disableAimPitchAnimation; // 0x40
		::System::Byte _padding1[0x3];
		::System::Single enterRotateDuration; // 0x44
		::System::String* enterRotateCurve; // 0x48
		::System::Single aimingMinDistance; // 0x50
		::UnityEngine::Vector3 aimingDirection; // 0x54
		::System::String* sampleAimingPoint; // 0x60
		::UnityEngine::Vector3 sampleAimingDir; // 0x68
		::System::Byte _padding2[0x4];
		::System::String* sampleStateName; // 0x78
		::MoleMole::Config::CharacterAimAnimConfig aiming; // 0x80
		::System::Collections::Generic::List_1<::System::String*>* seamlessTransitionFromKeys; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERAIMMODECONFIG__CTOR_OFFSET))(this);
		}
	};
}
