#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPEKGMDHFLO.h"
#include "unitysdk/System/Object.h"
class CHBNOHMCMGC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CHBNOHMCMGC_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E0BB920)
#define CHBNOHMCMGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0BBC60)
#define CHBNOHMCMGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0BBF70)
#define CHBNOHMCMGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0BB8A0)
#define CHBNOHMCMGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0BB870)
#define CHBNOHMCMGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BB860)
#define CHBNOHMCMGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0BBA10)
#define CHBNOHMCMGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0BB930)
#define CHBNOHMCMGC_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1E0BB900)
#define CHBNOHMCMGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0BBAE0)
#define CHBNOHMCMGC_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E0BB910)
#define CHBNOHMCMGC_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1E0BB8F0)
#define CHBNOHMCMGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0BB820)
#define CHBNOHMCMGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0BBDF0)
#define CHBNOHMCMGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0BBDB0)
#define CHBNOHMCMGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0BB850)
#define CHBNOHMCMGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0BBB10)
#define CHBNOHMCMGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0BBB70)

inline static constexpr unsigned int CHBNOHMCMGC_TypeDefinitionIndex = 28955;

	class CHBNOHMCMGC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		::HPEKGMDHFLO HDAIPLJBGAB; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CHBNOHMCMGC")->GetStaticField(0x155D0);
		}

		// static const ::System::Object CGMFPGNNGEK; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBNOHMCMGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHBNOHMCMGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHBNOHMCMGC*))((::PBYTE)hIl2Cpp + CHBNOHMCMGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHBNOHMCMGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CHBNOHMCMGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBNOHMCMGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHBNOHMCMGC* Clone()
		{
			return ((::CHBNOHMCMGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBNOHMCMGC_CLONE_OFFSET))(this);
		}

		::HPEKGMDHFLO IOIFPHAMFDF()
		{
			return ((::HPEKGMDHFLO(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBNOHMCMGC_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::HPEKGMDHFLO a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPEKGMDHFLO))((::PBYTE)hIl2Cpp + CHBNOHMCMGC_FHGAPGHAPFH_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBNOHMCMGC_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHBNOHMCMGC_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHBNOHMCMGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHBNOHMCMGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHBNOHMCMGC*))((::PBYTE)hIl2Cpp + CHBNOHMCMGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBNOHMCMGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBNOHMCMGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHBNOHMCMGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBNOHMCMGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHBNOHMCMGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHBNOHMCMGC*))((::PBYTE)hIl2Cpp + CHBNOHMCMGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHBNOHMCMGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
