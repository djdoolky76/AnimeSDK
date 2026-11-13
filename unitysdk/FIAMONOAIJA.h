#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIAMONOAIJA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FIAMONOAIJA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2069A3F0)
#define FIAMONOAIJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x2069A610)
#define FIAMONOAIJA_CLONE_OFFSET UNITYSDK_OFFSET(0x2069A040)
#define FIAMONOAIJA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2069A010)
#define FIAMONOAIJA_CTOR_OFFSET UNITYSDK_OFFSET(0x2069A000)
#define FIAMONOAIJA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2069A170)
#define FIAMONOAIJA_EQUALS_OFFSET UNITYSDK_OFFSET(0x2069A0A0)
#define FIAMONOAIJA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x2069A090)
#define FIAMONOAIJA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2069A2E0)
#define FIAMONOAIJA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20699FC0)
#define FIAMONOAIJA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2069A4B0)
#define FIAMONOAIJA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2069A480)
#define FIAMONOAIJA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x2069A080)
#define FIAMONOAIJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20699FF0)
#define FIAMONOAIJA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2069A310)
#define FIAMONOAIJA_WRITETO_OFFSET UNITYSDK_OFFSET(0x2069A370)

inline static constexpr unsigned int FIAMONOAIJA_TypeDefinitionIndex = 30399;

	class FIAMONOAIJA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FIAMONOAIJA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FIAMONOAIJA*>**)UnitySDK::FromName("", "FIAMONOAIJA")->GetStaticField(0x43050);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAMONOAIJA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FIAMONOAIJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIAMONOAIJA*))((::PBYTE)hIl2Cpp + FIAMONOAIJA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIAMONOAIJA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FIAMONOAIJA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FIAMONOAIJA*>*(*)())((::PBYTE)hIl2Cpp + FIAMONOAIJA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAMONOAIJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FIAMONOAIJA* Clone()
		{
			return ((::FIAMONOAIJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAMONOAIJA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAMONOAIJA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIAMONOAIJA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIAMONOAIJA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FIAMONOAIJA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIAMONOAIJA*))((::PBYTE)hIl2Cpp + FIAMONOAIJA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAMONOAIJA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAMONOAIJA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FIAMONOAIJA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAMONOAIJA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FIAMONOAIJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIAMONOAIJA*))((::PBYTE)hIl2Cpp + FIAMONOAIJA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FIAMONOAIJA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
