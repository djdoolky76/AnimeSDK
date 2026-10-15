#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPGCHDECCNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IPGCHDECCNB_BEIKPPGFJED_OFFSET UNITYSDK_OFFSET(0x1E6DFAD0)
#define IPGCHDECCNB_BFJONDIONJA_OFFSET UNITYSDK_OFFSET(0x1E6DFAE0)
#define IPGCHDECCNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6DFE20)
#define IPGCHDECCNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6E01A0)
#define IPGCHDECCNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6DFA30)
#define IPGCHDECCNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6DF9F0)
#define IPGCHDECCNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DF9E0)
#define IPGCHDECCNB_EEEEOHNIBPJ_OFFSET UNITYSDK_OFFSET(0x1E6DFB00)
#define IPGCHDECCNB_ELJCFPPJHLN_OFFSET UNITYSDK_OFFSET(0x1E6DFAF0)
#define IPGCHDECCNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6DFB90)
#define IPGCHDECCNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6DFB10)
#define IPGCHDECCNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6DFC60)
#define IPGCHDECCNB_IIALFJFKJLL_OFFSET UNITYSDK_OFFSET(0x1E6DFAC0)
#define IPGCHDECCNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6DF970)
#define IPGCHDECCNB_KAPACICPONO_OFFSET UNITYSDK_OFFSET(0x1E6DFAB0)
#define IPGCHDECCNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6E0000)
#define IPGCHDECCNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6DFFB0)
#define IPGCHDECCNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6DF9D0)
#define IPGCHDECCNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6DFC90)
#define IPGCHDECCNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6DFCF0)

	class IPGCHDECCNB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MKCOODIJBGN; // 0x18
		::System::UInt32 CECNGGFFPKC; // 0x1C
		::System::UInt32 PCPCMIGFDJH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IPGCHDECCNB")->GetStaticField(0x5AE90);
		}

		// static const ::System::Object ICAICNAIECI; // 0x0
		// static const ::System::Object BEEEPPNHENN; // 0x0
		// static const ::System::Object FAJMECLHMAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGCHDECCNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IPGCHDECCNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPGCHDECCNB*))((::PBYTE)hIl2Cpp + IPGCHDECCNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPGCHDECCNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IPGCHDECCNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGCHDECCNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IPGCHDECCNB* Clone()
		{
			return ((::IPGCHDECCNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGCHDECCNB_CLONE_OFFSET))(this);
		}

		::System::UInt32 KAPACICPONO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGCHDECCNB_KAPACICPONO_OFFSET))(this);
		}

		::System::Void IIALFJFKJLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPGCHDECCNB_IIALFJFKJLL_OFFSET))(this, a1);
		}

		::System::UInt32 BEIKPPGFJED()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGCHDECCNB_BEIKPPGFJED_OFFSET))(this);
		}

		::System::Void BFJONDIONJA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPGCHDECCNB_BFJONDIONJA_OFFSET))(this, a1);
		}

		::System::UInt32 ELJCFPPJHLN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGCHDECCNB_ELJCFPPJHLN_OFFSET))(this);
		}

		::System::Void EEEEOHNIBPJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPGCHDECCNB_EEEEOHNIBPJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IPGCHDECCNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IPGCHDECCNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPGCHDECCNB*))((::PBYTE)hIl2Cpp + IPGCHDECCNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGCHDECCNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGCHDECCNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IPGCHDECCNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGCHDECCNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IPGCHDECCNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPGCHDECCNB*))((::PBYTE)hIl2Cpp + IPGCHDECCNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IPGCHDECCNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
