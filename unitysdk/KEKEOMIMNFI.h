#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIEEKOEECHB;
class KEKEOMIMNFI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KEKEOMIMNFI_BFLBEIIBIKN_OFFSET UNITYSDK_OFFSET(0x1E80C7E0)
#define KEKEOMIMNFI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E80CCB0)
#define KEKEOMIMNFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80CFA0)
#define KEKEOMIMNFI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E80C760)
#define KEKEOMIMNFI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E80C6F0)
#define KEKEOMIMNFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80C6E0)
#define KEKEOMIMNFI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E80C9A0)
#define KEKEOMIMNFI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E80C820)
#define KEKEOMIMNFI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E80C810)
#define KEKEOMIMNFI_FLJOBDNCFEP_OFFSET UNITYSDK_OFFSET(0x1E80C7F0)
#define KEKEOMIMNFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E80CB20)
#define KEKEOMIMNFI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E80C6A0)
#define KEKEOMIMNFI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E80CE00)
#define KEKEOMIMNFI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E80CD80)
#define KEKEOMIMNFI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E80C800)
#define KEKEOMIMNFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E80C6D0)
#define KEKEOMIMNFI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E80CB70)
#define KEKEOMIMNFI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E80CBD0)

inline static constexpr unsigned int KEKEOMIMNFI_TypeDefinitionIndex = 26705;

	class KEKEOMIMNFI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CIEEKOEECHB* ILEOLMKCJMB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KEKEOMIMNFI")->GetStaticField(0x12A10);
		}

		// static const ::System::Object IBBLPNOMPNG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKEOMIMNFI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KEKEOMIMNFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEKEOMIMNFI*))((::PBYTE)hIl2Cpp + KEKEOMIMNFI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEKEOMIMNFI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KEKEOMIMNFI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKEOMIMNFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KEKEOMIMNFI* Clone()
		{
			return ((::KEKEOMIMNFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKEOMIMNFI_CLONE_OFFSET))(this);
		}

		::CIEEKOEECHB* BFLBEIIBIKN()
		{
			return ((::CIEEKOEECHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKEOMIMNFI_BFLBEIIBIKN_OFFSET))(this);
		}

		::System::Void FLJOBDNCFEP(::CIEEKOEECHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIEEKOEECHB*))((::PBYTE)hIl2Cpp + KEKEOMIMNFI_FLJOBDNCFEP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKEOMIMNFI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KEKEOMIMNFI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KEKEOMIMNFI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KEKEOMIMNFI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KEKEOMIMNFI*))((::PBYTE)hIl2Cpp + KEKEOMIMNFI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKEOMIMNFI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKEOMIMNFI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KEKEOMIMNFI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKEOMIMNFI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KEKEOMIMNFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEKEOMIMNFI*))((::PBYTE)hIl2Cpp + KEKEOMIMNFI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KEKEOMIMNFI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
