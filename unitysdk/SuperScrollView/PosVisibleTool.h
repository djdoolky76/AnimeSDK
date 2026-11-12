#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class RectTransform; }

#define SUPERSCROLLVIEW_POSVISIBLETOOL_CCTOR_OFFSET UNITYSDK_OFFSET(0xF4F0040)
#define SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLEBYPOS_OFFSET UNITYSDK_OFFSET(0xF4EFD00)
#define SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLEINHIERARCHY_OFFSET UNITYSDK_OFFSET(0xF4EFDC0)
#define SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLE_OFFSET UNITYSDK_OFFSET(0xF4EFE60)
#define SUPERSCROLLVIEW_POSVISIBLETOOL_SETRECTTRANSFORMVISIBLEBYPOS_OFFSET UNITYSDK_OFFSET(0xF4EFB50)

namespace SuperScrollView
{
	inline static constexpr unsigned int PosVisibleTool_TypeDefinitionIndex = 48667;

	class PosVisibleTool : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet__VeryFarWorldPos()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("SuperScrollView", "PosVisibleTool")->GetStaticField(0x4D40);
		}

		static ::UnityEngine::Vector3* StaticGet__VeryFarPos()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("SuperScrollView", "PosVisibleTool")->GetStaticField(0x4D4C);
		}

		static ::System::Int32* StaticGet_primeN2()
		{
			return (::System::Int32*)UnitySDK::FromName("SuperScrollView", "PosVisibleTool")->GetStaticField(0x4D58);
		}

		static ::System::Int32* StaticGet_primeN1()
		{
			return (::System::Int32*)UnitySDK::FromName("SuperScrollView", "PosVisibleTool")->GetStaticField(0x4D5C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_POSVISIBLETOOL_CCTOR_OFFSET))();
		}

		static ::System::Void SetRectTransformVisibleByPos(::UnityEngine::RectTransform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_POSVISIBLETOOL_SETRECTTRANSFORMVISIBLEBYPOS_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsInvisibleByPos(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLEBYPOS_OFFSET))(a1);
		}

		static ::System::Boolean IsInvisibleInHierarchy(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLEINHIERARCHY_OFFSET))(a1);
		}

		static ::System::Boolean IsInvisible(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLE_OFFSET))(a1);
		}

	};
}
