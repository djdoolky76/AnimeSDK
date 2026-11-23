#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/VisualElementAsset.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_UIELEMENTS_TEMPLATEASSET_GET_ATTRIBUTEOVERRIDES_OFFSET UNITYSDK_OFFSET(0x4251870)
#define UNITYENGINE_UIELEMENTS_TEMPLATEASSET_GET_SLOTUSAGES_OFFSET UNITYSDK_OFFSET(0x4197840)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TemplateAsset_TypeDefinitionIndex = 13205;

	class TemplateAsset : public ::UnityEngine::UIElements::VisualElementAsset
	{
	public:
		::System::String* m_TemplateAlias; // 0x68
		::System::Collections::Generic::List_1<::System::Object*>* m_AttributeOverrides; // 0x70
		::System::Collections::Generic::List_1<::System::Object*>* m_SlotUsages; // 0x78

		::System::Collections::Generic::List_1<::System::Object*>* get_slotUsages()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEMPLATEASSET_GET_SLOTUSAGES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_attributeOverrides()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEMPLATEASSET_GET_ATTRIBUTEOVERRIDES_OFFSET))(this);
		}
	};
}
