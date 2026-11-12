#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SceneTransformAnim_FloatAxis.h"
#include "unitysdk/RPG/Client/SceneTransformAnim_OffsetType.h"
#include "unitysdk/RPG/Client/SceneTransformAnim_RotateAxis.h"
#include "unitysdk/RPG/Client/SceneTransformAnim_RotateType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class DriftComponentData; }

#define RPG_CLIENT_SCENETRANSFORMANIM_CTOR_OFFSET UNITYSDK_OFFSET(0xEAFFC60)
#define RPG_CLIENT_SCENETRANSFORMANIM_GET_ISUPATEINEDITORMODE_OFFSET UNITYSDK_OFFSET(0xEAFFC40)
#define RPG_CLIENT_SCENETRANSFORMANIM_SET_ISUPATEINEDITORMODE_OFFSET UNITYSDK_OFFSET(0xEAFFC50)
#define RPG_CLIENT_SCENETRANSFORMANIM_TODRIFTCOMPONENTDATA_OFFSET UNITYSDK_OFFSET(0xEAFFAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneTransformAnim_TypeDefinitionIndex = 72919;

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
		::System::Boolean UseLocalWobblyPosition; // 0x30
		::System::Byte _padding2[0x3];
		::System::Single OffsetNoise3DSpeed; // 0x34
		::System::Single RandomMove3DBoxSize; // 0x38
		::RPG::Client::SceneTransformAnim_RotateType TransRotateType; // 0x3C
		::System::Boolean UsePingPongRotate; // 0x40
		::System::Boolean UseLocalRotation; // 0x41
		::System::Byte _padding3[0x2];
		::RPG::Client::SceneTransformAnim_RotateAxis RotAxis; // 0x44
		::System::Single RotateSpeed; // 0x48
		::System::Boolean UseLocalWobblyRotation; // 0x4C
		::System::Byte _padding4[0x3];
		::System::Single RotateNoise3DSpeed; // 0x50
		::System::Single WobbyScale; // 0x54
		::UnityEngine::Vector3 WobblyCenterOffset; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETRANSFORMANIM_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::DriftComponentData* ToDriftComponentData(::System::Int32 a1)
		{
			return ((::RPG::GameCore::DriftComponentData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENETRANSFORMANIM_TODRIFTCOMPONENTDATA_OFFSET))(this, a1);
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
