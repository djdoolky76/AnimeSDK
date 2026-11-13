#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class RectTransform; }

#define SUPERSCROLLVIEW_POSVISIBLETOOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x17138CF0)
#define SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLEBYPOS_OFFSET UNITYSDK_OFFSET(0x171389B0)
#define SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLEINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x17138A70)
#define SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLE_OFFSET UNITYSDK_OFFSET(0x17138B10)
#define SUPERSCROLLVIEW_POSVISIBLETOOL_SETRECTTRANSFORMVISIBLEBYPOS_OFFSET UNITYSDK_OFFSET(0x17138800)

namespace SuperScrollView
{
	inline static constexpr unsigned int PosVisibleTool_TypeDefinitionIndex = 48667;

	class PosVisibleTool : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet__VeryFarPos()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("SuperScrollView", "PosVisibleTool")->GetStaticField(0x5D50);
		}

		static ::System::Int32* StaticGet_primeN1()
		{
			return (::System::Int32*)UnitySDK::FromName("SuperScrollView", "PosVisibleTool")->GetStaticField(0x5D5C);
		}

		static ::System::Int32* StaticGet_primeN2()
		{
			return (::System::Int32*)UnitySDK::FromName("SuperScrollView", "PosVisibleTool")->GetStaticField(0x5D60);
		}

		static ::UnityEngine::Vector3* StaticGet__VeryFarWorldPos()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("SuperScrollView", "PosVisibleTool")->GetStaticField(0x5D64);
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
