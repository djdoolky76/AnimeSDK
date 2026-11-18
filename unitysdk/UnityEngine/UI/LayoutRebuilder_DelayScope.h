#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_UI_LAYOUTREBUILDER_DELAYSCOPE_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1E9519A0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_DELAYSCOPE_REGISTERTOSCOPE_OFFSET UNITYSDK_OFFSET(0x1E951CC0)
#define UNITYENGINE_UI_LAYOUTREBUILDER_DELAYSCOPE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E951A80)
#define UNITYENGINE_UI_LAYOUTREBUILDER_DELAYSCOPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E951E60)
#define UNITYENGINE_UI_LAYOUTREBUILDER_DELAYSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E951E50)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutRebuilder_DelayScope_TypeDefinitionIndex = 18412;

	class LayoutRebuilder_DelayScope : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::ObjectPool_1<::System::Object*>** StaticGet_s_delayScopes()
		{
			return (::UnityEngine::UI::ObjectPool_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder_DelayScope_TypeDefinitionIndex)->GetStaticField(0x87E0);
		}
		static ::System::Collections::Generic::Stack_1<::System::Object*>** StaticGet__scopes()
		{
			return (::System::Collections::Generic::Stack_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder_DelayScope_TypeDefinitionIndex)->GetStaticField(0x87E8);
		}
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _dirtyRectTransforms; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_DELAYSCOPE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_DELAYSCOPE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::UI::LayoutRebuilder_DelayScope* Allocate()
		{
			return ((::UnityEngine::UI::LayoutRebuilder_DelayScope*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_DELAYSCOPE_ALLOCATE_OFFSET))();
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_DELAYSCOPE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean RegisterToScope(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER_DELAYSCOPE_REGISTERTOSCOPE_OFFSET))(rectTransform);
		}
	};
}
