#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBNMKLMOILM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBNMKLMOILM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAD5480)
#define NBNMKLMOILM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD5750)
#define NBNMKLMOILM_CIIHBKJNIDI_OFFSET UNITYSDK_OFFSET(0x1EAD5140)
#define NBNMKLMOILM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAD50D0)
#define NBNMKLMOILM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAD50A0)
#define NBNMKLMOILM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD5090)
#define NBNMKLMOILM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAD5240)
#define NBNMKLMOILM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAD5160)
#define NBNMKLMOILM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAD5130)
#define NBNMKLMOILM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAD5310)
#define NBNMKLMOILM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAD5050)
#define NBNMKLMOILM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAD55D0)
#define NBNMKLMOILM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAD5590)
#define NBNMKLMOILM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAD5120)
#define NBNMKLMOILM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAD5080)
#define NBNMKLMOILM_PHFIFGGOCGE_OFFSET UNITYSDK_OFFSET(0x1EAD5150)
#define NBNMKLMOILM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAD5340)
#define NBNMKLMOILM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAD53A0)

inline static constexpr unsigned int NBNMKLMOILM_TypeDefinitionIndex = 27707;

	class NBNMKLMOILM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 DNIPIFDDAAE; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NBNMKLMOILM")->GetStaticField(0x5CFF0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NFMNBHFFLHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNMKLMOILM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBNMKLMOILM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBNMKLMOILM*))((::PBYTE)hIl2Cpp + NBNMKLMOILM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBNMKLMOILM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NBNMKLMOILM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNMKLMOILM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBNMKLMOILM* Clone()
		{
			return ((::NBNMKLMOILM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNMKLMOILM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNMKLMOILM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBNMKLMOILM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 CIIHBKJNIDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNMKLMOILM_CIIHBKJNIDI_OFFSET))(this);
		}

		::System::Void PHFIFGGOCGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBNMKLMOILM_PHFIFGGOCGE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBNMKLMOILM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBNMKLMOILM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBNMKLMOILM*))((::PBYTE)hIl2Cpp + NBNMKLMOILM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNMKLMOILM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNMKLMOILM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBNMKLMOILM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNMKLMOILM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBNMKLMOILM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBNMKLMOILM*))((::PBYTE)hIl2Cpp + NBNMKLMOILM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBNMKLMOILM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
