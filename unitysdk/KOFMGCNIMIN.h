#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOFMGCNIMIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOFMGCNIMIN_ABLLACJACMC_OFFSET UNITYSDK_OFFSET(0x1E8B0410)
#define KOFMGCNIMIN_AGFMEMAFGLD_OFFSET UNITYSDK_OFFSET(0x1E8B03F0)
#define KOFMGCNIMIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8B0790)
#define KOFMGCNIMIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B0B20)
#define KOFMGCNIMIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8B0370)
#define KOFMGCNIMIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8B0330)
#define KOFMGCNIMIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B0320)
#define KOFMGCNIMIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8B0500)
#define KOFMGCNIMIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8B0420)
#define KOFMGCNIMIN_FEMNPLHAHKC_OFFSET UNITYSDK_OFFSET(0x1E8B0400)
#define KOFMGCNIMIN_FOAFNPGDLLK_OFFSET UNITYSDK_OFFSET(0x1E8B03D0)
#define KOFMGCNIMIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8B05D0)
#define KOFMGCNIMIN_HKBEDBLOGNG_OFFSET UNITYSDK_OFFSET(0x1E8B03E0)
#define KOFMGCNIMIN_JFNJCIIHEFA_OFFSET UNITYSDK_OFFSET(0x1E8B03C0)
#define KOFMGCNIMIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8B02E0)
#define KOFMGCNIMIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8B0970)
#define KOFMGCNIMIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8B0920)
#define KOFMGCNIMIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8B0310)
#define KOFMGCNIMIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8B0600)
#define KOFMGCNIMIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8B0660)

inline static constexpr unsigned int KOFMGCNIMIN_TypeDefinitionIndex = 32856;

	class KOFMGCNIMIN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GNKLGGAGGGB; // 0x18
		::System::UInt32 FJBLKPNOKAF; // 0x1C
		::System::UInt32 MFHBBHFIIBO; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KOFMGCNIMIN")->GetStaticField(0x24E30);
		}

		// static const ::System::Object PFPJMEJFKFH; // 0x0
		// static const ::System::Object AMHDJJHLOKD; // 0x0
		// static const ::System::Object ABELECPLDAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KOFMGCNIMIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOFMGCNIMIN*))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOFMGCNIMIN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KOFMGCNIMIN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KOFMGCNIMIN* Clone()
		{
			return ((::KOFMGCNIMIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_CLONE_OFFSET))(this);
		}

		::System::UInt32 JFNJCIIHEFA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_JFNJCIIHEFA_OFFSET))(this);
		}

		::System::Void FOAFNPGDLLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_FOAFNPGDLLK_OFFSET))(this, a1);
		}

		::System::UInt32 HKBEDBLOGNG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_HKBEDBLOGNG_OFFSET))(this);
		}

		::System::Void AGFMEMAFGLD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_AGFMEMAFGLD_OFFSET))(this, a1);
		}

		::System::UInt32 FEMNPLHAHKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_FEMNPLHAHKC_OFFSET))(this);
		}

		::System::Void ABLLACJACMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_ABLLACJACMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KOFMGCNIMIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOFMGCNIMIN*))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KOFMGCNIMIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOFMGCNIMIN*))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KOFMGCNIMIN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
