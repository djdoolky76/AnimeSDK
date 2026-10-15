#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPIEHAMDJAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPIEHAMDJAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5F8160)
#define HPIEHAMDJAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F8430)
#define HPIEHAMDJAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5F7DB0)
#define HPIEHAMDJAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5F7D80)
#define HPIEHAMDJAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F7D70)
#define HPIEHAMDJAP_DFDIBJFKEKO_OFFSET UNITYSDK_OFFSET(0x1E5F7E30)
#define HPIEHAMDJAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5F7F20)
#define HPIEHAMDJAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5F7E40)
#define HPIEHAMDJAP_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E5F7E00)
#define HPIEHAMDJAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5F7FF0)
#define HPIEHAMDJAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5F7D30)
#define HPIEHAMDJAP_JKCKJHAJMAD_OFFSET UNITYSDK_OFFSET(0x1E5F7E20)
#define HPIEHAMDJAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5F82B0)
#define HPIEHAMDJAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5F8270)
#define HPIEHAMDJAP_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E5F7E10)
#define HPIEHAMDJAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5F7D60)
#define HPIEHAMDJAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5F8020)
#define HPIEHAMDJAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5F8080)

	class HPIEHAMDJAP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GMNDCJLDDCN; // 0x18
		::System::UInt32 OPPNMFMNMGC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HPIEHAMDJAP")->GetStaticField(0x3DDE0);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object HMJCIGPMHFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPIEHAMDJAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPIEHAMDJAP*))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPIEHAMDJAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HPIEHAMDJAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPIEHAMDJAP* Clone()
		{
			return ((::HPIEHAMDJAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::UInt32 JKCKJHAJMAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_JKCKJHAJMAD_OFFSET))(this);
		}

		::System::Void DFDIBJFKEKO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_DFDIBJFKEKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPIEHAMDJAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPIEHAMDJAP*))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPIEHAMDJAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPIEHAMDJAP*))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPIEHAMDJAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
