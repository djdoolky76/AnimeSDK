#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLBCPCBGHOO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLBCPCBGHOO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E772B20)
#define JLBCPCBGHOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E772CE0)
#define JLBCPCBGHOO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E772700)
#define JLBCPCBGHOO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7726D0)
#define JLBCPCBGHOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7726C0)
#define JLBCPCBGHOO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E772850)
#define JLBCPCBGHOO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E772770)
#define JLBCPCBGHOO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7729D0)
#define JLBCPCBGHOO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E772680)
#define JLBCPCBGHOO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E772B80)
#define JLBCPCBGHOO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E772B50)
#define JLBCPCBGHOO_OFCLOJDNOHA_OFFSET UNITYSDK_OFFSET(0x1E772750)
#define JLBCPCBGHOO_OOJPLPOMAMI_OFFSET UNITYSDK_OFFSET(0x1E772760)
#define JLBCPCBGHOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7726B0)
#define JLBCPCBGHOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E772A00)
#define JLBCPCBGHOO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E772A60)

	class JLBCPCBGHOO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean LDALONPMANN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JLBCPCBGHOO")->GetStaticField(0x66300);
		}

		// static const ::System::Object BJMCMIDFMFE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBCPCBGHOO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLBCPCBGHOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLBCPCBGHOO*))((::PBYTE)hIl2Cpp + JLBCPCBGHOO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLBCPCBGHOO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JLBCPCBGHOO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBCPCBGHOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLBCPCBGHOO* Clone()
		{
			return ((::JLBCPCBGHOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBCPCBGHOO_CLONE_OFFSET))(this);
		}

		::System::Boolean OFCLOJDNOHA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBCPCBGHOO_OFCLOJDNOHA_OFFSET))(this);
		}

		::System::Void OOJPLPOMAMI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JLBCPCBGHOO_OOJPLPOMAMI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLBCPCBGHOO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLBCPCBGHOO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLBCPCBGHOO*))((::PBYTE)hIl2Cpp + JLBCPCBGHOO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBCPCBGHOO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBCPCBGHOO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLBCPCBGHOO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBCPCBGHOO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLBCPCBGHOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLBCPCBGHOO*))((::PBYTE)hIl2Cpp + JLBCPCBGHOO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLBCPCBGHOO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
