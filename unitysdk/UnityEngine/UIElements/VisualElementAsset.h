#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/F18C4424A2E9331F.h"
#include "unitysdk/UnityEngine/UIElements/UxmlAsset.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class StyleSheet; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_CLASSES_OFFSET UNITYSDK_OFFSET(0x4197860)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_HASSTYLESHEETPATHS_OFFSET UNITYSDK_OFFSET(0x1C27FA0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_HASSTYLESHEETS_OFFSET UNITYSDK_OFFSET(0x1767EE0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_RULEINDEX_OFFSET UNITYSDK_OFFSET(0x42E2700)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_STYLESHEETPATHS_OFFSET UNITYSDK_OFFSET(0x42E2710)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_STYLESHEETS_OFFSET UNITYSDK_OFFSET(0x42E2790)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x42E2570)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB8060)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementAsset_TypeDefinitionIndex = 13250;

	class VisualElementAsset : public ::UnityEngine::UIElements::UxmlAsset
	{
	public:
		::System::String* m_Name; // 0x30
		::System::Int32 m_RuleIndex; // 0x38
		::System::Byte _padding0[0x4];
		::System::String* m_Text; // 0x40
		::A418C49FA6A8C1F7::F18C4424A2E9331F m_PickingMode; // 0x48
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::String*>* m_Classes; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* m_StylesheetPaths; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* m_Stylesheets; // 0x60

		::Il2CppArray<::System::String*>* get_classes()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_CLASSES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>* get_stylesheets()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_STYLESHEETS_OFFSET))(this);
		}

		::System::Int32 get_ruleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_RULEINDEX_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_stylesheetPaths()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_STYLESHEETPATHS_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Boolean get_hasStylesheetPaths()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_HASSTYLESHEETPATHS_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Boolean get_hasStylesheets()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTASSET_GET_HASSTYLESHEETS_OFFSET))(this);
		}
	};
}
