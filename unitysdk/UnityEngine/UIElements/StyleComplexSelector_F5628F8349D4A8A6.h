#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleSelectorPart.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class E891BA3236FD13E7; }
namespace UnityEngine::UIElements { class StyleSelector; }

#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_F5628F8349D4A8A6_BF3A91F9C6C931A5_OFFSET UNITYSDK_OFFSET(0x432ED20)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_F5628F8349D4A8A6_FFA0B2C473BC3700_OFFSET UNITYSDK_OFFSET(0x415B520)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x432FD00)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleComplexSelector_F5628F8349D4A8A6_TypeDefinitionIndex = 13510;

	class StyleComplexSelector_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::StyleComplexSelector_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::UnityEngine::UIElements::StyleComplexSelector_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(StyleComplexSelector_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::System::String*>** StaticGet_E9ECEFD236E8FFBC()
		{
			return (::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StyleComplexSelector_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::E891BA3236FD13E7<::UnityEngine::UIElements::StyleSelectorPart>** StaticGet_B55D445D85F5FA3C()
		{
			return (::System::E891BA3236FD13E7<::UnityEngine::UIElements::StyleSelectorPart>**)Il2CppClass::FromTypeDefinitionIndex(StyleComplexSelector_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::String* FFA0B2C473BC3700(::UnityEngine::UIElements::StyleSelector* BB8C609F76620E45)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::UIElements::StyleSelector*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_F5628F8349D4A8A6_FFA0B2C473BC3700_OFFSET))(this, BB8C609F76620E45);
		}

		::System::Boolean BF3A91F9C6C931A5(::UnityEngine::UIElements::StyleSelectorPart B5459FABA90E20BD)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleSelectorPart))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_F5628F8349D4A8A6_BF3A91F9C6C931A5_OFFSET))(this, B5459FABA90E20BD);
		}
	};
}
