#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleSelectorPart.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_UIELEMENTS_STYLESELECTOR_F5628F8349D4A8A6_A2C4B68749790944_OFFSET UNITYSDK_OFFSET(0x4242B20)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x4242CD0)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSelector_F5628F8349D4A8A6_TypeDefinitionIndex = 13058;

	class StyleSelector_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::StyleSelector_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::UnityEngine::UIElements::StyleSelector_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(StyleSelector_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::System::String*>** StaticGet_AD569E9A79F860BB()
		{
			return (::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StyleSelector_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::String* A2C4B68749790944(::UnityEngine::UIElements::StyleSelectorPart B5459FABA90E20BD)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::UIElements::StyleSelectorPart))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR_F5628F8349D4A8A6_A2C4B68749790944_OFFSET))(this, B5459FABA90E20BD);
		}
	};
}
