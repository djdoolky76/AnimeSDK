#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SimpleJSON/JSONNode.h"
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::IO { class BinaryWriter; }

#define SIMPLEJSON_JSONCLASS_ADD_OFFSET UNITYSDK_OFFSET(0x1FF07850)
#define SIMPLEJSON_JSONCLASS_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF08BC0)
#define SIMPLEJSON_JSONCLASS_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1FF077F0)
#define SIMPLEJSON_JSONCLASS_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF08EA0)
#define SIMPLEJSON_JSONCLASS_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1FF07DF0)
#define SIMPLEJSON_JSONCLASS_GET_CHILDS_OFFSET UNITYSDK_OFFSET(0x1FF07D70)
#define SIMPLEJSON_JSONCLASS_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1FF077D0)
#define SIMPLEJSON_JSONCLASS_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1FF07690)
#define SIMPLEJSON_JSONCLASS_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1FF07480)
#define SIMPLEJSON_JSONCLASS_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1FF07CF0)
#define SIMPLEJSON_JSONCLASS_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1FF07B10)
#define SIMPLEJSON_JSONCLASS_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x1FF07BA0)
#define SIMPLEJSON_JSONCLASS_REMOVE_OFFSET UNITYSDK_OFFSET(0x1FF079D0)
#define SIMPLEJSON_JSONCLASS_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FF08F20)
#define SIMPLEJSON_JSONCLASS_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1FF07700)
#define SIMPLEJSON_JSONCLASS_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1FF07580)
#define SIMPLEJSON_JSONCLASS_TOSTRINGWITHCOMMENT_OFFSET UNITYSDK_OFFSET(0x1FF085B0)
#define SIMPLEJSON_JSONCLASS_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1FF08290)
#define SIMPLEJSON_JSONCLASS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF07E30)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONClass_TypeDefinitionIndex = 9968;

	class JSONClass : public ::SimpleJSON::JSONNode
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::SimpleJSON::JSONNode*>* m_Dict; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_CTOR_OFFSET))(this);
		}

		::SimpleJSON::JSONNode* get_Item(::System::String* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::String* a1, ::SimpleJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::SimpleJSON::JSONNode* get_Item_1(::System::Int32 a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::Int32 a1, ::SimpleJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean ContainsKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_CONTAINSKEY_OFFSET))(this, a1);
		}

		::System::Void Add(::System::String* a1, ::SimpleJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_ADD_OFFSET))(this, a1, a2);
		}

		::SimpleJSON::JSONNode* Remove(::System::String* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_REMOVE_OFFSET))(this, a1);
		}

		::SimpleJSON::JSONNode* Remove_1(::System::Int32 a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_REMOVE_1_OFFSET))(this, a1);
		}

		::SimpleJSON::JSONNode* Remove_2(::SimpleJSON::JSONNode* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_REMOVE_2_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* get_Keys()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::SimpleJSON::JSONNode*>* get_Childs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::SimpleJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_GET_CHILDS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToStringWithComment(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_TOSTRINGWITHCOMMENT_OFFSET))(this, a1);
		}

		::SimpleJSON::JSONNode* Clone()
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_CLONE_OFFSET))(this);
		}

		::System::Void Serialize(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_SERIALIZE_OFFSET))(this, a1);
		}

	};
}
