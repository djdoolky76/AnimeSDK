#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKNGOGLNKIG.h"
#include "unitysdk/NHMPGNHBBLC.h"
#include "unitysdk/System/Object.h"
class IJNFOHJGPBC;
class NLIOPBPOBHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NLIOPBPOBHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB65DB0)
#define NLIOPBPOBHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB661E0)
#define NLIOPBPOBHB_CJLMJHCHKHN_OFFSET UNITYSDK_OFFSET(0x1EB65960)
#define NLIOPBPOBHB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB658D0)
#define NLIOPBPOBHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB65830)
#define NLIOPBPOBHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB657F0)
#define NLIOPBPOBHB_EJDIMEGMAKG_OFFSET UNITYSDK_OFFSET(0x1EB65930)
#define NLIOPBPOBHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB659A0)
#define NLIOPBPOBHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB65970)
#define NLIOPBPOBHB_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1EB65910)
#define NLIOPBPOBHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB65AE0)
#define NLIOPBPOBHB_GOIACKBBPOD_OFFSET UNITYSDK_OFFSET(0x1EB65940)
#define NLIOPBPOBHB_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1EB65900)
#define NLIOPBPOBHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB657B0)
#define NLIOPBPOBHB_LPGFDDHOLKC_OFFSET UNITYSDK_OFFSET(0x1EB65920)
#define NLIOPBPOBHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB660F0)
#define NLIOPBPOBHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB66030)
#define NLIOPBPOBHB_PBIJKOCGLEO_OFFSET UNITYSDK_OFFSET(0x1EB65950)
#define NLIOPBPOBHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB657E0)
#define NLIOPBPOBHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB65B60)
#define NLIOPBPOBHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB65BC0)

inline static constexpr unsigned int NLIOPBPOBHB_TypeDefinitionIndex = 33698;

	class NLIOPBPOBHB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IJNFOHJGPBC*>* PJIFEBIIEIG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 CACDFJOCAHL; // 0x20
		::NHMPGNHBBLC AFHHMCKLLAJ; // 0x24
		::FKNGOGLNKIG EMHBAOIIKLC; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NLIOPBPOBHB")->GetStaticField(0x6B8D0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_OICNOJJNCEM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NLIOPBPOBHB")->GetStaticField(0x6B8D8);
		}

		// static const ::System::Object LFMHICIGAPC; // 0x0
		// static const ::System::Object NCLJGLKAFBI; // 0x0
		// static const ::System::Object NINHOJDICNH; // 0x0
		// static const ::System::Object JLMDACLBIAF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NLIOPBPOBHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLIOPBPOBHB*))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLIOPBPOBHB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NLIOPBPOBHB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NLIOPBPOBHB* Clone()
		{
			return ((::NLIOPBPOBHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_CLONE_OFFSET))(this);
		}

		::NHMPGNHBBLC JBENBABCOGB()
		{
			return ((::NHMPGNHBBLC(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::NHMPGNHBBLC a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHMPGNHBBLC))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IJNFOHJGPBC*>* LPGFDDHOLKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IJNFOHJGPBC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_LPGFDDHOLKC_OFFSET))(this);
		}

		::FKNGOGLNKIG EJDIMEGMAKG()
		{
			return ((::FKNGOGLNKIG(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_EJDIMEGMAKG_OFFSET))(this);
		}

		::System::Void GOIACKBBPOD(::FKNGOGLNKIG a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKNGOGLNKIG))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_GOIACKBBPOD_OFFSET))(this, a1);
		}

		::System::UInt32 PBIJKOCGLEO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_PBIJKOCGLEO_OFFSET))(this);
		}

		::System::Void CJLMJHCHKHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_CJLMJHCHKHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NLIOPBPOBHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLIOPBPOBHB*))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NLIOPBPOBHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLIOPBPOBHB*))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NLIOPBPOBHB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
