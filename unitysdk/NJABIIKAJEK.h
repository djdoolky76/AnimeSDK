#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class NJABIIKAJEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NJABIIKAJEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB0C850)
#define NJABIIKAJEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0CBC0)
#define NJABIIKAJEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB0C3A0)
#define NJABIIKAJEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB0C310)
#define NJABIIKAJEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0C2D0)
#define NJABIIKAJEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB0C550)
#define NJABIIKAJEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB0C400)
#define NJABIIKAJEK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB0C3E0)
#define NJABIIKAJEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB0C680)
#define NJABIIKAJEK_GFJDMEPNGFB_OFFSET UNITYSDK_OFFSET(0x1EB0C3F0)
#define NJABIIKAJEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB0C290)
#define NJABIIKAJEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB0CA00)
#define NJABIIKAJEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB0C960)
#define NJABIIKAJEK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB0C3D0)
#define NJABIIKAJEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB0C2C0)
#define NJABIIKAJEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB0C6F0)
#define NJABIIKAJEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB0C750)

inline static constexpr unsigned int NJABIIKAJEK_TypeDefinitionIndex = 30012;

	class NJABIIKAJEK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* BPLDOOODONJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NJABIIKAJEK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NJABIIKAJEK*>**)UnitySDK::FromName("", "NJABIIKAJEK")->GetStaticField(0x68610);
		}

		static ::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>** StaticGet_LANJFHKLDDA()
		{
			return (::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>**)UnitySDK::FromName("", "NJABIIKAJEK")->GetStaticField(0x68618);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CEKIBAHNILO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJABIIKAJEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJABIIKAJEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJABIIKAJEK*))((::PBYTE)hIl2Cpp + NJABIIKAJEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJABIIKAJEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NJABIIKAJEK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NJABIIKAJEK*>*(*)())((::PBYTE)hIl2Cpp + NJABIIKAJEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJABIIKAJEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJABIIKAJEK* Clone()
		{
			return ((::NJABIIKAJEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJABIIKAJEK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJABIIKAJEK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJABIIKAJEK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* GFJDMEPNGFB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJABIIKAJEK_GFJDMEPNGFB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJABIIKAJEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJABIIKAJEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJABIIKAJEK*))((::PBYTE)hIl2Cpp + NJABIIKAJEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJABIIKAJEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJABIIKAJEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJABIIKAJEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJABIIKAJEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJABIIKAJEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJABIIKAJEK*))((::PBYTE)hIl2Cpp + NJABIIKAJEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJABIIKAJEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
