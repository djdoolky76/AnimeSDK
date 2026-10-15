#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PILLGGGIPAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PILLGGGIPAF_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DF6CB30)
#define PILLGGGIPAF_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DF6CB40)
#define PILLGGGIPAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF6CF60)
#define PILLGGGIPAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6D270)
#define PILLGGGIPAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF6CAE0)
#define PILLGGGIPAF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF6CAA0)
#define PILLGGGIPAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6CA90)
#define PILLGGGIPAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF6CC80)
#define PILLGGGIPAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF6CB90)
#define PILLGGGIPAF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF6CB60)
#define PILLGGGIPAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF6CD60)
#define PILLGGGIPAF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF6CA50)
#define PILLGGGIPAF_KHBGONMDCPI_OFFSET UNITYSDK_OFFSET(0x1DF6CB70)
#define PILLGGGIPAF_LNCKJIDOBPA_OFFSET UNITYSDK_OFFSET(0x1DF6CB80)
#define PILLGGGIPAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF6D0D0)
#define PILLGGGIPAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF6D080)
#define PILLGGGIPAF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF6CB50)
#define PILLGGGIPAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF6CA80)
#define PILLGGGIPAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF6CD90)
#define PILLGGGIPAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF6CDF0)

	class PILLGGGIPAF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		::System::Boolean DHAHNCEMJJE; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PILLGGGIPAF")->GetStaticField(0x44760);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HOLLCCLAJAB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PILLGGGIPAF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PILLGGGIPAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PILLGGGIPAF*))((::PBYTE)hIl2Cpp + PILLGGGIPAF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PILLGGGIPAF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PILLGGGIPAF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PILLGGGIPAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PILLGGGIPAF* Clone()
		{
			return ((::PILLGGGIPAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PILLGGGIPAF_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PILLGGGIPAF_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PILLGGGIPAF_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PILLGGGIPAF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PILLGGGIPAF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean KHBGONMDCPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PILLGGGIPAF_KHBGONMDCPI_OFFSET))(this);
		}

		::System::Void LNCKJIDOBPA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PILLGGGIPAF_LNCKJIDOBPA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PILLGGGIPAF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PILLGGGIPAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PILLGGGIPAF*))((::PBYTE)hIl2Cpp + PILLGGGIPAF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PILLGGGIPAF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PILLGGGIPAF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PILLGGGIPAF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PILLGGGIPAF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PILLGGGIPAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PILLGGGIPAF*))((::PBYTE)hIl2Cpp + PILLGGGIPAF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PILLGGGIPAF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
