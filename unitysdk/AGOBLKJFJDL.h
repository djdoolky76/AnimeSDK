#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGOBLKJFJDL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGOBLKJFJDL_BNGPEFLDIJG_OFFSET UNITYSDK_OFFSET(0x1E12ECA0)
#define AGOBLKJFJDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E12EFD0)
#define AGOBLKJFJDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12F2A0)
#define AGOBLKJFJDL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E12EC20)
#define AGOBLKJFJDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E12EBF0)
#define AGOBLKJFJDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12EBE0)
#define AGOBLKJFJDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E12ED90)
#define AGOBLKJFJDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E12ECB0)
#define AGOBLKJFJDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E12EE60)
#define AGOBLKJFJDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E12EBA0)
#define AGOBLKJFJDL_KLMNDONIIFN_OFFSET UNITYSDK_OFFSET(0x1E12EC80)
#define AGOBLKJFJDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E12F120)
#define AGOBLKJFJDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E12F0E0)
#define AGOBLKJFJDL_NFHNLMOMKPK_OFFSET UNITYSDK_OFFSET(0x1E12EC70)
#define AGOBLKJFJDL_NMHMOPOBMJH_OFFSET UNITYSDK_OFFSET(0x1E12EC90)
#define AGOBLKJFJDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E12EBD0)
#define AGOBLKJFJDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E12EE90)
#define AGOBLKJFJDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E12EEF0)

inline static constexpr unsigned int AGOBLKJFJDL_TypeDefinitionIndex = 29617;

	class AGOBLKJFJDL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BBMFHHGBMFO; // 0x18
		::System::UInt32 ANEFFHJFEAP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::AGOBLKJFJDL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AGOBLKJFJDL*>**)UnitySDK::FromName("", "AGOBLKJFJDL")->GetStaticField(0x30A80);
		}

		// static const ::System::Object PKPEMIHLFGD; // 0x0
		// static const ::System::Object PCCPNBOELHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOBLKJFJDL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGOBLKJFJDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGOBLKJFJDL*))((::PBYTE)hIl2Cpp + AGOBLKJFJDL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGOBLKJFJDL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AGOBLKJFJDL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AGOBLKJFJDL*>*(*)())((::PBYTE)hIl2Cpp + AGOBLKJFJDL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOBLKJFJDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGOBLKJFJDL* Clone()
		{
			return ((::AGOBLKJFJDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOBLKJFJDL_CLONE_OFFSET))(this);
		}

		::System::UInt32 NFHNLMOMKPK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOBLKJFJDL_NFHNLMOMKPK_OFFSET))(this);
		}

		::System::Void KLMNDONIIFN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGOBLKJFJDL_KLMNDONIIFN_OFFSET))(this, a1);
		}

		::System::UInt32 NMHMOPOBMJH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOBLKJFJDL_NMHMOPOBMJH_OFFSET))(this);
		}

		::System::Void BNGPEFLDIJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGOBLKJFJDL_BNGPEFLDIJG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGOBLKJFJDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGOBLKJFJDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGOBLKJFJDL*))((::PBYTE)hIl2Cpp + AGOBLKJFJDL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOBLKJFJDL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOBLKJFJDL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGOBLKJFJDL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOBLKJFJDL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGOBLKJFJDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGOBLKJFJDL*))((::PBYTE)hIl2Cpp + AGOBLKJFJDL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGOBLKJFJDL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
