#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDANEJNFABF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDANEJNFABF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2052DAC0)
#define FDANEJNFABF_CCTOR_OFFSET UNITYSDK_OFFSET(0x2052DD90)
#define FDANEJNFABF_CLONE_OFFSET UNITYSDK_OFFSET(0x2052D710)
#define FDANEJNFABF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2052D6E0)
#define FDANEJNFABF_CTOR_OFFSET UNITYSDK_OFFSET(0x2052D6D0)
#define FDANEJNFABF_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x2052D760)
#define FDANEJNFABF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2052D880)
#define FDANEJNFABF_EQUALS_OFFSET UNITYSDK_OFFSET(0x2052D7A0)
#define FDANEJNFABF_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x2052D780)
#define FDANEJNFABF_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x2052D770)
#define FDANEJNFABF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2052D950)
#define FDANEJNFABF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2052D690)
#define FDANEJNFABF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2052DC10)
#define FDANEJNFABF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2052DBD0)
#define FDANEJNFABF_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x2052D790)
#define FDANEJNFABF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2052D6C0)
#define FDANEJNFABF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2052D980)
#define FDANEJNFABF_WRITETO_OFFSET UNITYSDK_OFFSET(0x2052D9E0)

inline static constexpr unsigned int FDANEJNFABF_TypeDefinitionIndex = 35353;

	class FDANEJNFABF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		::System::UInt32 NDFIDCNNGMJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FDANEJNFABF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FDANEJNFABF*>**)UnitySDK::FromName("", "FDANEJNFABF")->GetStaticField(0x13E30);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object KLJANMLJHEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDANEJNFABF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDANEJNFABF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDANEJNFABF*))((::PBYTE)hIl2Cpp + FDANEJNFABF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDANEJNFABF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FDANEJNFABF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FDANEJNFABF*>*(*)())((::PBYTE)hIl2Cpp + FDANEJNFABF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDANEJNFABF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDANEJNFABF* Clone()
		{
			return ((::FDANEJNFABF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDANEJNFABF_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDANEJNFABF_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDANEJNFABF_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDANEJNFABF_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDANEJNFABF_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDANEJNFABF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDANEJNFABF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDANEJNFABF*))((::PBYTE)hIl2Cpp + FDANEJNFABF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDANEJNFABF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDANEJNFABF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDANEJNFABF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDANEJNFABF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDANEJNFABF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDANEJNFABF*))((::PBYTE)hIl2Cpp + FDANEJNFABF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDANEJNFABF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
