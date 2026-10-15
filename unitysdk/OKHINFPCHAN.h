#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKHINFPCHAN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKHINFPCHAN_AHKHAIECHLP_OFFSET UNITYSDK_OFFSET(0x1DE9A560)
#define OKHINFPCHAN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE9A8C0)
#define OKHINFPCHAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE9AAE0)
#define OKHINFPCHAN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE9A510)
#define OKHINFPCHAN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE9A4E0)
#define OKHINFPCHAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE9A4D0)
#define OKHINFPCHAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE9A640)
#define OKHINFPCHAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE9A570)
#define OKHINFPCHAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE9A7B0)
#define OKHINFPCHAN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE9A490)
#define OKHINFPCHAN_LELEEDGDBOO_OFFSET UNITYSDK_OFFSET(0x1DE9A550)
#define OKHINFPCHAN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE9A980)
#define OKHINFPCHAN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE9A950)
#define OKHINFPCHAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE9A4C0)
#define OKHINFPCHAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE9A7E0)
#define OKHINFPCHAN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE9A840)

	class OKHINFPCHAN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MJFMFJMNPGG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OKHINFPCHAN")->GetStaticField(0x22580);
		}

		// static const ::System::Object NLAJGJFGKPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHINFPCHAN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKHINFPCHAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKHINFPCHAN*))((::PBYTE)hIl2Cpp + OKHINFPCHAN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKHINFPCHAN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OKHINFPCHAN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHINFPCHAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKHINFPCHAN* Clone()
		{
			return ((::OKHINFPCHAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHINFPCHAN_CLONE_OFFSET))(this);
		}

		::System::UInt32 LELEEDGDBOO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHINFPCHAN_LELEEDGDBOO_OFFSET))(this);
		}

		::System::Void AHKHAIECHLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKHINFPCHAN_AHKHAIECHLP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKHINFPCHAN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKHINFPCHAN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKHINFPCHAN*))((::PBYTE)hIl2Cpp + OKHINFPCHAN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHINFPCHAN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHINFPCHAN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKHINFPCHAN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHINFPCHAN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKHINFPCHAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKHINFPCHAN*))((::PBYTE)hIl2Cpp + OKHINFPCHAN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKHINFPCHAN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
