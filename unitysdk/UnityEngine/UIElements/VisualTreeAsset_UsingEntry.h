#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UIElements { class VisualTreeAsset; }
template <typename T> class A651EC0956AC1F3D;

#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_USINGENTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x42E1DE0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_USINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x42E1E50)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeAsset_UsingEntry_TypeDefinitionIndex = 13216;

	struct alignas(8) VisualTreeAsset_UsingEntry
	{
		static ::A651EC0956AC1F3D<::System::Object*>** StaticGet_comparer()
		{
			return (::A651EC0956AC1F3D<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(VisualTreeAsset_UsingEntry_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::String* alias; // 0x10
		::System::String* path; // 0x18
		::UnityEngine::UIElements::VisualTreeAsset* asset; // 0x20

		::System::Void _ctor(::System::String* A0B2472FEED826E3, ::System::String* EFF983A80A48BB2A)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_USINGENTRY__CTOR_OFFSET))(this, A0B2472FEED826E3, EFF983A80A48BB2A);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_USINGENTRY__CCTOR_OFFSET))();
		}
	};
}
