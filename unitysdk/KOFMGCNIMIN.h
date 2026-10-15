#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOFMGCNIMIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOFMGCNIMIN_ABLLACJACMC_OFFSET UNITYSDK_OFFSET(0x1E882E50)
#define KOFMGCNIMIN_AGFMEMAFGLD_OFFSET UNITYSDK_OFFSET(0x1E882E30)
#define KOFMGCNIMIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8831D0)
#define KOFMGCNIMIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E883560)
#define KOFMGCNIMIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E882DB0)
#define KOFMGCNIMIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E882D70)
#define KOFMGCNIMIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E882D60)
#define KOFMGCNIMIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E882F40)
#define KOFMGCNIMIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E882E60)
#define KOFMGCNIMIN_FEMNPLHAHKC_OFFSET UNITYSDK_OFFSET(0x1E882E40)
#define KOFMGCNIMIN_FOAFNPGDLLK_OFFSET UNITYSDK_OFFSET(0x1E882E10)
#define KOFMGCNIMIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E883010)
#define KOFMGCNIMIN_HKBEDBLOGNG_OFFSET UNITYSDK_OFFSET(0x1E882E20)
#define KOFMGCNIMIN_JFNJCIIHEFA_OFFSET UNITYSDK_OFFSET(0x1E882E00)
#define KOFMGCNIMIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E882D20)
#define KOFMGCNIMIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8833B0)
#define KOFMGCNIMIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E883360)
#define KOFMGCNIMIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E882D50)
#define KOFMGCNIMIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E883040)
#define KOFMGCNIMIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8830A0)

inline static constexpr unsigned int KOFMGCNIMIN_TypeDefinitionIndex = 32856;

	class KOFMGCNIMIN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GNKLGGAGGGB; // 0x18
		::System::UInt32 FJBLKPNOKAF; // 0x1C
		::System::UInt32 MFHBBHFIIBO; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KOFMGCNIMIN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KOFMGCNIMIN*>**)UnitySDK::FromName("", "KOFMGCNIMIN")->GetStaticField(0x21410);
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

		static ::Google::Protobuf::MessageParser_1<::KOFMGCNIMIN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KOFMGCNIMIN*>*(*)())((::PBYTE)hIl2Cpp + KOFMGCNIMIN_JJGHOBBFNJD_OFFSET))();
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
