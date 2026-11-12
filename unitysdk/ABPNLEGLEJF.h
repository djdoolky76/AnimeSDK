#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABPNLEGLEJF;
class GFOAMKNHBFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABPNLEGLEJF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EFD7FF0)
#define ABPNLEGLEJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFD8390)
#define ABPNLEGLEJF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EFD7B40)
#define ABPNLEGLEJF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFD7A80)
#define ABPNLEGLEJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD7A30)
#define ABPNLEGLEJF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EFD7CF0)
#define ABPNLEGLEJF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFD7BA0)
#define ABPNLEGLEJF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EFD7B90)
#define ABPNLEGLEJF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFD7E10)
#define ABPNLEGLEJF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EFD79F0)
#define ABPNLEGLEJF_LJGFJFHCDNE_OFFSET UNITYSDK_OFFSET(0x1EFD7B70)
#define ABPNLEGLEJF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EFD81C0)
#define ABPNLEGLEJF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EFD8120)
#define ABPNLEGLEJF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EFD7B80)
#define ABPNLEGLEJF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EFD7A20)
#define ABPNLEGLEJF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFD7E80)
#define ABPNLEGLEJF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EFD7EE0)

inline static constexpr unsigned int ABPNLEGLEJF_TypeDefinitionIndex = 33413;

	class ABPNLEGLEJF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::GFOAMKNHBFE*>* KAGGINEGEFC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::GFOAMKNHBFE*>** StaticGet_PADBLEPKGIH()
		{
			return (::Google::Protobuf::FieldCodec_1<::GFOAMKNHBFE*>**)UnitySDK::FromName("", "ABPNLEGLEJF")->GetStaticField(0x35490);
		}

		static ::Google::Protobuf::MessageParser_1<::ABPNLEGLEJF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ABPNLEGLEJF*>**)UnitySDK::FromName("", "ABPNLEGLEJF")->GetStaticField(0x35498);
		}

		// static const ::System::Object DHBJMKKLOGO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPNLEGLEJF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABPNLEGLEJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABPNLEGLEJF*))((::PBYTE)hIl2Cpp + ABPNLEGLEJF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABPNLEGLEJF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ABPNLEGLEJF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ABPNLEGLEJF*>*(*)())((::PBYTE)hIl2Cpp + ABPNLEGLEJF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPNLEGLEJF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABPNLEGLEJF* Clone()
		{
			return ((::ABPNLEGLEJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPNLEGLEJF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GFOAMKNHBFE*>* LJGFJFHCDNE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GFOAMKNHBFE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPNLEGLEJF_LJGFJFHCDNE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPNLEGLEJF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABPNLEGLEJF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABPNLEGLEJF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABPNLEGLEJF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABPNLEGLEJF*))((::PBYTE)hIl2Cpp + ABPNLEGLEJF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPNLEGLEJF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPNLEGLEJF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABPNLEGLEJF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPNLEGLEJF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABPNLEGLEJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABPNLEGLEJF*))((::PBYTE)hIl2Cpp + ABPNLEGLEJF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABPNLEGLEJF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
