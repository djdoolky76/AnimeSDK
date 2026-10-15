#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBBOJACNHEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBBOJACNHEC_BJNBLLGKIEB_OFFSET UNITYSDK_OFFSET(0x1E2320E0)
#define EBBOJACNHEC_BKIPJBKCIHF_OFFSET UNITYSDK_OFFSET(0x1E2320C0)
#define EBBOJACNHEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2324E0)
#define EBBOJACNHEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2327F0)
#define EBBOJACNHEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E232060)
#define EBBOJACNHEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E232020)
#define EBBOJACNHEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E232010)
#define EBBOJACNHEC_EMAAFBHHJBI_OFFSET UNITYSDK_OFFSET(0x1E2320D0)
#define EBBOJACNHEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E232200)
#define EBBOJACNHEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E232110)
#define EBBOJACNHEC_FDCBGKOLFLM_OFFSET UNITYSDK_OFFSET(0x1E2320F0)
#define EBBOJACNHEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2322E0)
#define EBBOJACNHEC_GLOKDJBCJAF_OFFSET UNITYSDK_OFFSET(0x1E232100)
#define EBBOJACNHEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E231FD0)
#define EBBOJACNHEC_KBNANHODEOL_OFFSET UNITYSDK_OFFSET(0x1E2320B0)
#define EBBOJACNHEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E232650)
#define EBBOJACNHEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E232600)
#define EBBOJACNHEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E232000)
#define EBBOJACNHEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E232310)
#define EBBOJACNHEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E232370)

inline static constexpr unsigned int EBBOJACNHEC_TypeDefinitionIndex = 33918;

	class EBBOJACNHEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HIJHFDEFGPP; // 0x18
		::System::UInt32 AOCFCLGNENH; // 0x1C
		::System::Boolean ABIIBKBGNHC; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EBBOJACNHEC")->GetStaticField(0x49F10);
		}

		// static const ::System::Object HEHLDGCDMPG; // 0x0
		// static const ::System::Object JOFLFBJMGKI; // 0x0
		// static const ::System::Object LEFFLEMFMAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBOJACNHEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBBOJACNHEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBBOJACNHEC*))((::PBYTE)hIl2Cpp + EBBOJACNHEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBBOJACNHEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EBBOJACNHEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBOJACNHEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBBOJACNHEC* Clone()
		{
			return ((::EBBOJACNHEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBOJACNHEC_CLONE_OFFSET))(this);
		}

		::System::Boolean KBNANHODEOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBOJACNHEC_KBNANHODEOL_OFFSET))(this);
		}

		::System::Void BKIPJBKCIHF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EBBOJACNHEC_BKIPJBKCIHF_OFFSET))(this, a1);
		}

		::System::UInt32 EMAAFBHHJBI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBOJACNHEC_EMAAFBHHJBI_OFFSET))(this);
		}

		::System::Void BJNBLLGKIEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBBOJACNHEC_BJNBLLGKIEB_OFFSET))(this, a1);
		}

		::System::UInt32 FDCBGKOLFLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBOJACNHEC_FDCBGKOLFLM_OFFSET))(this);
		}

		::System::Void GLOKDJBCJAF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBBOJACNHEC_GLOKDJBCJAF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBBOJACNHEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBBOJACNHEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBBOJACNHEC*))((::PBYTE)hIl2Cpp + EBBOJACNHEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBOJACNHEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBOJACNHEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBBOJACNHEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBOJACNHEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBBOJACNHEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBBOJACNHEC*))((::PBYTE)hIl2Cpp + EBBOJACNHEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBBOJACNHEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
