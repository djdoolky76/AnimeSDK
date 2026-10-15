#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LENDBHPIOJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LENDBHPIOJK_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E936E10)
#define LENDBHPIOJK_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E936E20)
#define LENDBHPIOJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E937180)
#define LENDBHPIOJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9373A0)
#define LENDBHPIOJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E936DD0)
#define LENDBHPIOJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E936DA0)
#define LENDBHPIOJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E936D90)
#define LENDBHPIOJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E936F00)
#define LENDBHPIOJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E936E30)
#define LENDBHPIOJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E937070)
#define LENDBHPIOJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E936D50)
#define LENDBHPIOJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E937240)
#define LENDBHPIOJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E937210)
#define LENDBHPIOJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E936D80)
#define LENDBHPIOJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9370A0)
#define LENDBHPIOJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E937100)

	class LENDBHPIOJK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LENDBHPIOJK")->GetStaticField(0x39910);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENDBHPIOJK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LENDBHPIOJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LENDBHPIOJK*))((::PBYTE)hIl2Cpp + LENDBHPIOJK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LENDBHPIOJK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LENDBHPIOJK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENDBHPIOJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LENDBHPIOJK* Clone()
		{
			return ((::LENDBHPIOJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENDBHPIOJK_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LENDBHPIOJK_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LENDBHPIOJK_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LENDBHPIOJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LENDBHPIOJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LENDBHPIOJK*))((::PBYTE)hIl2Cpp + LENDBHPIOJK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LENDBHPIOJK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENDBHPIOJK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LENDBHPIOJK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LENDBHPIOJK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LENDBHPIOJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LENDBHPIOJK*))((::PBYTE)hIl2Cpp + LENDBHPIOJK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LENDBHPIOJK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
