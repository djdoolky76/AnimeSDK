#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ObjectPool_1; }
namespace UnityEngine::Rendering::Universal { class NapCaptureAction; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREDATA_GET_OFFSET UNITYSDK_OFFSET(0x1E15E4F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1E15E480)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREDATA_RELEASE_OFFSET UNITYSDK_OFFSET(0x1E15E630)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15E7A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E15E470)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCaptureData_TypeDefinitionIndex = 27317;

	class NapCaptureData : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ObjectPool_1<::UnityEngine::Rendering::Universal::NapCaptureData*>** StaticGet_Pool()
		{
			return (::UnityEngine::NAPRenderPipeline0::ObjectPool_1<::UnityEngine::Rendering::Universal::NapCaptureData*>**)Il2CppClass::FromTypeDefinitionIndex(NapCaptureData_TypeDefinitionIndex)->GetStaticField(0x23E30);
		}
		::UnityEngine::Rendering::Universal::NapCaptureAction* action; // 0x10
		::UnityEngine::Camera* camera; // 0x18
		::System::Boolean passEnqueued; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 id; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREDATA__CCTOR_OFFSET))();
		}

		::System::Void Init(::System::Int32 id, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::NapCaptureAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::NapCaptureAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREDATA_INIT_OFFSET))(this, id, camera, action);
		}

		static ::UnityEngine::Rendering::Universal::NapCaptureData* Get(::System::Int32 id, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::NapCaptureAction* action)
		{
			return ((::UnityEngine::Rendering::Universal::NapCaptureData*(*)(::System::Int32, ::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::NapCaptureAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREDATA_GET_OFFSET))(id, camera, action);
		}

		static ::System::Void Release(::UnityEngine::Rendering::Universal::NapCaptureData* d)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::NapCaptureData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTUREDATA_RELEASE_OFFSET))(d);
		}
	};
}
