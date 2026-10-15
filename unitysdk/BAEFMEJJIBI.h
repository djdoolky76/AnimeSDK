#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBAEPOLFFMG.h"
#include "unitysdk/System/Object.h"
class BAEFMEJJIBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BAEFMEJJIBI_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1E784C20)
#define BAEFMEJJIBI_BFCKKDBJEEJ_OFFSET UNITYSDK_OFFSET(0x1E784BF0)
#define BAEFMEJJIBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E784F60)
#define BAEFMEJJIBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E785270)
#define BAEFMEJJIBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E784BA0)
#define BAEFMEJJIBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E784B70)
#define BAEFMEJJIBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E784B60)
#define BAEFMEJJIBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E784D10)
#define BAEFMEJJIBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E784C30)
#define BAEFMEJJIBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E784DE0)
#define BAEFMEJJIBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E784B20)
#define BAEFMEJJIBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7850F0)
#define BAEFMEJJIBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7850B0)
#define BAEFMEJJIBI_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1E784C10)
#define BAEFMEJJIBI_PBKMFMDLLKJ_OFFSET UNITYSDK_OFFSET(0x1E784C00)
#define BAEFMEJJIBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E784B50)
#define BAEFMEJJIBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E784E10)
#define BAEFMEJJIBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E784E70)

inline static constexpr unsigned int BAEFMEJJIBI_TypeDefinitionIndex = 31332;

	class BAEFMEJJIBI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FGDIKGKCCFN; // 0x18
		::GBAEPOLFFMG KLINKNMHOCI; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BAEFMEJJIBI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BAEFMEJJIBI*>**)UnitySDK::FromName("", "BAEFMEJJIBI")->GetStaticField(0x4BC10);
		}

		// static const ::System::Object CLJJLLDPMBN; // 0x0
		// static const ::System::Object GKKKEHJAKII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEFMEJJIBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BAEFMEJJIBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAEFMEJJIBI*))((::PBYTE)hIl2Cpp + BAEFMEJJIBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAEFMEJJIBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BAEFMEJJIBI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BAEFMEJJIBI*>*(*)())((::PBYTE)hIl2Cpp + BAEFMEJJIBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEFMEJJIBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BAEFMEJJIBI* Clone()
		{
			return ((::BAEFMEJJIBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEFMEJJIBI_CLONE_OFFSET))(this);
		}

		::System::UInt32 BFCKKDBJEEJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEFMEJJIBI_BFCKKDBJEEJ_OFFSET))(this);
		}

		::System::Void PBKMFMDLLKJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BAEFMEJJIBI_PBKMFMDLLKJ_OFFSET))(this, a1);
		}

		::GBAEPOLFFMG MHHDBKELGIO()
		{
			return ((::GBAEPOLFFMG(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEFMEJJIBI_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::GBAEPOLFFMG a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBAEPOLFFMG))((::PBYTE)hIl2Cpp + BAEFMEJJIBI_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAEFMEJJIBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BAEFMEJJIBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAEFMEJJIBI*))((::PBYTE)hIl2Cpp + BAEFMEJJIBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEFMEJJIBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEFMEJJIBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BAEFMEJJIBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEFMEJJIBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BAEFMEJJIBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAEFMEJJIBI*))((::PBYTE)hIl2Cpp + BAEFMEJJIBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BAEFMEJJIBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
