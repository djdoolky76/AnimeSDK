#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_POINTERTYPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x20770030)
#define UNITYENGINE_UIELEMENTS_POINTERTYPE_GETPOINTERTYPE_OFFSET UNITYSDK_OFFSET(0x2076FF90)
#define UNITYENGINE_UIELEMENTS_POINTERTYPE_ISDIRECTMANIPULATIONDEVICE_OFFSET UNITYSDK_OFFSET(0x2076CF30)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerType_TypeDefinitionIndex = 5984;

	class PointerType : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_mouse()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.UIElements", "PointerType")->GetStaticField(0x28380);
		}

		static ::System::String** StaticGet_pen()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.UIElements", "PointerType")->GetStaticField(0x28388);
		}

		static ::System::String** StaticGet_touch()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.UIElements", "PointerType")->GetStaticField(0x28390);
		}

		static ::System::String** StaticGet_unknown()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.UIElements", "PointerType")->GetStaticField(0x28398);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERTYPE_CCTOR_OFFSET))();
		}

		static ::System::String* GetPointerType(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERTYPE_GETPOINTERTYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsDirectManipulationDevice(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERTYPE_ISDIRECTMANIPULATIONDEVICE_OFFSET))(a1);
		}

	};
}
