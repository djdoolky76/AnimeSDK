#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleSelectorPart.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_UIELEMENTS_STYLESELECTOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5BD5E0)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BD620)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR___C__TOSTRING_B__10_0_OFFSET UNITYSDK_OFFSET(0x1D5BD630)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSelector___c_TypeDefinitionIndex = 27618;

	class StyleSelector___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::System::String*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StyleSelector___c_TypeDefinitionIndex)->GetStaticField(0x24D30);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(StyleSelector___c_TypeDefinitionIndex)->GetStaticField(0x24D38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR___C__CTOR_OFFSET))(this);
		}

		::System::String* _ToString_b__10_0(::UnityEngine::UIElements::StyleSelectorPart p)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::UIElements::StyleSelectorPart))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR___C__TOSTRING_B__10_0_OFFSET))(this, p);
		}
	};
}
