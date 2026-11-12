#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMAKCHCDMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPMAKCHCDMH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBFCA50)
#define KPMAKCHCDMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBFCC80)
#define KPMAKCHCDMH_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBFC580)
#define KPMAKCHCDMH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBFC540)
#define KPMAKCHCDMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBFC530)
#define KPMAKCHCDMH_DDKEMHMJGFL_OFFSET UNITYSDK_OFFSET(0x1FBFC610)
#define KPMAKCHCDMH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBFC6C0)
#define KPMAKCHCDMH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBFC650)
#define KPMAKCHCDMH_FDPMDCOAEIL_OFFSET UNITYSDK_OFFSET(0x1FBFC5E0)
#define KPMAKCHCDMH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBFC7C0)
#define KPMAKCHCDMH_INAEHNCKBJC_OFFSET UNITYSDK_OFFSET(0x1FBFC640)
#define KPMAKCHCDMH_JBEDNJOHOFO_OFFSET UNITYSDK_OFFSET(0x1FBFC620)
#define KPMAKCHCDMH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBFC4F0)
#define KPMAKCHCDMH_KHBGONMDCPI_OFFSET UNITYSDK_OFFSET(0x1FBFC5F0)
#define KPMAKCHCDMH_LNCKJIDOBPA_OFFSET UNITYSDK_OFFSET(0x1FBFC600)
#define KPMAKCHCDMH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBFCBD0)
#define KPMAKCHCDMH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBFCB80)
#define KPMAKCHCDMH_OLBKJMAIDKH_OFFSET UNITYSDK_OFFSET(0x1FBFC630)
#define KPMAKCHCDMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBFC520)
#define KPMAKCHCDMH_PCMFGAPBPGK_OFFSET UNITYSDK_OFFSET(0x1FBFC5D0)
#define KPMAKCHCDMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBFC7F0)
#define KPMAKCHCDMH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBFC850)

inline static constexpr unsigned int KPMAKCHCDMH_TypeDefinitionIndex = 26483;

	class KPMAKCHCDMH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean NBFBKFJOEDJ; // 0x18
		::System::Boolean DHAHNCEMJJE; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 DBHLHPDBNFD; // 0x1C
		::System::UInt32 OFAGPEOKFKD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KPMAKCHCDMH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KPMAKCHCDMH*>**)UnitySDK::FromName("", "KPMAKCHCDMH")->GetStaticField(0x24D30);
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

		static ::Google::Protobuf::MessageParser_1<::KPMAKCHCDMH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KPMAKCHCDMH*>*(*)())((::PBYTE)hIl2Cpp + KPMAKCHCDMH_JJGHOBBFNJD_OFFSET))();
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
