#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_ASSETENTRY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x42CE0D0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_ASSETENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x42CE050)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeAsset_AssetEntry_TypeDefinitionIndex = 13221;

	struct alignas(8) VisualTreeAsset_AssetEntry
	{
		::System::String* path; // 0x10
		::System::String* typeFullName; // 0x18
		::UnityEngine::Object* asset; // 0x20
		::System::Type* m_CachedType; // 0x28

		::System::Type* get_type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_ASSETENTRY_GET_TYPE_OFFSET))(this);
		}

		::System::Void _ctor(::System::String* EFF983A80A48BB2A, ::System::Type* A288CB28FC2A6DA3, ::UnityEngine::Object* B286159CFDC40A9F)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_ASSETENTRY__CTOR_OFFSET))(this, EFF983A80A48BB2A, A288CB28FC2A6DA3, B286159CFDC40A9F);
		}
	};
}
