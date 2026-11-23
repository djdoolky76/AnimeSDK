#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class UxmlObjectAsset; }

#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_UXMLOBJECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F77300)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeAsset_UxmlObjectEntry_TypeDefinitionIndex = 13220;

	struct alignas(8) VisualTreeAsset_UxmlObjectEntry
	{
		::System::Int32 parentId; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>* uxmlObjectAssets; // 0x18

		::System::Void _ctor(::System::Int32 BA570F252C8CF45D, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>* E70B17FAF28E545C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_UXMLOBJECTENTRY__CTOR_OFFSET))(this, BA570F252C8CF45D, E70B17FAF28E545C);
		}
	};
}
