#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLPLICDMFEL;
class MGFAALHCHEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGFAALHCHEF_BKGJIDNEOML_OFFSET UNITYSDK_OFFSET(0x1FB25240)
#define MGFAALHCHEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB256A0)
#define MGFAALHCHEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB25A80)
#define MGFAALHCHEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB25210)
#define MGFAALHCHEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB25150)
#define MGFAALHCHEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB25100)
#define MGFAALHCHEF_DEKJBNNGOLI_OFFSET UNITYSDK_OFFSET(0x1FB25260)
#define MGFAALHCHEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB252E0)
#define MGFAALHCHEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB252B0)
#define MGFAALHCHEF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FB252A0)
#define MGFAALHCHEF_GDELACEOOBH_OFFSET UNITYSDK_OFFSET(0x1FB25250)
#define MGFAALHCHEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB25410)
#define MGFAALHCHEF_JJDKOEONGHO_OFFSET UNITYSDK_OFFSET(0x1FB25280)
#define MGFAALHCHEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB250C0)
#define MGFAALHCHEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB25980)
#define MGFAALHCHEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB258C0)
#define MGFAALHCHEF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FB25290)
#define MGFAALHCHEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB250F0)
#define MGFAALHCHEF_PKFKJCPLLOM_OFFSET UNITYSDK_OFFSET(0x1FB25270)
#define MGFAALHCHEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB25480)
#define MGFAALHCHEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB254E0)

inline static constexpr unsigned int MGFAALHCHEF_TypeDefinitionIndex = 31760;

	class MGFAALHCHEF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BLPLICDMFEL*>* MMKJBPKFLAN; // 0x18
		::System::UInt32 PJLEJLBFGGC; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 LAPNIOGIGPL; // 0x28
		static ::Google::Protobuf::MessageParser_1<::MGFAALHCHEF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MGFAALHCHEF*>**)UnitySDK::FromName("", "MGFAALHCHEF")->GetStaticField(0x51820);
		}

		static ::Google::Protobuf::FieldCodec_1<::BLPLICDMFEL*>** StaticGet_ONJBMCDCOGM()
		{
			return (::Google::Protobuf::FieldCodec_1<::BLPLICDMFEL*>**)UnitySDK::FromName("", "MGFAALHCHEF")->GetStaticField(0x51828);
		}

		// static const ::System::Object PBIMIKMLPIE; // 0x0
		// static const ::System::Object BIAGFGJNPEF; // 0x0
		// static const ::System::Object ODHBDFKGPJO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFAALHCHEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGFAALHCHEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGFAALHCHEF*))((::PBYTE)hIl2Cpp + MGFAALHCHEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGFAALHCHEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MGFAALHCHEF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MGFAALHCHEF*>*(*)())((::PBYTE)hIl2Cpp + MGFAALHCHEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFAALHCHEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGFAALHCHEF* Clone()
		{
			return ((::MGFAALHCHEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFAALHCHEF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BLPLICDMFEL*>* BKGJIDNEOML()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BLPLICDMFEL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFAALHCHEF_BKGJIDNEOML_OFFSET))(this);
		}

		::System::UInt32 GDELACEOOBH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFAALHCHEF_GDELACEOOBH_OFFSET))(this);
		}

		::System::Void DEKJBNNGOLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGFAALHCHEF_DEKJBNNGOLI_OFFSET))(this, a1);
		}

		::System::UInt32 PKFKJCPLLOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFAALHCHEF_PKFKJCPLLOM_OFFSET))(this);
		}

		::System::Void JJDKOEONGHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGFAALHCHEF_JJDKOEONGHO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFAALHCHEF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGFAALHCHEF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGFAALHCHEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGFAALHCHEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGFAALHCHEF*))((::PBYTE)hIl2Cpp + MGFAALHCHEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFAALHCHEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFAALHCHEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGFAALHCHEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFAALHCHEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGFAALHCHEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGFAALHCHEF*))((::PBYTE)hIl2Cpp + MGFAALHCHEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGFAALHCHEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
