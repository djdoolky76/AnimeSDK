#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/F594C3ACF1009579.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleSelectorPart.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class StyleRule; }
namespace UnityEngine::UIElements { class StyleSelector; }

#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_CACHEPSEUDOSTATEMASKS_OFFSET UNITYSDK_OFFSET(0x432DA50)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_CALCULATEHASHES_OFFSET UNITYSDK_OFFSET(0x432E0E0)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_GET_ISSIMPLE_OFFSET UNITYSDK_OFFSET(0x4179B50)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_GET_RULE_OFFSET UNITYSDK_OFFSET(0x169C070)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_GET_SELECTORS_OFFSET UNITYSDK_OFFSET(0x3929700)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_GET_SPECIFICITY_OFFSET UNITYSDK_OFFSET(0x310DC20)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x432E700)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_SET_RULE_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_SET_SELECTORS_OFFSET UNITYSDK_OFFSET(0x432EA00)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_STYLESELECTORPARTCOMPARE_OFFSET UNITYSDK_OFFSET(0x432E730)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x432E7F0)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x432E970)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleComplexSelector_TypeDefinitionIndex = 13511;

	class StyleComplexSelector : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_s_PseudoStates()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(StyleComplexSelector_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>** StaticGet_m_HashList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>**)Il2CppClass::FromTypeDefinitionIndex(StyleComplexSelector_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::A418C49FA6A8C1F7::F594C3ACF1009579 ancestorHashes; // 0x10
		::System::Int32 m_Specificity; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::UIElements::StyleRule* _rule_k__BackingField; // 0x28
		::System::Boolean m_isSimple; // 0x30
		::System::Byte _padding1[0x7];
		::Il2CppArray<::UnityEngine::UIElements::StyleSelector*>* m_Selectors; // 0x38
		::System::Int32 ruleIndex; // 0x40
		::System::Byte _padding2[0x4];
		::UnityEngine::UIElements::StyleComplexSelector* nextInTable; // 0x48
		::System::Int32 orderInStyleSheet; // 0x50

		::System::Void CachePseudoStateMasks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_CACHEPSEUDOSTATEMASKS_OFFSET))(this);
		}

		::System::Int32 get_specificity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_GET_SPECIFICITY_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::UIElements::StyleSelector*>* get_selectors()
		{
			return ((::Il2CppArray<::UnityEngine::UIElements::StyleSelector*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_GET_SELECTORS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_TOSTRING_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR__CCTOR_OFFSET))();
		}

		::System::Void set_selectors(::Il2CppArray<::UnityEngine::UIElements::StyleSelector*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::UIElements::StyleSelector*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_SET_SELECTORS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean get_isSimple()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_GET_ISSIMPLE_OFFSET))(this);
		}

		::System::Void CalculateHashes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_CALCULATEHASHES_OFFSET))(this);
		}

		::UnityEngine::UIElements::StyleRule* get_rule()
		{
			return ((::UnityEngine::UIElements::StyleRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_GET_RULE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Void set_rule(::UnityEngine::UIElements::StyleRule* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::StyleRule*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_SET_RULE_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Int32 StyleSelectorPartCompare(::UnityEngine::UIElements::StyleSelectorPart BB8C609F76620E45, ::UnityEngine::UIElements::StyleSelectorPart A0A0D02932F12CFD)
		{
			return ((::System::Int32(*)(::UnityEngine::UIElements::StyleSelectorPart, ::UnityEngine::UIElements::StyleSelectorPart))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_STYLESELECTORPARTCOMPARE_OFFSET))(BB8C609F76620E45, A0A0D02932F12CFD);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
