#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILBLJAFMBBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILBLJAFMBBK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6A78D0)
#define ILBLJAFMBBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A7B60)
#define ILBLJAFMBBK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6A74F0)
#define ILBLJAFMBBK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6A74C0)
#define ILBLJAFMBBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A74B0)
#define ILBLJAFMBBK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6A7630)
#define ILBLJAFMBBK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6A7560)
#define ILBLJAFMBBK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6A77A0)
#define ILBLJAFMBBK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6A7470)
#define ILBLJAFMBBK_LFFBJPAANPK_OFFSET UNITYSDK_OFFSET(0x1E6A7550)
#define ILBLJAFMBBK_LPIJKBNFEEP_OFFSET UNITYSDK_OFFSET(0x1E6A7540)
#define ILBLJAFMBBK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6A7A00)
#define ILBLJAFMBBK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6A79C0)
#define ILBLJAFMBBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6A74A0)
#define ILBLJAFMBBK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6A77E0)
#define ILBLJAFMBBK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6A7840)

	class ILBLJAFMBBK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 CMKPAGJOPMB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ILBLJAFMBBK")->GetStaticField(0x55CD0);
		}

		// static const ::System::Object JKCCMACNANL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBLJAFMBBK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILBLJAFMBBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILBLJAFMBBK*))((::PBYTE)hIl2Cpp + ILBLJAFMBBK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILBLJAFMBBK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ILBLJAFMBBK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBLJAFMBBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILBLJAFMBBK* Clone()
		{
			return ((::ILBLJAFMBBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBLJAFMBBK_CLONE_OFFSET))(this);
		}

		::System::UInt64 LPIJKBNFEEP()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBLJAFMBBK_LPIJKBNFEEP_OFFSET))(this);
		}

		::System::Void LFFBJPAANPK(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ILBLJAFMBBK_LFFBJPAANPK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILBLJAFMBBK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILBLJAFMBBK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILBLJAFMBBK*))((::PBYTE)hIl2Cpp + ILBLJAFMBBK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBLJAFMBBK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBLJAFMBBK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILBLJAFMBBK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBLJAFMBBK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILBLJAFMBBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILBLJAFMBBK*))((::PBYTE)hIl2Cpp + ILBLJAFMBBK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILBLJAFMBBK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
