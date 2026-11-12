#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHMEPILLHL.h"
#include "unitysdk/System/Object.h"
class MAOKMPOELCO;
class PKHKEEKIODC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MAOKMPOELCO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD07B00)
#define MAOKMPOELCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD07EC0)
#define MAOKMPOELCO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD07500)
#define MAOKMPOELCO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD07490)
#define MAOKMPOELCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD07480)
#define MAOKMPOELCO_EIGGOMFFLGG_OFFSET UNITYSDK_OFFSET(0x1FD07590)
#define MAOKMPOELCO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD07770)
#define MAOKMPOELCO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD075E0)
#define MAOKMPOELCO_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1FD075D0)
#define MAOKMPOELCO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD07900)
#define MAOKMPOELCO_GJFLEDCJGPG_OFFSET UNITYSDK_OFFSET(0x1FD07580)
#define MAOKMPOELCO_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1FD075C0)
#define MAOKMPOELCO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD07440)
#define MAOKMPOELCO_LPJGBMNIAIL_OFFSET UNITYSDK_OFFSET(0x1FD075A0)
#define MAOKMPOELCO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD07D10)
#define MAOKMPOELCO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD07C90)
#define MAOKMPOELCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD07470)
#define MAOKMPOELCO_PLNBIBDNIJK_OFFSET UNITYSDK_OFFSET(0x1FD075B0)
#define MAOKMPOELCO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD07940)
#define MAOKMPOELCO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD079A0)

inline static constexpr unsigned int MAOKMPOELCO_TypeDefinitionIndex = 33921;

	class MAOKMPOELCO : public ::System::Object
	{
	public:
		::PKHKEEKIODC* GAPGOEGADAD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::NHHMEPILLHL HDAIPLJBGAB; // 0x20
		::System::UInt32 JEPIGMEMEKE; // 0x24
		static ::Google::Protobuf::MessageParser_1<::MAOKMPOELCO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MAOKMPOELCO*>**)UnitySDK::FromName("", "MAOKMPOELCO")->GetStaticField(0x4BD80);
		}

		// static const ::System::Object GEPLKKBDGGD; // 0x0
		// static const ::System::Object GANGLFDOJDI; // 0x0
		// static const ::System::Object CGMFPGNNGEK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOKMPOELCO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MAOKMPOELCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAOKMPOELCO*))((::PBYTE)hIl2Cpp + MAOKMPOELCO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAOKMPOELCO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MAOKMPOELCO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MAOKMPOELCO*>*(*)())((::PBYTE)hIl2Cpp + MAOKMPOELCO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOKMPOELCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MAOKMPOELCO* Clone()
		{
			return ((::MAOKMPOELCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOKMPOELCO_CLONE_OFFSET))(this);
		}

		::System::UInt32 GJFLEDCJGPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOKMPOELCO_GJFLEDCJGPG_OFFSET))(this);
		}

		::System::Void EIGGOMFFLGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MAOKMPOELCO_EIGGOMFFLGG_OFFSET))(this, a1);
		}

		::PKHKEEKIODC* LPJGBMNIAIL()
		{
			return ((::PKHKEEKIODC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOKMPOELCO_LPJGBMNIAIL_OFFSET))(this);
		}

		::System::Void PLNBIBDNIJK(::PKHKEEKIODC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKHKEEKIODC*))((::PBYTE)hIl2Cpp + MAOKMPOELCO_PLNBIBDNIJK_OFFSET))(this, a1);
		}

		::NHHMEPILLHL IOIFPHAMFDF()
		{
			return ((::NHHMEPILLHL(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOKMPOELCO_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::NHHMEPILLHL a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL))((::PBYTE)hIl2Cpp + MAOKMPOELCO_FHGAPGHAPFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MAOKMPOELCO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MAOKMPOELCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MAOKMPOELCO*))((::PBYTE)hIl2Cpp + MAOKMPOELCO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOKMPOELCO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOKMPOELCO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MAOKMPOELCO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOKMPOELCO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MAOKMPOELCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAOKMPOELCO*))((::PBYTE)hIl2Cpp + MAOKMPOELCO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MAOKMPOELCO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
