#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLDIHADJKJF;
class NCFKHDIKCNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BLDIHADJKJF_BAHNOLHGCAC_OFFSET UNITYSDK_OFFSET(0x1DF5D380)
#define BLDIHADJKJF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF5D930)
#define BLDIHADJKJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF5DD00)
#define BLDIHADJKJF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF5D290)
#define BLDIHADJKJF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF5D210)
#define BLDIHADJKJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5D200)
#define BLDIHADJKJF_DOKGDPEPGBM_OFFSET UNITYSDK_OFFSET(0x1DF5D360)
#define BLDIHADJKJF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF5D540)
#define BLDIHADJKJF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF5D390)
#define BLDIHADJKJF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF5D6C0)
#define BLDIHADJKJF_GNBLPHNBPGA_OFFSET UNITYSDK_OFFSET(0x1DF5D370)
#define BLDIHADJKJF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF5D190)
#define BLDIHADJKJF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF5DB10)
#define BLDIHADJKJF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF5DA00)
#define BLDIHADJKJF_OCKODBAMFPL_OFFSET UNITYSDK_OFFSET(0x1DF5D350)
#define BLDIHADJKJF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF5D1F0)
#define BLDIHADJKJF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF5D7F0)
#define BLDIHADJKJF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF5D850)

inline static constexpr unsigned int BLDIHADJKJF_TypeDefinitionIndex = 31771;

	class BLDIHADJKJF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NCFKHDIKCNI* INKIPGKALCA; // 0x18
		::System::UInt32 GJPBFGGIPGC; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BLDIHADJKJF")->GetStaticField(0x4C350);
		}

		// static const ::System::Object PMNOGKAJLKJ; // 0x0
		// static const ::System::Object ICFMEJCOFGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDIHADJKJF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BLDIHADJKJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLDIHADJKJF*))((::PBYTE)hIl2Cpp + BLDIHADJKJF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLDIHADJKJF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BLDIHADJKJF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDIHADJKJF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BLDIHADJKJF* Clone()
		{
			return ((::BLDIHADJKJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDIHADJKJF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OCKODBAMFPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDIHADJKJF_OCKODBAMFPL_OFFSET))(this);
		}

		::System::Void DOKGDPEPGBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLDIHADJKJF_DOKGDPEPGBM_OFFSET))(this, a1);
		}

		::NCFKHDIKCNI* GNBLPHNBPGA()
		{
			return ((::NCFKHDIKCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDIHADJKJF_GNBLPHNBPGA_OFFSET))(this);
		}

		::System::Void BAHNOLHGCAC(::NCFKHDIKCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + BLDIHADJKJF_BAHNOLHGCAC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLDIHADJKJF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BLDIHADJKJF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLDIHADJKJF*))((::PBYTE)hIl2Cpp + BLDIHADJKJF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDIHADJKJF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDIHADJKJF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BLDIHADJKJF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDIHADJKJF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BLDIHADJKJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLDIHADJKJF*))((::PBYTE)hIl2Cpp + BLDIHADJKJF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BLDIHADJKJF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
