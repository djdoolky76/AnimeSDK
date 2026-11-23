#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_UIELEMENTS_UXMLASSET_GET_FULLTYPENAME_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define UNITYENGINE_UIELEMENTS_UXMLASSET_GET_ID_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define UNITYENGINE_UIELEMENTS_UXMLASSET_GET_ORDERINDOCUMENT_OFFSET UNITYSDK_OFFSET(0x17D6170)
#define UNITYENGINE_UIELEMENTS_UXMLASSET_GET_PARENTID_OFFSET UNITYSDK_OFFSET(0x1831260)
#define UNITYENGINE_UIELEMENTS_UXMLASSET_SETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x4276D40)
#define UNITYENGINE_UIELEMENTS_UXMLASSET_SETORADDPROPERTY_OFFSET UNITYSDK_OFFSET(0x4276D40)
#define UNITYENGINE_UIELEMENTS_UXMLASSET_TRYGETATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x4276EB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlAsset_TypeDefinitionIndex = 13783;

	class UxmlAsset : public ::System::Object
	{
	public:
		::System::String* m_FullTypeName; // 0x10
		::System::Int32 m_Id; // 0x18
		::System::Int32 m_OrderInDocument; // 0x1C
		::System::Int32 m_ParentId; // 0x20
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::String*>* m_Properties; // 0x28

		::System::String* get_fullTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLASSET_GET_FULLTYPENAME_OFFSET))(this);
		}

		::System::Int32 get_orderInDocument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLASSET_GET_ORDERINDOCUMENT_OFFSET))(this);
		}

		::System::Void SetOrAddProperty(::System::String* E0860F033D7E626C, ::System::String* F23CD15D255EB233)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLASSET_SETORADDPROPERTY_OFFSET))(this, E0860F033D7E626C, F23CD15D255EB233);
		}

		::System::Int32 get_parentId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLASSET_GET_PARENTID_OFFSET))(this);
		}

		::System::Void SetAttribute(::System::String* F79B4D487F303AB2, ::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLASSET_SETATTRIBUTE_OFFSET))(this, F79B4D487F303AB2, E937D4885DAA1AE8);
		}

		::System::Boolean TryGetAttributeValue(::System::String* E0860F033D7E626C, ::System::String*& E937D4885DAA1AE8)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLASSET_TRYGETATTRIBUTEVALUE_OFFSET))(this, E0860F033D7E626C, E937D4885DAA1AE8);
		}

		::System::Int32 get_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLASSET_GET_ID_OFFSET))(this);
		}
	};
}
