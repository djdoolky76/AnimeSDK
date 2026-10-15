#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPCNCABCMGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPCNCABCMGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7CF200)
#define JPCNCABCMGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7CF420)
#define JPCNCABCMGA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7CEE50)
#define JPCNCABCMGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7CEE20)
#define JPCNCABCMGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CEE10)
#define JPCNCABCMGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7CEF80)
#define JPCNCABCMGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7CEEB0)
#define JPCNCABCMGA_FKEHDJHGBKA_OFFSET UNITYSDK_OFFSET(0x1E7CEE90)
#define JPCNCABCMGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7CF0F0)
#define JPCNCABCMGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7CEDD0)
#define JPCNCABCMGA_KEIGMKMNENL_OFFSET UNITYSDK_OFFSET(0x1E7CEEA0)
#define JPCNCABCMGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7CF2C0)
#define JPCNCABCMGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7CF290)
#define JPCNCABCMGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7CEE00)
#define JPCNCABCMGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7CF120)
#define JPCNCABCMGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7CF180)

	class JPCNCABCMGA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BJBJNDBMOBB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JPCNCABCMGA")->GetStaticField(0x2EB0);
		}

		// static const ::System::Object MNGIGJBIIBJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCNCABCMGA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JPCNCABCMGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCNCABCMGA*))((::PBYTE)hIl2Cpp + JPCNCABCMGA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPCNCABCMGA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JPCNCABCMGA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCNCABCMGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JPCNCABCMGA* Clone()
		{
			return ((::JPCNCABCMGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCNCABCMGA_CLONE_OFFSET))(this);
		}

		::System::UInt32 FKEHDJHGBKA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCNCABCMGA_FKEHDJHGBKA_OFFSET))(this);
		}

		::System::Void KEIGMKMNENL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPCNCABCMGA_KEIGMKMNENL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPCNCABCMGA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JPCNCABCMGA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPCNCABCMGA*))((::PBYTE)hIl2Cpp + JPCNCABCMGA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCNCABCMGA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCNCABCMGA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JPCNCABCMGA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCNCABCMGA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JPCNCABCMGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCNCABCMGA*))((::PBYTE)hIl2Cpp + JPCNCABCMGA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JPCNCABCMGA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
