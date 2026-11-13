#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICOCIJEBKKD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ICOCIJEBKKD_BJPILAACJMD_OFFSET UNITYSDK_OFFSET(0x20131740)
#define ICOCIJEBKKD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20131AA0)
#define ICOCIJEBKKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x20131D70)
#define ICOCIJEBKKD_CFEMPMFEMIP_OFFSET UNITYSDK_OFFSET(0x20131730)
#define ICOCIJEBKKD_CLONE_OFFSET UNITYSDK_OFFSET(0x201316A0)
#define ICOCIJEBKKD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20131670)
#define ICOCIJEBKKD_CTOR_OFFSET UNITYSDK_OFFSET(0x20131660)
#define ICOCIJEBKKD_EGIONFKGDAJ_OFFSET UNITYSDK_OFFSET(0x20131710)
#define ICOCIJEBKKD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20131860)
#define ICOCIJEBKKD_EQUALS_OFFSET UNITYSDK_OFFSET(0x20131750)
#define ICOCIJEBKKD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20131930)
#define ICOCIJEBKKD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x201315F0)
#define ICOCIJEBKKD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20131BF0)
#define ICOCIJEBKKD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20131BB0)
#define ICOCIJEBKKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20131650)
#define ICOCIJEBKKD_PJMAABCFOJL_OFFSET UNITYSDK_OFFSET(0x20131720)
#define ICOCIJEBKKD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20131960)
#define ICOCIJEBKKD_WRITETO_OFFSET UNITYSDK_OFFSET(0x201319C0)

inline static constexpr unsigned int ICOCIJEBKKD_TypeDefinitionIndex = 28319;

	class ICOCIJEBKKD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PFNDDJDCJCB; // 0x18
		::System::UInt32 DNBBMAEJAKJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::ICOCIJEBKKD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ICOCIJEBKKD*>**)UnitySDK::FromName("", "ICOCIJEBKKD")->GetStaticField(0x30160);
		}

		// static const ::System::Object COLHHKAFIAM; // 0x0
		// static const ::System::Object MOJMMFMFHGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOCIJEBKKD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICOCIJEBKKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICOCIJEBKKD*))((::PBYTE)hIl2Cpp + ICOCIJEBKKD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICOCIJEBKKD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ICOCIJEBKKD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ICOCIJEBKKD*>*(*)())((::PBYTE)hIl2Cpp + ICOCIJEBKKD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOCIJEBKKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ICOCIJEBKKD* Clone()
		{
			return ((::ICOCIJEBKKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOCIJEBKKD_CLONE_OFFSET))(this);
		}

		::System::UInt32 EGIONFKGDAJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOCIJEBKKD_EGIONFKGDAJ_OFFSET))(this);
		}

		::System::Void PJMAABCFOJL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICOCIJEBKKD_PJMAABCFOJL_OFFSET))(this, a1);
		}

		::System::UInt32 CFEMPMFEMIP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOCIJEBKKD_CFEMPMFEMIP_OFFSET))(this);
		}

		::System::Void BJPILAACJMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICOCIJEBKKD_BJPILAACJMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICOCIJEBKKD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ICOCIJEBKKD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICOCIJEBKKD*))((::PBYTE)hIl2Cpp + ICOCIJEBKKD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOCIJEBKKD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOCIJEBKKD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ICOCIJEBKKD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOCIJEBKKD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ICOCIJEBKKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICOCIJEBKKD*))((::PBYTE)hIl2Cpp + ICOCIJEBKKD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ICOCIJEBKKD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
