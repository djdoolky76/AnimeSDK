#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEBLDMIMFIA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AEBLDMIMFIA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDE6380)
#define AEBLDMIMFIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDE66A0)
#define AEBLDMIMFIA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDE5FC0)
#define AEBLDMIMFIA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDE5F80)
#define AEBLDMIMFIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE5F70)
#define AEBLDMIMFIA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDE6130)
#define AEBLDMIMFIA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDE6050)
#define AEBLDMIMFIA_GBDHEJPLLHG_OFFSET UNITYSDK_OFFSET(0x1DDE6030)
#define AEBLDMIMFIA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDE6200)
#define AEBLDMIMFIA_GPAFPIFJEAF_OFFSET UNITYSDK_OFFSET(0x1DDE6020)
#define AEBLDMIMFIA_HLACEGGLEGF_OFFSET UNITYSDK_OFFSET(0x1DDE6010)
#define AEBLDMIMFIA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDE5F30)
#define AEBLDMIMFIA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDE6520)
#define AEBLDMIMFIA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDE64E0)
#define AEBLDMIMFIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDE5F60)
#define AEBLDMIMFIA_PFFFCAHMPOK_OFFSET UNITYSDK_OFFSET(0x1DDE6040)
#define AEBLDMIMFIA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDE6240)
#define AEBLDMIMFIA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDE62A0)

	class AEBLDMIMFIA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 JEHBHEOHGLN; // 0x18
		::System::UInt32 GFCPCAFJHNB; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AEBLDMIMFIA")->GetStaticField(0x2BDA0);
		}

		// static const ::System::Object GEMDHFJFBHD; // 0x0
		// static const ::System::Object LFMAGKAHAOK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBLDMIMFIA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AEBLDMIMFIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEBLDMIMFIA*))((::PBYTE)hIl2Cpp + AEBLDMIMFIA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEBLDMIMFIA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AEBLDMIMFIA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBLDMIMFIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AEBLDMIMFIA* Clone()
		{
			return ((::AEBLDMIMFIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBLDMIMFIA_CLONE_OFFSET))(this);
		}

		::System::UInt64 HLACEGGLEGF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBLDMIMFIA_HLACEGGLEGF_OFFSET))(this);
		}

		::System::Void GPAFPIFJEAF(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + AEBLDMIMFIA_GPAFPIFJEAF_OFFSET))(this, a1);
		}

		::System::UInt32 GBDHEJPLLHG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBLDMIMFIA_GBDHEJPLLHG_OFFSET))(this);
		}

		::System::Void PFFFCAHMPOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEBLDMIMFIA_PFFFCAHMPOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AEBLDMIMFIA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AEBLDMIMFIA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AEBLDMIMFIA*))((::PBYTE)hIl2Cpp + AEBLDMIMFIA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBLDMIMFIA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBLDMIMFIA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AEBLDMIMFIA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBLDMIMFIA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AEBLDMIMFIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEBLDMIMFIA*))((::PBYTE)hIl2Cpp + AEBLDMIMFIA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AEBLDMIMFIA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
