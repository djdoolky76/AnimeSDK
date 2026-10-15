#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SceneTransformAnim_FloatAxis.h"
#include "unitysdk/RPG/Client/SceneTransformAnim_OffsetType.h"
#include "unitysdk/RPG/Client/SceneTransformAnim_RotateAxis.h"
#include "unitysdk/RPG/Client/SceneTransformAnim_RotateType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_SCENETRANSFORMANIM_CTOR_OFFSET UNITYSDK_OFFSET(0xE095520)
#define RPG_CLIENT_SCENETRANSFORMANIM_GET_ISUPATEINEDITORMODE_OFFSET UNITYSDK_OFFSET(0xE095500)
#define RPG_CLIENT_SCENETRANSFORMANIM_SET_ISUPATEINEDITORMODE_OFFSET UNITYSDK_OFFSET(0xE095510)

namespace RPG::Client
{
	class SceneTransformAnim : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsUpateInEditorMode_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::Client::SceneTransformAnim_OffsetType TransOffsetType; // 0x1C
		::System::Boolean UseLocalDirection; // 0x20
		::System::Byte _padding1[0x3];
		::RPG::Client::SceneTransformAnim_FloatAxis FloAxis; // 0x24
		::System::Single FloatFrequency; // 0x28
		::System::Single FloatDistance; // 0x2C
		::System::Single OffsetNoise3DSpeed; // 0x30
		::System::Single RandomMove3DBoxSize; // 0x34
		::RPG::Client::SceneTransformAnim_RotateType TransRotateType; // 0x38
		::System::Boolean UsePingPongRotate; // 0x3C
		::System::Boolean UseLocalRotation; // 0x3D
		::System::Byte _padding2[0x2];
		::RPG::Client::SceneTransformAnim_RotateAxis RotAxis; // 0x40
		::System::Single RotateSpeed; // 0x44
		::System::Single RotateNoise3DSpeed; // 0x48
		::System::Single WobbyScale; // 0x4C
		::UnityEngine::Vector3 WobblyCenterOffset; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETRANSFORMANIM_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsUpateInEditorMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETRANSFORMANIM_GET_ISUPATEINEDITORMODE_OFFSET))(this);
		}

		::System::Void set_IsUpateInEditorMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETRANSFORMANIM_SET_ISUPATEINEDITORMODE_OFFSET))(this, a1);
		}

	};
}
