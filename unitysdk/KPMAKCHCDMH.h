#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMAKCHCDMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPMAKCHCDMH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8C0050)
#define KPMAKCHCDMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C0280)
#define KPMAKCHCDMH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8BFB80)
#define KPMAKCHCDMH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8BFB40)
#define KPMAKCHCDMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BFB30)
#define KPMAKCHCDMH_DDKEMHMJGFL_OFFSET UNITYSDK_OFFSET(0x1E8BFC10)
#define KPMAKCHCDMH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8BFCC0)
#define KPMAKCHCDMH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8BFC50)
#define KPMAKCHCDMH_FDPMDCOAEIL_OFFSET UNITYSDK_OFFSET(0x1E8BFBE0)
#define KPMAKCHCDMH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8BFDC0)
#define KPMAKCHCDMH_INAEHNCKBJC_OFFSET UNITYSDK_OFFSET(0x1E8BFC40)
#define KPMAKCHCDMH_JBEDNJOHOFO_OFFSET UNITYSDK_OFFSET(0x1E8BFC20)
#define KPMAKCHCDMH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8BFAF0)
#define KPMAKCHCDMH_KHBGONMDCPI_OFFSET UNITYSDK_OFFSET(0x1E8BFBF0)
#define KPMAKCHCDMH_LNCKJIDOBPA_OFFSET UNITYSDK_OFFSET(0x1E8BFC00)
#define KPMAKCHCDMH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8C01D0)
#define KPMAKCHCDMH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8C0180)
#define KPMAKCHCDMH_OLBKJMAIDKH_OFFSET UNITYSDK_OFFSET(0x1E8BFC30)
#define KPMAKCHCDMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8BFB20)
#define KPMAKCHCDMH_PCMFGAPBPGK_OFFSET UNITYSDK_OFFSET(0x1E8BFBD0)
#define KPMAKCHCDMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8BFDF0)
#define KPMAKCHCDMH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8BFE50)

	class KPMAKCHCDMH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OFAGPEOKFKD; // 0x18
		::System::UInt32 DBHLHPDBNFD; // 0x1C
		::System::Boolean DHAHNCEMJJE; // 0x20
		::System::Boolean NBFBKFJOEDJ; // 0x21
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KPMAKCHCDMH")->GetStaticField(0x2D250);
		}

		// static const ::System::Object HHAPFDHANFC; // 0x0
		// static const ::System::Object HOLLCCLAJAB; // 0x0
		// static const ::System::Object OOJJELEAKAD; // 0x0
		// static const ::System::Object FDJBMJHPBGK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPMAKCHCDMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAKCHCDMH*))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPMAKCHCDMH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KPMAKCHCDMH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPMAKCHCDMH* Clone()
		{
			return ((::KPMAKCHCDMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_CLONE_OFFSET))(this);
		}

		::System::UInt32 PCMFGAPBPGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_PCMFGAPBPGK_OFFSET))(this);
		}

		::System::Void FDPMDCOAEIL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_FDPMDCOAEIL_OFFSET))(this, a1);
		}

		::System::Boolean KHBGONMDCPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_KHBGONMDCPI_OFFSET))(this);
		}

		::System::Void LNCKJIDOBPA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_LNCKJIDOBPA_OFFSET))(this, a1);
		}

		::System::Boolean DDKEMHMJGFL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_DDKEMHMJGFL_OFFSET))(this);
		}

		::System::Void JBEDNJOHOFO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_JBEDNJOHOFO_OFFSET))(this, a1);
		}

		::System::UInt32 OLBKJMAIDKH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_OLBKJMAIDKH_OFFSET))(this);
		}

		::System::Void INAEHNCKBJC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_INAEHNCKBJC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPMAKCHCDMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPMAKCHCDMH*))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPMAKCHCDMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAKCHCDMH*))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPMAKCHCDMH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
