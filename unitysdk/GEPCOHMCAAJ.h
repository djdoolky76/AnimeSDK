#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEPCOHMCAAJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GEPCOHMCAAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F74CFE0)
#define GEPCOHMCAAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F74D200)
#define GEPCOHMCAAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1F74CC30)
#define GEPCOHMCAAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F74CC00)
#define GEPCOHMCAAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1F74CBF0)
#define GEPCOHMCAAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F74CD60)
#define GEPCOHMCAAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F74CC90)
#define GEPCOHMCAAJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F74CC80)
#define GEPCOHMCAAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F74CED0)
#define GEPCOHMCAAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F74CBB0)
#define GEPCOHMCAAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F74D0A0)
#define GEPCOHMCAAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F74D070)
#define GEPCOHMCAAJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F74CC70)
#define GEPCOHMCAAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F74CBE0)
#define GEPCOHMCAAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F74CF00)
#define GEPCOHMCAAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F74CF60)

inline static constexpr unsigned int GEPCOHMCAAJ_TypeDefinitionIndex = 27639;

	class GEPCOHMCAAJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GEPCOHMCAAJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GEPCOHMCAAJ*>**)UnitySDK::FromName("", "GEPCOHMCAAJ")->GetStaticField(0x9920);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GEPCOHMCAAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEPCOHMCAAJ*))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GEPCOHMCAAJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GEPCOHMCAAJ*>*(*)())((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GEPCOHMCAAJ* Clone()
		{
			return ((::GEPCOHMCAAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GEPCOHMCAAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEPCOHMCAAJ*))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GEPCOHMCAAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEPCOHMCAAJ*))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
