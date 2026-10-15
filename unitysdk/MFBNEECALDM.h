#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFBNEECALDM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MFBNEECALDM_APKCHMCIBLA_OFFSET UNITYSDK_OFFSET(0x1EA15640)
#define MFBNEECALDM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA15980)
#define MFBNEECALDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA15C50)
#define MFBNEECALDM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA155D0)
#define MFBNEECALDM_CNNDBGAOBGB_OFFSET UNITYSDK_OFFSET(0x1EA15650)
#define MFBNEECALDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA155A0)
#define MFBNEECALDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA15590)
#define MFBNEECALDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA15740)
#define MFBNEECALDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA15660)
#define MFBNEECALDM_FAMGHDLEDLP_OFFSET UNITYSDK_OFFSET(0x1EA15630)
#define MFBNEECALDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA15810)
#define MFBNEECALDM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA15550)
#define MFBNEECALDM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA15AD0)
#define MFBNEECALDM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA15A90)
#define MFBNEECALDM_MHFBDNGECAE_OFFSET UNITYSDK_OFFSET(0x1EA15620)
#define MFBNEECALDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA15580)
#define MFBNEECALDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA15840)
#define MFBNEECALDM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA158A0)

inline static constexpr unsigned int MFBNEECALDM_TypeDefinitionIndex = 34944;

	class MFBNEECALDM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LAAGBFNNOKM; // 0x18
		::System::UInt32 MCFABAKLEBN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MFBNEECALDM")->GetStaticField(0x4BE10);
		}

		// static const ::System::Object BAOPMJAPINI; // 0x0
		// static const ::System::Object EPJKIFLAGIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBNEECALDM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MFBNEECALDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFBNEECALDM*))((::PBYTE)hIl2Cpp + MFBNEECALDM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFBNEECALDM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MFBNEECALDM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBNEECALDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MFBNEECALDM* Clone()
		{
			return ((::MFBNEECALDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBNEECALDM_CLONE_OFFSET))(this);
		}

		::System::UInt32 MHFBDNGECAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBNEECALDM_MHFBDNGECAE_OFFSET))(this);
		}

		::System::Void FAMGHDLEDLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFBNEECALDM_FAMGHDLEDLP_OFFSET))(this, a1);
		}

		::System::UInt32 APKCHMCIBLA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBNEECALDM_APKCHMCIBLA_OFFSET))(this);
		}

		::System::Void CNNDBGAOBGB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFBNEECALDM_CNNDBGAOBGB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFBNEECALDM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MFBNEECALDM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFBNEECALDM*))((::PBYTE)hIl2Cpp + MFBNEECALDM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBNEECALDM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBNEECALDM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MFBNEECALDM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBNEECALDM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MFBNEECALDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFBNEECALDM*))((::PBYTE)hIl2Cpp + MFBNEECALDM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MFBNEECALDM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
