#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCPNGFOCOGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PCPNGFOCOGA_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1DEDE670)
#define PCPNGFOCOGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEDEB00)
#define PCPNGFOCOGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEDEE90)
#define PCPNGFOCOGA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEDE580)
#define PCPNGFOCOGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEDE530)
#define PCPNGFOCOGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDE520)
#define PCPNGFOCOGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEDE790)
#define PCPNGFOCOGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEDE680)
#define PCPNGFOCOGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEDE8A0)
#define PCPNGFOCOGA_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1DEDE660)
#define PCPNGFOCOGA_HJFPHKFDGPA_OFFSET UNITYSDK_OFFSET(0x1DEDE610)
#define PCPNGFOCOGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEDE4E0)
#define PCPNGFOCOGA_LPNGGIMGEMI_OFFSET UNITYSDK_OFFSET(0x1DEDE5E0)
#define PCPNGFOCOGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEDECC0)
#define PCPNGFOCOGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEDEC60)
#define PCPNGFOCOGA_NIGNBJPJHBD_OFFSET UNITYSDK_OFFSET(0x1DEDE5F0)
#define PCPNGFOCOGA_OJIDMNELKNF_OFFSET UNITYSDK_OFFSET(0x1DEDE600)
#define PCPNGFOCOGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEDE510)
#define PCPNGFOCOGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEDE950)
#define PCPNGFOCOGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEDE9B0)

inline static constexpr unsigned int PCPNGFOCOGA_TypeDefinitionIndex = 28987;

	class PCPNGFOCOGA : public ::System::Object
	{
	public:
		::System::String* NFMDJEOKDLF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IBEBBFIHLLP; // 0x20
		::System::UInt32 IADNJCMLAGB; // 0x24
		static ::Google::Protobuf::MessageParser_1<::PCPNGFOCOGA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PCPNGFOCOGA*>**)UnitySDK::FromName("", "PCPNGFOCOGA")->GetStaticField(0x2F1D0);
		}

		// static const ::System::Object JMLKCFFEPPE; // 0x0
		// static const ::System::Object FOHJPMIFJKC; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PCPNGFOCOGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCPNGFOCOGA*))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCPNGFOCOGA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PCPNGFOCOGA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PCPNGFOCOGA*>*(*)())((::PBYTE)hIl2Cpp + PCPNGFOCOGA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PCPNGFOCOGA* Clone()
		{
			return ((::PCPNGFOCOGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_CLONE_OFFSET))(this);
		}

		::System::UInt32 LPNGGIMGEMI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_LPNGGIMGEMI_OFFSET))(this);
		}

		::System::Void NIGNBJPJHBD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_NIGNBJPJHBD_OFFSET))(this, a1);
		}

		::System::String* OJIDMNELKNF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_OJIDMNELKNF_OFFSET))(this);
		}

		::System::Void HJFPHKFDGPA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_HJFPHKFDGPA_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PCPNGFOCOGA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PCPNGFOCOGA*))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PCPNGFOCOGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCPNGFOCOGA*))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PCPNGFOCOGA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
