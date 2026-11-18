#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/LightDataGI.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Light; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C87EC90)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C87ECD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1C87ECE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE___C___CCTOR_B__42_1_OFFSET UNITYSDK_OFFSET(0x1C87ED30)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE___C___CTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1C87EE40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRenderPipeline___c_TypeDefinitionIndex = 26304;

	class UniversalRenderPipeline___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline___c_TypeDefinitionIndex)->GetStaticField(0x23EE0);
		}
		static ::System::Comparison_1<::UnityEngine::Camera*>** StaticGet___9__43_0()
		{
			return (::System::Comparison_1<::UnityEngine::Camera*>**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline___c_TypeDefinitionIndex)->GetStaticField(0x23EE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__42_0(::System::String* arg)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE___C___CCTOR_B__42_0_OFFSET))(this, arg);
		}

		::System::Void __cctor_b__42_1(::Il2CppArray<::UnityEngine::Light*>* requests, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Light*>*, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE___C___CCTOR_B__42_1_OFFSET))(this, requests, lightsOutput);
		}

		::System::Int32 __ctor_b__43_0(::UnityEngine::Camera* camera1, ::UnityEngine::Camera* camera2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE___C___CTOR_B__43_0_OFFSET))(this, camera1, camera2);
		}
	};
}
