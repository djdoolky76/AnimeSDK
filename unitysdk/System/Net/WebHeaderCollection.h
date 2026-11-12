#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NameValueCollection.h"
#include "unitysdk/System/Net/HttpRequestHeader.h"
#include "unitysdk/System/Net/WebHeaderCollectionType.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Specialized { class NameObjectCollectionBase_KeysCollection; }
namespace System::Collections::Specialized { class NameValueCollection; }
namespace System::Net { class HeaderInfoTable; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_WEBHEADERCOLLECTION_ADDINTERNAL_OFFSET UNITYSDK_OFFSET(0x203445C0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ADD_1_OFFSET UNITYSDK_OFFSET(0x20341C90)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x2034E8D0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ALLOWMULTIVALUES_OFFSET UNITYSDK_OFFSET(0x20344510)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x20350760)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CHANGEINTERNAL_OFFSET UNITYSDK_OFFSET(0x2034DFA0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CHECKBADCHARS_OFFSET UNITYSDK_OFFSET(0x2034E190)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CONTAINSNONASCIICHARS_OFFSET UNITYSDK_OFFSET(0x2034E590)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2034F2F0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CTOR_2_OFFSET UNITYSDK_OFFSET(0x2034F3B0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x20341B60)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETASSTRING_OFFSET UNITYSDK_OFFSET(0x2034EE40)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x20350300)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETKEY_OFFSET UNITYSDK_OFFSET(0x2034FBF0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x2034F740)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_1_OFFSET UNITYSDK_OFFSET(0x20350520)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_OFFSET UNITYSDK_OFFSET(0x203414E0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_1_OFFSET UNITYSDK_OFFSET(0x2034FD10)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLKEYS_OFFSET UNITYSDK_OFFSET(0x20350640)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLOWHTTPREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x2034DC80)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x2034FB60)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_INNERCOLLECTION_OFFSET UNITYSDK_OFFSET(0x2034DBF0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x20350400)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_OFFSET UNITYSDK_OFFSET(0x2034FE40)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ISVALIDTOKEN_OFFSET UNITYSDK_OFFSET(0x2034E5F0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_NORMALIZECOMMONHEADERS_OFFSET UNITYSDK_OFFSET(0x2034D9B0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x2034F730)
#define SYSTEM_NET_WEBHEADERCOLLECTION_REMOVEINTERNAL_OFFSET UNITYSDK_OFFSET(0x2034E0E0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x2034DE20)
#define SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x2034DCC0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SETINTERNAL_OFFSET UNITYSDK_OFFSET(0x20344700)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SET_OFFSET UNITYSDK_OFFSET(0x2034EB30)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x2034FE30)
#define SYSTEM_NET_WEBHEADERCOLLECTION_THROWONRESTRICTEDHEADER_OFFSET UNITYSDK_OFFSET(0x2034E6C0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2034EE00)

namespace System::Net
{
	inline static constexpr unsigned int WebHeaderCollection_TypeDefinitionIndex = 2763;

	class WebHeaderCollection : public ::System::Collections::Specialized::NameValueCollection
	{
	public:
		::System::Collections::Specialized::NameValueCollection* m_InnerCollection; // 0x60
		::Il2CppArray<::System::String*>* m_CommonHeaders; // 0x68
		::System::Net::WebHeaderCollectionType m_Type; // 0x70
		::System::Int32 m_NumCommonHeaders; // 0x74
		static ::Il2CppArray<::System::String*>** StaticGet_s_CommonHeaderNames()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("System.Net", "WebHeaderCollection")->GetStaticField(0x36C20);
		}

		static ::System::Net::HeaderInfoTable** StaticGet_HInfo()
		{
			return (::System::Net::HeaderInfoTable**)UnitySDK::FromName("System.Net", "WebHeaderCollection")->GetStaticField(0x36C28);
		}

		static ::Il2CppArray<::System::Char>** StaticGet_HttpTrimCharacters()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System.Net", "WebHeaderCollection")->GetStaticField(0x36C30);
		}

		static ::Il2CppArray<::System::SByte>** StaticGet_s_CommonHeaderHints()
		{
			return (::Il2CppArray<::System::SByte>**)UnitySDK::FromName("System.Net", "WebHeaderCollection")->GetStaticField(0x36C38);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_RfcCharMap()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("System.Net", "WebHeaderCollection")->GetStaticField(0x36C40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::WebHeaderCollectionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebHeaderCollectionType))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CCTOR_OFFSET))();
		}

		::System::Void NormalizeCommonHeaders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_NORMALIZECOMMONHEADERS_OFFSET))(this);
		}

		::System::Collections::Specialized::NameValueCollection* get_InnerCollection()
		{
			return ((::System::Collections::Specialized::NameValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_INNERCOLLECTION_OFFSET))(this);
		}

		static ::System::Boolean AllowMultiValues(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ALLOWMULTIVALUES_OFFSET))(a1);
		}

		::System::Boolean get_AllowHttpRequestHeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLOWHTTPREQUESTHEADER_OFFSET))(this);
		}

		::System::Void Remove(::System::Net::HttpRequestHeader a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpRequestHeader))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_OFFSET))(this, a1);
		}

		::System::Void AddInternal(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADDINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void ChangeInternal(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CHANGEINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveInternal(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_REMOVEINTERNAL_OFFSET))(this, a1);
		}

		static ::System::String* CheckBadChars(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CHECKBADCHARS_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsValidToken(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ISVALIDTOKEN_OFFSET))(a1);
		}

		static ::System::Boolean ContainsNonAsciiChars(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CONTAINSNONASCIICHARS_OFFSET))(a1);
		}

		::System::Void ThrowOnRestrictedHeader(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_THROWONRESTRICTEDHEADER_OFFSET))(this, a1);
		}

		::System::Void Add(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADD_OFFSET))(this, a1, a2);
		}

		::System::Void Add_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADD_1_OFFSET))(this, a1);
		}

		::System::Void Set(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SET_OFFSET))(this, a1, a2);
		}

		::System::Void SetInternal(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SETINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void Remove_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* GetValues(::System::String* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_TOSTRING_OFFSET))(this);
		}

		static ::System::String* GetAsString(::System::Collections::Specialized::NameValueCollection* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::System::Collections::Specialized::NameValueCollection*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETASSTRING_OFFSET))(a1, a2, a3);
		}

		::System::Void OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ONDESERIALIZATION_OFFSET))(this, a1);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::String* Get(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* get_Keys()
		{
			return ((::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_KEYS_OFFSET))(this);
		}

		::System::String* Get_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* GetValues_1(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_1_OFFSET))(this, a1);
		}

		::System::String* GetKey(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETKEY_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_AllKeys()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLKEYS_OFFSET))(this);
		}

	};
}
