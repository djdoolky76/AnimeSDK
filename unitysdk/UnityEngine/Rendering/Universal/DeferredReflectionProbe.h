#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DeferredReflectionProbeResolution.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class CubemapArray; }
namespace UnityEngine { class ReflectionProbe; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_GETINDEXINCACHEARRAY_OFFSET UNITYSDK_OFFSET(0x16E4D240)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_GET_BLENDDISTANCE_OFFSET UNITYSDK_OFFSET(0x16E4CEC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_GET_CUBEMAPARRAYIMPORTANCE_OFFSET UNITYSDK_OFFSET(0x16E4D170)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_GET_CUBEMAPARRAY_OFFSET UNITYSDK_OFFSET(0x16E4C7F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_GET_INDEXINARRAY_OFFSET UNITYSDK_OFFSET(0x16E4D0C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16E4D9F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16E4D840)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16E4D3B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_REGISTERTOENGINE_OFFSET UNITYSDK_OFFSET(0x16E4C850)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_SETOLDINDEX_OFFSET UNITYSDK_OFFSET(0x16E4CF30)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_SET_BLENDDISTANCE_OFFSET UNITYSDK_OFFSET(0x16E4CED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_SET_CUBEMAPARRAYIMPORTANCE_OFFSET UNITYSDK_OFFSET(0x16E4D180)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_SET_CUBEMAPARRAY_OFFSET UNITYSDK_OFFSET(0x16E4C800)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_SET_INDEXINARRAY_OFFSET UNITYSDK_OFFSET(0x16E4D110)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E4DA90)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DeferredReflectionProbe_TypeDefinitionIndex = 26538;

	class DeferredReflectionProbe : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single m_BlendDistance; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::CubemapArray* m_CubemapArray; // 0x20
		::UnityEngine::Rendering::Universal::DeferredReflectionProbeResolution m_Resolution; // 0x28
		::System::Int32 m_Index; // 0x2C
		::System::Boolean useAsFallBackReflectionCube; // 0x30
		::System::Byte _padding1[0x3];
		::System::Int32 m_NewVersionIndex; // 0x34
		::System::Boolean isCustomCubeArray; // 0x38
		::System::Byte _padding2[0x3];
		::System::Int32 _CubeMapArrayImportance; // 0x3C
		::System::Int32 m_ProbeImportance; // 0x40
		::System::Byte _padding3[0x4];
		::UnityEngine::ReflectionProbe* m_Probe; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE__CTOR_OFFSET))(this);
		}

		::UnityEngine::CubemapArray* get_cubemapArray()
		{
			return ((::UnityEngine::CubemapArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_GET_CUBEMAPARRAY_OFFSET))(this);
		}

		::System::Void set_cubemapArray(::UnityEngine::CubemapArray* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CubemapArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_SET_CUBEMAPARRAY_OFFSET))(this, value);
		}

		::System::Single get_BlendDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_GET_BLENDDISTANCE_OFFSET))(this);
		}

		::System::Void set_BlendDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_SET_BLENDDISTANCE_OFFSET))(this, value);
		}

		::System::Void SetOldIndex(::System::Int32 indexValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_SETOLDINDEX_OFFSET))(this, indexValue);
		}

		::System::Int32 get_IndexInArray()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_GET_INDEXINARRAY_OFFSET))(this);
		}

		::System::Void set_IndexInArray(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_SET_INDEXINARRAY_OFFSET))(this, value);
		}

		::System::Int32 get_cubeMapArrayImportance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_GET_CUBEMAPARRAYIMPORTANCE_OFFSET))(this);
		}

		::System::Void set_cubeMapArrayImportance(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_SET_CUBEMAPARRAYIMPORTANCE_OFFSET))(this, value);
		}

		::System::Int32 GetIndexInCacheArray()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_GETINDEXINCACHEARRAY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterToEngine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONPROBE_REGISTERTOENGINE_OFFSET))(this);
		}
	};
}
