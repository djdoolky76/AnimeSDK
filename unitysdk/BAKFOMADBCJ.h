#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAKFOMADBCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BAKFOMADBCJ_ANKOMMLCIEC_OFFSET UNITYSDK_OFFSET(0x1E7B9DC0)
#define BAKFOMADBCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7BA160)
#define BAKFOMADBCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BA380)
#define BAKFOMADBCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7B9D50)
#define BAKFOMADBCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7B9D20)
#define BAKFOMADBCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B9D10)
#define BAKFOMADBCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7B9EE0)
#define BAKFOMADBCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7B9DE0)
#define BAKFOMADBCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7BA050)
#define BAKFOMADBCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7B9CA0)
#define BAKFOMADBCJ_LNAAPNNJAFB_OFFSET UNITYSDK_OFFSET(0x1E7B9DD0)
#define BAKFOMADBCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7BA220)
#define BAKFOMADBCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7BA1F0)
#define BAKFOMADBCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7B9D00)
#define BAKFOMADBCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7BA080)
#define BAKFOMADBCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7BA0E0)

	class BAKFOMADBCJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OIGJELFPCOC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BAKFOMADBCJ")->GetStaticField(0x45D00);
		}

		// static const ::System::Object DGNDFJPKPGA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKFOMADBCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BAKFOMADBCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAKFOMADBCJ*))((::PBYTE)hIl2Cpp + BAKFOMADBCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAKFOMADBCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BAKFOMADBCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKFOMADBCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BAKFOMADBCJ* Clone()
		{
			return ((::BAKFOMADBCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKFOMADBCJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 ANKOMMLCIEC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKFOMADBCJ_ANKOMMLCIEC_OFFSET))(this);
		}

		::System::Void LNAAPNNJAFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BAKFOMADBCJ_LNAAPNNJAFB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAKFOMADBCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BAKFOMADBCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAKFOMADBCJ*))((::PBYTE)hIl2Cpp + BAKFOMADBCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKFOMADBCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKFOMADBCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BAKFOMADBCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKFOMADBCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BAKFOMADBCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAKFOMADBCJ*))((::PBYTE)hIl2Cpp + BAKFOMADBCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BAKFOMADBCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
