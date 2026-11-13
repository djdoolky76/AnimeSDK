#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UIELEMENTS_POINTERID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFD4B70)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerId_TypeDefinitionIndex = 5985;

	class PointerId : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_touchPointerIdBase()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UIElements", "PointerId")->GetStaticField(0x6020);
		}

		static ::System::Int32* StaticGet_maxPointers()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UIElements", "PointerId")->GetStaticField(0x6024);
		}

		static ::System::Int32* StaticGet_mousePointerId()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UIElements", "PointerId")->GetStaticField(0x6028);
		}

		static ::System::Int32* StaticGet_penPointerCount()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UIElements", "PointerId")->GetStaticField(0x602C);
		}

		static ::System::Int32* StaticGet_invalidPointerId()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UIElements", "PointerId")->GetStaticField(0x6030);
		}

		static ::System::Int32* StaticGet_touchPointerCount()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UIElements", "PointerId")->GetStaticField(0x6034);
		}

		static ::System::Int32* StaticGet_penPointerIdBase()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UIElements", "PointerId")->GetStaticField(0x6038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERID_CCTOR_OFFSET))();
		}

	};
}
