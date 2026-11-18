#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WaterInteractiveDynamicObjectState.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WaterInteractiveObjectType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_COLLECTRENDERERS_OFFSET UNITYSDK_OFFSET(0x1E8F6FE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E8F7F90)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E8F7EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1E8F7B80)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E8F6E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E8F7AA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F8640)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterInteractiveObject_TypeDefinitionIndex = 26484;

	class WaterInteractiveObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single InteractionIntensity; // 0x18
		::System::Single RippleIntensity; // 0x1C
		::System::Single FoamIntensity; // 0x20
		::System::Single InteractionRadius; // 0x24
		::UnityEngine::Rendering::Universal::WaterInteractiveObjectType ObjectType; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::Mesh* waterInteractiveProxy; // 0x30
		::System::Boolean useAllRenderers; // 0x38
		::System::Byte _padding1[0x3];
		::System::Single MinUpdateInterval; // 0x3C
		::System::Single UpdateToStaticInterval; // 0x40
		::System::Single PositionChangeThreshold; // 0x44
		::System::Single RotationChangeThreshold; // 0x48
		::System::Single ScaleChangeThreshold; // 0x4C
		::System::Boolean DrawStatic; // 0x50
		::System::Boolean DrawDynamic; // 0x51
		::System::Byte _padding2[0x2];
		::UnityEngine::Rendering::Universal::WaterInteractiveDynamicObjectState DynamicObjectState; // 0x54
		::System::Single transformPositionDelta; // 0x58
		::System::Single transformRotationDelta; // 0x5C
		::System::Single transformScaleDelta; // 0x60
		::System::Single lastDynamicUpdateTime; // 0x64
		::System::Single lastUpdateToStaticTime; // 0x68
		::System::Boolean bInit; // 0x6C
		::System::Boolean bTimeUpdateToStatic; // 0x6D
		::System::Boolean bTimeUpdateDynamic; // 0x6E
		::System::Boolean bTransUpdate; // 0x6F
		::System::Boolean bTransUpdateDynamic; // 0x70
		::System::Byte _padding3[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* childRenderers; // 0x78
		::UnityEngine::Rendering::Universal::WaterInteractiveObjectType cachedObjectType; // 0x80
		::UnityEngine::Vector3 lastTransformPosition; // 0x84
		::UnityEngine::Quaternion lastTransformRotation; // 0x90
		::UnityEngine::Vector3 lastTransformScale; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_ONENABLE_OFFSET))(this);
		}

		::System::Void CollectRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_COLLECTRENDERERS_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_ONVALIDATE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_LATEUPDATE_OFFSET))(this);
		}
	};
}
