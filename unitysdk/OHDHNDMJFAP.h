#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFALLFOEHKN;
class OHDHNDMJFAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHDHNDMJFAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE315C0)
#define OHDHNDMJFAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE31A50)
#define OHDHNDMJFAP_CJKOFPKFCML_OFFSET UNITYSDK_OFFSET(0x1DE31100)
#define OHDHNDMJFAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE310B0)
#define OHDHNDMJFAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE31010)
#define OHDHNDMJFAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE30FD0)
#define OHDHNDMJFAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE31290)
#define OHDHNDMJFAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE31130)
#define OHDHNDMJFAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE313C0)
#define OHDHNDMJFAP_HHHKBONFMBO_OFFSET UNITYSDK_OFFSET(0x1DE310E0)
#define OHDHNDMJFAP_JFEKIJBACCI_OFFSET UNITYSDK_OFFSET(0x1DE31120)
#define OHDHNDMJFAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE30F90)
#define OHDHNDMJFAP_LHJJDDGJHHM_OFFSET UNITYSDK_OFFSET(0x1DE31110)
#define OHDHNDMJFAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE317E0)
#define OHDHNDMJFAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE31730)
#define OHDHNDMJFAP_OMLPHPIFOKN_OFFSET UNITYSDK_OFFSET(0x1DE310F0)
#define OHDHNDMJFAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE30FC0)
#define OHDHNDMJFAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE31430)
#define OHDHNDMJFAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE31490)

inline static constexpr unsigned int OHDHNDMJFAP_TypeDefinitionIndex = 25618;

	class OHDHNDMJFAP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HFALLFOEHKN*>* PMJDDAKNEPC; // 0x18
		::System::UInt32 IFJHLEFNGLG; // 0x20
		::System::UInt32 DLKGFEOFIMM; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::HFALLFOEHKN*>** StaticGet_HALMGOFKOLF()
		{
			return (::Google::Protobuf::FieldCodec_1<::HFALLFOEHKN*>**)UnitySDK::FromName("", "OHDHNDMJFAP")->GetStaticField(0x19750);
		}

		static ::Google::Protobuf::MessageParser_1<::OHDHNDMJFAP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OHDHNDMJFAP*>**)UnitySDK::FromName("", "OHDHNDMJFAP")->GetStaticField(0x19758);
		}

		// static const ::System::Object NBBKPGNCIKI; // 0x0
		// static const ::System::Object LGOEHBABNDJ; // 0x0
		// static const ::System::Object LNFFJENGEPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHDHNDMJFAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHNDMJFAP*))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHDHNDMJFAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OHDHNDMJFAP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OHDHNDMJFAP*>*(*)())((::PBYTE)hIl2Cpp + OHDHNDMJFAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHDHNDMJFAP* Clone()
		{
			return ((::OHDHNDMJFAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HFALLFOEHKN*>* HHHKBONFMBO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HFALLFOEHKN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_HHHKBONFMBO_OFFSET))(this);
		}

		::System::UInt32 OMLPHPIFOKN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_OMLPHPIFOKN_OFFSET))(this);
		}

		::System::Void CJKOFPKFCML(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_CJKOFPKFCML_OFFSET))(this, a1);
		}

		::System::UInt32 LHJJDDGJHHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_LHJJDDGJHHM_OFFSET))(this);
		}

		::System::Void JFEKIJBACCI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_JFEKIJBACCI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHDHNDMJFAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHDHNDMJFAP*))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHDHNDMJFAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHNDMJFAP*))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHDHNDMJFAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
