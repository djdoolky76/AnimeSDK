#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFDDOPKGIKG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFDDOPKGIKG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E727640)
#define JFDDOPKGIKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E727910)
#define JFDDOPKGIKG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E727290)
#define JFDDOPKGIKG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E727260)
#define JFDDOPKGIKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E727250)
#define JFDDOPKGIKG_EGAOJEMBJLC_OFFSET UNITYSDK_OFFSET(0x1E7272F0)
#define JFDDOPKGIKG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E727400)
#define JFDDOPKGIKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E727320)
#define JFDDOPKGIKG_GBLDMKDBOIB_OFFSET UNITYSDK_OFFSET(0x1E727310)
#define JFDDOPKGIKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7274D0)
#define JFDDOPKGIKG_GLPDJFFEILA_OFFSET UNITYSDK_OFFSET(0x1E727300)
#define JFDDOPKGIKG_HOCGNGLKLDH_OFFSET UNITYSDK_OFFSET(0x1E7272E0)
#define JFDDOPKGIKG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E727210)
#define JFDDOPKGIKG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E727790)
#define JFDDOPKGIKG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E727750)
#define JFDDOPKGIKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E727240)
#define JFDDOPKGIKG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E727500)
#define JFDDOPKGIKG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E727560)

	class JFDDOPKGIKG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KDHBDECBPJK; // 0x18
		::System::UInt32 FJDIJDPAGIJ; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JFDDOPKGIKG")->GetStaticField(0x5F7B0);
		}

		// static const ::System::Object BFLCNOEHNIC; // 0x0
		// static const ::System::Object ELFBAKNFEIG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDDOPKGIKG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFDDOPKGIKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFDDOPKGIKG*))((::PBYTE)hIl2Cpp + JFDDOPKGIKG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFDDOPKGIKG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JFDDOPKGIKG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDDOPKGIKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFDDOPKGIKG* Clone()
		{
			return ((::JFDDOPKGIKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDDOPKGIKG_CLONE_OFFSET))(this);
		}

		::System::UInt32 HOCGNGLKLDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDDOPKGIKG_HOCGNGLKLDH_OFFSET))(this);
		}

		::System::Void EGAOJEMBJLC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFDDOPKGIKG_EGAOJEMBJLC_OFFSET))(this, a1);
		}

		::System::UInt32 GLPDJFFEILA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDDOPKGIKG_GLPDJFFEILA_OFFSET))(this);
		}

		::System::Void GBLDMKDBOIB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFDDOPKGIKG_GBLDMKDBOIB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFDDOPKGIKG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFDDOPKGIKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFDDOPKGIKG*))((::PBYTE)hIl2Cpp + JFDDOPKGIKG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDDOPKGIKG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDDOPKGIKG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFDDOPKGIKG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDDOPKGIKG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFDDOPKGIKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFDDOPKGIKG*))((::PBYTE)hIl2Cpp + JFDDOPKGIKG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFDDOPKGIKG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
