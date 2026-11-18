#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine { class RectTransform; }

#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWUNITYSERVICES___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11579680)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWUNITYSERVICES___C__CTOR_OFFSET UNITYSDK_OFFSET(0x115796C0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWUNITYSERVICES___C__GETVIEWPORTCHILDREN_B__183_0_OFFSET UNITYSDK_OFFSET(0x115796D0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int LegacyScrollViewUnityServices___c_TypeDefinitionIndex = 42474;

	class LegacyScrollViewUnityServices___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::UnityEngine::RectTransform*>** StaticGet___9__183_0()
		{
			return (::System::Comparison_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(LegacyScrollViewUnityServices___c_TypeDefinitionIndex)->GetStaticField(0x359A0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LegacyScrollViewUnityServices___c_TypeDefinitionIndex)->GetStaticField(0x359A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWUNITYSERVICES___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWUNITYSERVICES___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetViewportChildren_b__183_0(::UnityEngine::RectTransform* lhs, ::UnityEngine::RectTransform* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWUNITYSERVICES___C__GETVIEWPORTCHILDREN_B__183_0_OFFSET))(this, lhs, rhs);
		}
	};
}
