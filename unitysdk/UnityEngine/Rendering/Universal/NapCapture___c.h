#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE___C__CAPTURE_B__3_1_OFFSET UNITYSDK_OFFSET(0x1C87DB20)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C87DAD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C87DB10)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCapture___c_TypeDefinitionIndex = 26176;

	class NapCapture___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NapCapture___c_TypeDefinitionIndex)->GetStaticField(0x247D0);
		}
		static ::System::Action_1<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>** StaticGet___9__3_1()
		{
			return (::System::Action_1<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>**)Il2CppClass::FromTypeDefinitionIndex(NapCapture___c_TypeDefinitionIndex)->GetStaticField(0x247D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE___C__CTOR_OFFSET))(this);
		}

		::System::Void _Capture_b__3_1(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPTURE___C__CAPTURE_B__3_1_OFFSET))(this, x);
		}
	};
}
