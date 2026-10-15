#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOPOBHGDIKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BOPOBHGDIKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E03FBD0)
#define BOPOBHGDIKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03FDF0)
#define BOPOBHGDIKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E03F820)
#define BOPOBHGDIKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E03F7F0)
#define BOPOBHGDIKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03F7E0)
#define BOPOBHGDIKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E03F950)
#define BOPOBHGDIKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E03F880)
#define BOPOBHGDIKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E03FAC0)
#define BOPOBHGDIKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E03F7A0)
#define BOPOBHGDIKN_MEACDLINCGP_OFFSET UNITYSDK_OFFSET(0x1E03F860)
#define BOPOBHGDIKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E03FC90)
#define BOPOBHGDIKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E03FC60)
#define BOPOBHGDIKN_MLABEOBNDBI_OFFSET UNITYSDK_OFFSET(0x1E03F870)
#define BOPOBHGDIKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E03F7D0)
#define BOPOBHGDIKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E03FAF0)
#define BOPOBHGDIKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E03FB50)

	class BOPOBHGDIKN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJKNEBLDNPO; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BOPOBHGDIKN")->GetStaticField(0x42AC0);
		}

		// static const ::System::Object GFGEJPAEKKK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPOBHGDIKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BOPOBHGDIKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOPOBHGDIKN*))((::PBYTE)hIl2Cpp + BOPOBHGDIKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOPOBHGDIKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BOPOBHGDIKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPOBHGDIKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BOPOBHGDIKN* Clone()
		{
			return ((::BOPOBHGDIKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPOBHGDIKN_CLONE_OFFSET))(this);
		}

		::System::UInt32 MEACDLINCGP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPOBHGDIKN_MEACDLINCGP_OFFSET))(this);
		}

		::System::Void MLABEOBNDBI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOPOBHGDIKN_MLABEOBNDBI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BOPOBHGDIKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BOPOBHGDIKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOPOBHGDIKN*))((::PBYTE)hIl2Cpp + BOPOBHGDIKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPOBHGDIKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPOBHGDIKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BOPOBHGDIKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPOBHGDIKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BOPOBHGDIKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOPOBHGDIKN*))((::PBYTE)hIl2Cpp + BOPOBHGDIKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BOPOBHGDIKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
