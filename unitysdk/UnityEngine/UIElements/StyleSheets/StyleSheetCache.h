#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/StylePropertyID.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/StyleValue.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UIElements::StyleSheets { class StyleSheetCache_SheetHandleKeyComparer; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F493CE0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_GETINITIALVALUE_OFFSET UNITYSDK_OFFSET(0x1F493710)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StyleSheetCache_TypeDefinitionIndex = 6012;

	class StyleSheetCache : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::UIElements::StyleSheets::StylePropertyID>** StaticGet_s_NameToIDCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::UIElements::StyleSheets::StylePropertyID>**)UnitySDK::FromName("UnityEngine.UIElements.StyleSheets", "StyleSheetCache")->GetStaticField(0x2E4E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::Il2CppArray<::UnityEngine::UIElements::StyleSheets::StylePropertyID>*>** StaticGet_s_RulePropertyIDsCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::Il2CppArray<::UnityEngine::UIElements::StyleSheets::StylePropertyID>*>**)UnitySDK::FromName("UnityEngine.UIElements.StyleSheets", "StyleSheetCache")->GetStaticField(0x2E4E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_s_DeprecatedNames()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("UnityEngine.UIElements.StyleSheets", "StyleSheetCache")->GetStaticField(0x2E4F0);
		}

		static ::Il2CppArray<::UnityEngine::UIElements::StyleSheets::StyleValue>** StaticGet_s_InitialStyleValues()
		{
			return (::Il2CppArray<::UnityEngine::UIElements::StyleSheets::StyleValue>**)UnitySDK::FromName("UnityEngine.UIElements.StyleSheets", "StyleSheetCache")->GetStaticField(0x2E4F8);
		}

		static ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer** StaticGet_s_Comparer()
		{
			return (::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer**)UnitySDK::FromName("UnityEngine.UIElements.StyleSheets", "StyleSheetCache")->GetStaticField(0x2E500);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>** StaticGet_s_EnumToIntCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("UnityEngine.UIElements.StyleSheets", "StyleSheetCache")->GetStaticField(0x2E508);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_CCTOR_OFFSET))();
		}

		static ::UnityEngine::UIElements::StyleSheets::StyleValue GetInitialValue(::UnityEngine::UIElements::StyleSheets::StylePropertyID a1)
		{
			return ((::UnityEngine::UIElements::StyleSheets::StyleValue(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_GETINITIALVALUE_OFFSET))(a1);
		}

	};
}
