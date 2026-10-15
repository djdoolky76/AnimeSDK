#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGNAHHFBMMN;
class OMPGJHBEJAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMPGJHBEJAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEBEBC0)
#define OMPGJHBEJAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEBEF60)
#define OMPGJHBEJAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEBE570)
#define OMPGJHBEJAB_COLFKPNJIGF_OFFSET UNITYSDK_OFFSET(0x1DEBE630)
#define OMPGJHBEJAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEBE4E0)
#define OMPGJHBEJAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBE4D0)
#define OMPGJHBEJAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEBE810)
#define OMPGJHBEJAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEBE670)
#define OMPGJHBEJAB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEBE660)
#define OMPGJHBEJAB_FEFDOPAECMD_OFFSET UNITYSDK_OFFSET(0x1DEBE640)
#define OMPGJHBEJAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEBE9B0)
#define OMPGJHBEJAB_JCCGLGLOPMO_OFFSET UNITYSDK_OFFSET(0x1DEBE610)
#define OMPGJHBEJAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEBE490)
#define OMPGJHBEJAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEBED60)
#define OMPGJHBEJAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEBEC90)
#define OMPGJHBEJAB_MOPJGCNPGBO_OFFSET UNITYSDK_OFFSET(0x1DEBE620)
#define OMPGJHBEJAB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEBE650)
#define OMPGJHBEJAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEBE4C0)
#define OMPGJHBEJAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEBE9F0)
#define OMPGJHBEJAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEBEA50)

	class OMPGJHBEJAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HGNAHHFBMMN* HCDNDOJHBFG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::Boolean MHOGFFCMBII; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OMPGJHBEJAB")->GetStaticField(0x2BAC0);
		}

		// static const ::System::Object GHEBLALOOAB; // 0x0
		// static const ::System::Object CBBCFDAIOJI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMPGJHBEJAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMPGJHBEJAB*))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMPGJHBEJAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OMPGJHBEJAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMPGJHBEJAB* Clone()
		{
			return ((::OMPGJHBEJAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_CLONE_OFFSET))(this);
		}

		::System::Boolean JCCGLGLOPMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_JCCGLGLOPMO_OFFSET))(this);
		}

		::System::Void MOPJGCNPGBO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_MOPJGCNPGBO_OFFSET))(this, a1);
		}

		::HGNAHHFBMMN* COLFKPNJIGF()
		{
			return ((::HGNAHHFBMMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_COLFKPNJIGF_OFFSET))(this);
		}

		::System::Void FEFDOPAECMD(::HGNAHHFBMMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGNAHHFBMMN*))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_FEFDOPAECMD_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMPGJHBEJAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMPGJHBEJAB*))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMPGJHBEJAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMPGJHBEJAB*))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMPGJHBEJAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
