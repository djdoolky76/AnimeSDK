#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKFFMLJMGOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LKFFMLJMGOB_BIHJIKEHFOG_OFFSET UNITYSDK_OFFSET(0x1E98E560)
#define LKFFMLJMGOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E98E8B0)
#define LKFFMLJMGOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98EC50)
#define LKFFMLJMGOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E98E4A0)
#define LKFFMLJMGOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E98E460)
#define LKFFMLJMGOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98E450)
#define LKFFMLJMGOB_DOKEGCCBNDP_OFFSET UNITYSDK_OFFSET(0x1E98E550)
#define LKFFMLJMGOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E98E600)
#define LKFFMLJMGOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E98E580)
#define LKFFMLJMGOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E98E6D0)
#define LKFFMLJMGOB_HMOCJLCJNNK_OFFSET UNITYSDK_OFFSET(0x1E98E540)
#define LKFFMLJMGOB_HOJMIDMPGEJ_OFFSET UNITYSDK_OFFSET(0x1E98E520)
#define LKFFMLJMGOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E98E3E0)
#define LKFFMLJMGOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E98EAA0)
#define LKFFMLJMGOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E98EA50)
#define LKFFMLJMGOB_MJBPNFKDBMF_OFFSET UNITYSDK_OFFSET(0x1E98E530)
#define LKFFMLJMGOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E98E440)
#define LKFFMLJMGOB_PEOLJJMCHHA_OFFSET UNITYSDK_OFFSET(0x1E98E570)
#define LKFFMLJMGOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E98E700)
#define LKFFMLJMGOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E98E760)

inline static constexpr unsigned int LKFFMLJMGOB_TypeDefinitionIndex = 29870;

	class LKFFMLJMGOB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BPFDPBKDAMK; // 0x18
		::System::UInt32 IIKBFBEOMLN; // 0x1C
		::System::Int32 OKCGLFPFDEM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LKFFMLJMGOB")->GetStaticField(0x4A6A0);
		}

		// static const ::System::Object MGBDGGHMGBC; // 0x0
		// static const ::System::Object ODPPKDFGENB; // 0x0
		// static const ::System::Object EPFPPKBEBJN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LKFFMLJMGOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKFFMLJMGOB*))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKFFMLJMGOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LKFFMLJMGOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LKFFMLJMGOB* Clone()
		{
			return ((::LKFFMLJMGOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_CLONE_OFFSET))(this);
		}

		::System::UInt32 HOJMIDMPGEJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_HOJMIDMPGEJ_OFFSET))(this);
		}

		::System::Void MJBPNFKDBMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_MJBPNFKDBMF_OFFSET))(this, a1);
		}

		::System::Int32 HMOCJLCJNNK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_HMOCJLCJNNK_OFFSET))(this);
		}

		::System::Void DOKEGCCBNDP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_DOKEGCCBNDP_OFFSET))(this, a1);
		}

		::System::UInt32 BIHJIKEHFOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_BIHJIKEHFOG_OFFSET))(this);
		}

		::System::Void PEOLJJMCHHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_PEOLJJMCHHA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LKFFMLJMGOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LKFFMLJMGOB*))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LKFFMLJMGOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKFFMLJMGOB*))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LKFFMLJMGOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
