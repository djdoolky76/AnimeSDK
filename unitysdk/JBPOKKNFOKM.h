#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFIIJJEGKHC;
class JBPOKKNFOKM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JBPOKKNFOKM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204184F0)
#define JBPOKKNFOKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x20418930)
#define JBPOKKNFOKM_CLONE_OFFSET UNITYSDK_OFFSET(0x20417FA0)
#define JBPOKKNFOKM_CPLBPDJBOHL_OFFSET UNITYSDK_OFFSET(0x20417FD0)
#define JBPOKKNFOKM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20417EE0)
#define JBPOKKNFOKM_CTOR_OFFSET UNITYSDK_OFFSET(0x20417E90)
#define JBPOKKNFOKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20418180)
#define JBPOKKNFOKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x20418020)
#define JBPOKKNFOKM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20418010)
#define JBPOKKNFOKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204182B0)
#define JBPOKKNFOKM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20417E50)
#define JBPOKKNFOKM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20418740)
#define JBPOKKNFOKM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20418690)
#define JBPOKKNFOKM_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x20417FF0)
#define JBPOKKNFOKM_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x20417FE0)
#define JBPOKKNFOKM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20418000)
#define JBPOKKNFOKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20417E80)
#define JBPOKKNFOKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20418320)
#define JBPOKKNFOKM_WRITETO_OFFSET UNITYSDK_OFFSET(0x20418380)

inline static constexpr unsigned int JBPOKKNFOKM_TypeDefinitionIndex = 26528;

	class JBPOKKNFOKM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CFIIJJEGKHC*>* FNCNOPJEEIO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 ABPDPMHFFNN; // 0x24
		static ::Google::Protobuf::MessageParser_1<::JBPOKKNFOKM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JBPOKKNFOKM*>**)UnitySDK::FromName("", "JBPOKKNFOKM")->GetStaticField(0x5BDB0);
		}

		static ::Google::Protobuf::FieldCodec_1<::CFIIJJEGKHC*>** StaticGet_CHDMKFGFGGE()
		{
			return (::Google::Protobuf::FieldCodec_1<::CFIIJJEGKHC*>**)UnitySDK::FromName("", "JBPOKKNFOKM")->GetStaticField(0x5BDB8);
		}

		// static const ::System::Object KIENLLEPOBI; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JBPOKKNFOKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBPOKKNFOKM*))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBPOKKNFOKM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JBPOKKNFOKM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JBPOKKNFOKM*>*(*)())((::PBYTE)hIl2Cpp + JBPOKKNFOKM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JBPOKKNFOKM* Clone()
		{
			return ((::JBPOKKNFOKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CFIIJJEGKHC*>* CPLBPDJBOHL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CFIIJJEGKHC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_CPLBPDJBOHL_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JBPOKKNFOKM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBPOKKNFOKM*))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JBPOKKNFOKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBPOKKNFOKM*))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JBPOKKNFOKM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
