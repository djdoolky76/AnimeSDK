#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGJILAHJNAN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGJILAHJNAN_AGFMEMAFGLD_OFFSET UNITYSDK_OFFSET(0x1EA7A2E0)
#define BGJILAHJNAN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA7A630)
#define BGJILAHJNAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA7A900)
#define BGJILAHJNAN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA7A280)
#define BGJILAHJNAN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA7A250)
#define BGJILAHJNAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7A240)
#define BGJILAHJNAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA7A3F0)
#define BGJILAHJNAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA7A310)
#define BGJILAHJNAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA7A4C0)
#define BGJILAHJNAN_GGLOBDDLDOI_OFFSET UNITYSDK_OFFSET(0x1EA7A2F0)
#define BGJILAHJNAN_HKBEDBLOGNG_OFFSET UNITYSDK_OFFSET(0x1EA7A2D0)
#define BGJILAHJNAN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA7A200)
#define BGJILAHJNAN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA7A780)
#define BGJILAHJNAN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA7A740)
#define BGJILAHJNAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA7A230)
#define BGJILAHJNAN_PNBMDNLGBKI_OFFSET UNITYSDK_OFFSET(0x1EA7A300)
#define BGJILAHJNAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA7A4F0)
#define BGJILAHJNAN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA7A550)

	class BGJILAHJNAN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NGEIEPEONLF; // 0x18
		::System::UInt32 GNKLGGAGGGB; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BGJILAHJNAN")->GetStaticField(0x42FC0);
		}

		// static const ::System::Object AMHDJJHLOKD; // 0x0
		// static const ::System::Object HJFKGCEMDDB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGJILAHJNAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGJILAHJNAN*))((::PBYTE)hIl2Cpp + BGJILAHJNAN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGJILAHJNAN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BGJILAHJNAN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGJILAHJNAN* Clone()
		{
			return ((::BGJILAHJNAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN_CLONE_OFFSET))(this);
		}

		::System::UInt32 HKBEDBLOGNG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN_HKBEDBLOGNG_OFFSET))(this);
		}

		::System::Void AGFMEMAFGLD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGJILAHJNAN_AGFMEMAFGLD_OFFSET))(this, a1);
		}

		::System::UInt32 GGLOBDDLDOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN_GGLOBDDLDOI_OFFSET))(this);
		}

		::System::Void PNBMDNLGBKI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGJILAHJNAN_PNBMDNLGBKI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGJILAHJNAN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGJILAHJNAN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGJILAHJNAN*))((::PBYTE)hIl2Cpp + BGJILAHJNAN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGJILAHJNAN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGJILAHJNAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGJILAHJNAN*))((::PBYTE)hIl2Cpp + BGJILAHJNAN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGJILAHJNAN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
