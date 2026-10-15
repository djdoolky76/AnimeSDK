#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKEFJFJLOMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KKEFJFJLOMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E877520)
#define KKEFJFJLOMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E877740)
#define KKEFJFJLOMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E877170)
#define KKEFJFJLOMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E877140)
#define KKEFJFJLOMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E877130)
#define KKEFJFJLOMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8772A0)
#define KKEFJFJLOMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8771D0)
#define KKEFJFJLOMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E877410)
#define KKEFJFJLOMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8770F0)
#define KKEFJFJLOMJ_LNKFJLDGCHO_OFFSET UNITYSDK_OFFSET(0x1E8771B0)
#define KKEFJFJLOMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8775E0)
#define KKEFJFJLOMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8775B0)
#define KKEFJFJLOMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E877120)
#define KKEFJFJLOMJ_PGKPFKFIMNK_OFFSET UNITYSDK_OFFSET(0x1E8771C0)
#define KKEFJFJLOMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E877440)
#define KKEFJFJLOMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8774A0)

	class KKEFJFJLOMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IFLDENAANAP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KKEFJFJLOMJ")->GetStaticField(0x1DF20);
		}

		// static const ::System::Object NIBKLJNEKOB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KKEFJFJLOMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKEFJFJLOMJ*))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKEFJFJLOMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KKEFJFJLOMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KKEFJFJLOMJ* Clone()
		{
			return ((::KKEFJFJLOMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 LNKFJLDGCHO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ_LNKFJLDGCHO_OFFSET))(this);
		}

		::System::Void PGKPFKFIMNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ_PGKPFKFIMNK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KKEFJFJLOMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKEFJFJLOMJ*))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KKEFJFJLOMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKEFJFJLOMJ*))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KKEFJFJLOMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
