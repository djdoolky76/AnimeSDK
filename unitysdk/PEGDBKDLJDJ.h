#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIMHLPBEDDH;
class PEGDBKDLJDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PEGDBKDLJDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF18290)
#define PEGDBKDLJDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF18630)
#define PEGDBKDLJDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF17BF0)
#define PEGDBKDLJDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF17B60)
#define PEGDBKDLJDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF17B50)
#define PEGDBKDLJDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF17E80)
#define PEGDBKDLJDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF17CE0)
#define PEGDBKDLJDJ_FFBGMLAOCND_OFFSET UNITYSDK_OFFSET(0x1DF17CC0)
#define PEGDBKDLJDJ_GAKBCHBEADA_OFFSET UNITYSDK_OFFSET(0x1DF17CD0)
#define PEGDBKDLJDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF18150)
#define PEGDBKDLJDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF17AE0)
#define PEGDBKDLJDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF18410)
#define PEGDBKDLJDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF182F0)
#define PEGDBKDLJDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF17B40)
#define PEGDBKDLJDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF181A0)
#define PEGDBKDLJDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF18200)

	class PEGDBKDLJDJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::IIMHLPBEDDH* JBCLNBMJEGI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PEGDBKDLJDJ")->GetStaticField(0x38B30);
		}

		// static const ::System::Object IPMBLBMLNIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PEGDBKDLJDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEGDBKDLJDJ*))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PEGDBKDLJDJ* Clone()
		{
			return ((::PEGDBKDLJDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_CLONE_OFFSET))(this);
		}

		::IIMHLPBEDDH* FFBGMLAOCND()
		{
			return ((::IIMHLPBEDDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_FFBGMLAOCND_OFFSET))(this);
		}

		::System::Void GAKBCHBEADA(::IIMHLPBEDDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIMHLPBEDDH*))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_GAKBCHBEADA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PEGDBKDLJDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEGDBKDLJDJ*))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PEGDBKDLJDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEGDBKDLJDJ*))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
