#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANOEGCFDJKD;
class HGABLJFOKDG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANOEGCFDJKD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x201A3E80)
#define ANOEGCFDJKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x201A4100)
#define ANOEGCFDJKD_CLONE_OFFSET UNITYSDK_OFFSET(0x201A3840)
#define ANOEGCFDJKD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x201A37F0)
#define ANOEGCFDJKD_CTOR_OFFSET UNITYSDK_OFFSET(0x201A37E0)
#define ANOEGCFDJKD_DJMOOLAIGEO_OFFSET UNITYSDK_OFFSET(0x201A38A0)
#define ANOEGCFDJKD_EKMNONOLBPG_OFFSET UNITYSDK_OFFSET(0x201A38B0)
#define ANOEGCFDJKD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201A3A30)
#define ANOEGCFDJKD_EQUALS_OFFSET UNITYSDK_OFFSET(0x201A38C0)
#define ANOEGCFDJKD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x201A3D00)
#define ANOEGCFDJKD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x201A37A0)
#define ANOEGCFDJKD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x201A3F70)
#define ANOEGCFDJKD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x201A3EE0)
#define ANOEGCFDJKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201A37D0)
#define ANOEGCFDJKD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x201A3D90)
#define ANOEGCFDJKD_WRITETO_OFFSET UNITYSDK_OFFSET(0x201A3DF0)

inline static constexpr unsigned int ANOEGCFDJKD_TypeDefinitionIndex = 33444;

	class ANOEGCFDJKD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HGABLJFOKDG* PNPIJDDLCFJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ANOEGCFDJKD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ANOEGCFDJKD*>**)UnitySDK::FromName("", "ANOEGCFDJKD")->GetStaticField(0x3C6E0);
		}

		// static const ::System::Object HPADICLJPCP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOEGCFDJKD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANOEGCFDJKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANOEGCFDJKD*))((::PBYTE)hIl2Cpp + ANOEGCFDJKD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANOEGCFDJKD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ANOEGCFDJKD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ANOEGCFDJKD*>*(*)())((::PBYTE)hIl2Cpp + ANOEGCFDJKD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOEGCFDJKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANOEGCFDJKD* Clone()
		{
			return ((::ANOEGCFDJKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOEGCFDJKD_CLONE_OFFSET))(this);
		}

		::HGABLJFOKDG* DJMOOLAIGEO()
		{
			return ((::HGABLJFOKDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOEGCFDJKD_DJMOOLAIGEO_OFFSET))(this);
		}

		::System::Void EKMNONOLBPG(::HGABLJFOKDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGABLJFOKDG*))((::PBYTE)hIl2Cpp + ANOEGCFDJKD_EKMNONOLBPG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANOEGCFDJKD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANOEGCFDJKD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANOEGCFDJKD*))((::PBYTE)hIl2Cpp + ANOEGCFDJKD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOEGCFDJKD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOEGCFDJKD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANOEGCFDJKD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOEGCFDJKD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANOEGCFDJKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANOEGCFDJKD*))((::PBYTE)hIl2Cpp + ANOEGCFDJKD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANOEGCFDJKD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
