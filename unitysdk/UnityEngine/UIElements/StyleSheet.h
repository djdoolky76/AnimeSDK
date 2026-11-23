#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/ADDEC4CA6BE05AFF.h"
#include "unitysdk/A418C49FA6A8C1F7/F99E432606FC07EB.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/Dimension.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/ScalableImage.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/UIElements/StyleValueHandle.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine::UIElements { class StyleComplexSelector; }
namespace UnityEngine::UIElements { class StyleRule; }

#define UNITYENGINE_UIELEMENTS_STYLESHEET_CUSTOMSTARTSWITH_OFFSET UNITYSDK_OFFSET(0x435B880)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_FLATTENIMPORTEDSTYLESHEETSRECURSIVE_1_OFFSET UNITYSDK_OFFSET(0x435B940)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_FLATTENIMPORTEDSTYLESHEETSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x435BA70)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_GET_COMPLEXSELECTORS_OFFSET UNITYSDK_OFFSET(0x4179B70)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_GET_CONTENTHASH_OFFSET UNITYSDK_OFFSET(0x435CF50)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_GET_FLATTENEDRECURSIVEIMPORTS_OFFSET UNITYSDK_OFFSET(0x41977B0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_GET_IMPORTEDWITHERRORS_OFFSET UNITYSDK_OFFSET(0x4215900)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_GET_IMPORTEDWITHWARNINGS_OFFSET UNITYSDK_OFFSET(0x42E5EA0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_GET_ISDEFAULTSTYLESHEET_OFFSET UNITYSDK_OFFSET(0x435CF60)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_GET_RULES_OFFSET UNITYSDK_OFFSET(0x3A4AA60)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x435BAF0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READASSETREFERENCE_OFFSET UNITYSDK_OFFSET(0x435BB00)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READCOLOR_OFFSET UNITYSDK_OFFSET(0x435BB80)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READDIMENSION_OFFSET UNITYSDK_OFFSET(0x435BC20)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READENUM_OFFSET UNITYSDK_OFFSET(0x435BD20)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READFLOAT_OFFSET UNITYSDK_OFFSET(0x435BDA0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READFUNCTIONNAME_OFFSET UNITYSDK_OFFSET(0x435BE80)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READFUNCTION_OFFSET UNITYSDK_OFFSET(0x3DB8950)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READKEYWORD_OFFSET UNITYSDK_OFFSET(0x3DB8950)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READMISSINGASSETREFERENCEURL_OFFSET UNITYSDK_OFFSET(0x435BFF0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x435C070)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READSCALABLEIMAGE_OFFSET UNITYSDK_OFFSET(0x435C0F0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READSTRING_OFFSET UNITYSDK_OFFSET(0x435C190)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_READVARIABLE_OFFSET UNITYSDK_OFFSET(0x435C210)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SETUPREFERENCES_OFFSET UNITYSDK_OFFSET(0x435C290)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SET_COMPLEXSELECTORS_OFFSET UNITYSDK_OFFSET(0x435CF70)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SET_CONTENTHASH_OFFSET UNITYSDK_OFFSET(0x16A7C20)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SET_IMPORTEDWITHERRORS_OFFSET UNITYSDK_OFFSET(0x1873310)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SET_IMPORTEDWITHWARNINGS_OFFSET UNITYSDK_OFFSET(0x1873320)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SET_ISDEFAULTSTYLESHEET_OFFSET UNITYSDK_OFFSET(0x435CFA0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_SET_RULES_OFFSET UNITYSDK_OFFSET(0x435D0B0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADASSETREFERENCE_OFFSET UNITYSDK_OFFSET(0x435C970)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADCOLOR_OFFSET UNITYSDK_OFFSET(0x435CA00)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADDIMENSION_OFFSET UNITYSDK_OFFSET(0x435CA90)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADENUM_OFFSET UNITYSDK_OFFSET(0x435CBB0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADFLOAT_OFFSET UNITYSDK_OFFSET(0x435CC40)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x435CD40)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADSTRING_OFFSET UNITYSDK_OFFSET(0x435CDD0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADVARIABLE_OFFSET UNITYSDK_OFFSET(0x435CE60)
#define UNITYENGINE_UIELEMENTS_STYLESHEET__CCTOR_OFFSET UNITYSDK_OFFSET(0x435CEF0)
#define UNITYENGINE_UIELEMENTS_STYLESHEET__CTOR_OFFSET UNITYSDK_OFFSET(0x1F270C0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSheet_TypeDefinitionIndex = 13623;

	class StyleSheet : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::String** StaticGet_kCustomPropertyMarker()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(StyleSheet_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Boolean m_ImportedWithErrors; // 0x18
		::System::Boolean m_ImportedWithWarnings; // 0x19
		::System::Byte _padding0[0x6];
		::Il2CppArray<::UnityEngine::UIElements::StyleRule*>* m_Rules; // 0x20
		::Il2CppArray<::UnityEngine::UIElements::StyleComplexSelector*>* m_ComplexSelectors; // 0x28
		::Il2CppArray<::System::Single>* floats; // 0x30
		::Il2CppArray<::UnityEngine::UIElements::StyleSheets::Dimension>* dimensions; // 0x38
		::Il2CppArray<::UnityEngine::E46B881AA2636190>* colors; // 0x40
		::Il2CppArray<::System::String*>* strings; // 0x48
		::Il2CppArray<::UnityEngine::Object*>* assets; // 0x50
		::Il2CppArray<::System::Object*>* imports; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* m_FlattenedImportedStyleSheets; // 0x60
		::System::Int32 m_ContentHash; // 0x68
		::System::Byte _padding1[0x4];
		::Il2CppArray<::UnityEngine::UIElements::StyleSheets::ScalableImage>* scalableImages; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::UIElements::StyleComplexSelector*>* orderedNameSelectors; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::UIElements::StyleComplexSelector*>* orderedTypeSelectors; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::UIElements::StyleComplexSelector*>* orderedClassSelectors; // 0x88
		::System::Boolean m_IsDefaultStyleSheet; // 0x90

		::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* get_flattenedRecursiveImports()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_GET_FLATTENEDRECURSIVEIMPORTS_OFFSET))(this);
		}

		::System::String* ReadString(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READSTRING_OFFSET))(this, E38FD399E4DFEF27);
		}

		::System::String* ReadMissingAssetReferenceUrl(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READMISSINGASSETREFERENCEURL_OFFSET))(this, E38FD399E4DFEF27);
		}

		::System::Boolean TryReadEnum(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27, ::System::String*& E937D4885DAA1AE8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADENUM_OFFSET))(this, E38FD399E4DFEF27, E937D4885DAA1AE8);
		}

		::A418C49FA6A8C1F7::ADDEC4CA6BE05AFF ReadKeyword(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27)
		{
			return ((::A418C49FA6A8C1F7::ADDEC4CA6BE05AFF(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READKEYWORD_OFFSET))(this, E38FD399E4DFEF27);
		}

		::System::Void set_complexSelectors(::Il2CppArray<::UnityEngine::UIElements::StyleComplexSelector*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::UIElements::StyleComplexSelector*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SET_COMPLEXSELECTORS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::UIElements::StyleSheets::Dimension ReadDimension(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27)
		{
			return ((::UnityEngine::UIElements::StyleSheets::Dimension(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READDIMENSION_OFFSET))(this, E38FD399E4DFEF27);
		}

		::System::Void set_contentHash(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SET_CONTENTHASH_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* ReadResourcePath(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READRESOURCEPATH_OFFSET))(this, E38FD399E4DFEF27);
		}

		::System::String* ReadVariable(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READVARIABLE_OFFSET))(this, E38FD399E4DFEF27);
		}

		::System::Void set_importedWithErrors(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SET_IMPORTEDWITHERRORS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* ReadFunctionName(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READFUNCTIONNAME_OFFSET))(this, E38FD399E4DFEF27);
		}

		::UnityEngine::Object* ReadAssetReference(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READASSETREFERENCE_OFFSET))(this, E38FD399E4DFEF27);
		}

		::System::String* ReadEnum(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READENUM_OFFSET))(this, E38FD399E4DFEF27);
		}

		::System::Void SetupReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SETUPREFERENCES_OFFSET))(this);
		}

		::System::Boolean TryReadColor(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27, ::UnityEngine::E46B881AA2636190& E937D4885DAA1AE8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle, ::UnityEngine::E46B881AA2636190&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADCOLOR_OFFSET))(this, E38FD399E4DFEF27, E937D4885DAA1AE8);
		}

		::System::Boolean TryReadVariable(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27, ::System::String*& E937D4885DAA1AE8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADVARIABLE_OFFSET))(this, E38FD399E4DFEF27, E937D4885DAA1AE8);
		}

		::System::Boolean TryReadResourcePath(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27, ::System::String*& E937D4885DAA1AE8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADRESOURCEPATH_OFFSET))(this, E38FD399E4DFEF27, E937D4885DAA1AE8);
		}

		::System::Boolean get_isDefaultStyleSheet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_GET_ISDEFAULTSTYLESHEET_OFFSET))(this);
		}

		::System::Void set_isDefaultStyleSheet(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SET_ISDEFAULTSTYLESHEET_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean TryReadString(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27, ::System::String*& E937D4885DAA1AE8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADSTRING_OFFSET))(this, E38FD399E4DFEF27, E937D4885DAA1AE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET__CCTOR_OFFSET))();
		}

		::System::Void FlattenImportedStyleSheetsRecursive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_FLATTENIMPORTEDSTYLESHEETSRECURSIVE_OFFSET))(this);
		}

		::UnityEngine::E46B881AA2636190 ReadColor(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27)
		{
			return ((::UnityEngine::E46B881AA2636190(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READCOLOR_OFFSET))(this, E38FD399E4DFEF27);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET__CTOR_OFFSET))(this);
		}

		::System::Void set_rules(::Il2CppArray<::UnityEngine::UIElements::StyleRule*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::UIElements::StyleRule*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SET_RULES_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Boolean CustomStartsWith(::System::String* ADDE45EE9CFC9AA5, ::System::String* AC3ED6E7B8544859)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_CUSTOMSTARTSWITH_OFFSET))(ADDE45EE9CFC9AA5, AC3ED6E7B8544859);
		}

		::System::Boolean TryReadAssetReference(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27, ::UnityEngine::Object*& E937D4885DAA1AE8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle, ::UnityEngine::Object*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADASSETREFERENCE_OFFSET))(this, E38FD399E4DFEF27, E937D4885DAA1AE8);
		}

		::System::Void FlattenImportedStyleSheetsRecursive_1(::UnityEngine::UIElements::StyleSheet* A3240E0B408E3C48)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::StyleSheet*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_FLATTENIMPORTEDSTYLESHEETSRECURSIVE_1_OFFSET))(this, A3240E0B408E3C48);
		}

		::Il2CppArray<::UnityEngine::UIElements::StyleComplexSelector*>* get_complexSelectors()
		{
			return ((::Il2CppArray<::UnityEngine::UIElements::StyleComplexSelector*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_GET_COMPLEXSELECTORS_OFFSET))(this);
		}

		::System::Single ReadFloat(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READFLOAT_OFFSET))(this, E38FD399E4DFEF27);
		}

		::System::Boolean TryReadFloat(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27, ::System::Single& E937D4885DAA1AE8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADFLOAT_OFFSET))(this, E38FD399E4DFEF27, E937D4885DAA1AE8);
		}

		::UnityEngine::UIElements::StyleSheets::ScalableImage ReadScalableImage(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27)
		{
			return ((::UnityEngine::UIElements::StyleSheets::ScalableImage(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READSCALABLEIMAGE_OFFSET))(this, E38FD399E4DFEF27);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_ONENABLE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::UIElements::StyleRule*>* get_rules()
		{
			return ((::Il2CppArray<::UnityEngine::UIElements::StyleRule*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_GET_RULES_OFFSET))(this);
		}

		::System::Boolean get_importedWithErrors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_GET_IMPORTEDWITHERRORS_OFFSET))(this);
		}

		::System::Boolean get_importedWithWarnings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_GET_IMPORTEDWITHWARNINGS_OFFSET))(this);
		}

		::A418C49FA6A8C1F7::F99E432606FC07EB ReadFunction(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27)
		{
			return ((::A418C49FA6A8C1F7::F99E432606FC07EB(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_READFUNCTION_OFFSET))(this, E38FD399E4DFEF27);
		}

		::System::Boolean TryReadDimension(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27, ::UnityEngine::UIElements::StyleSheets::Dimension& E937D4885DAA1AE8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleValueHandle, ::UnityEngine::UIElements::StyleSheets::Dimension&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_TRYREADDIMENSION_OFFSET))(this, E38FD399E4DFEF27, E937D4885DAA1AE8);
		}

		::System::Int32 get_contentHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_GET_CONTENTHASH_OFFSET))(this);
		}

		::System::Void set_importedWithWarnings(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEET_SET_IMPORTEDWITHWARNINGS_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
