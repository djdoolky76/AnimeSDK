#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UIELEMENTS_POINTERID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4BF870)

namespace UnityEngine::UIElements
{
	class PointerId : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_touchPointerIdBase()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UIElements", "PointerId")->GetStaticField(0x6980);
		}

		static ::System::Int32* StaticGet_maxPointers()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UIElements", "PointerId")->GetStaticField(0x6984);
		}

		static ::System::Int32* StaticGet_mousePointerId()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UIElements", "PointerId")->GetStaticField(0x6988);
		}

		static ::System::Int32* StaticGet_touchPointerCount()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UIElements", "PointerId")->GetStaticField(0x698C);
		}

		static ::System::Int32* StaticGet_invalidPointerId()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UIElements", "PointerId")->GetStaticField(0x6990);
		}

		static ::System::Int32* StaticGet_penPointerCount()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UIElements", "PointerId")->GetStaticField(0x6994);
		}

		static ::System::Int32* StaticGet_penPointerIdBase()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UIElements", "PointerId")->GetStaticField(0x6998);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERID_CCTOR_OFFSET))();
		}

	};
}
