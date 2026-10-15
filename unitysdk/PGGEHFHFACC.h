#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIKGMGBHLEN;
class PGGEHFHFACC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PGGEHFHFACC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF2F3C0)
#define PGGEHFHFACC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2F7E0)
#define PGGEHFHFACC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF2ED90)
#define PGGEHFHFACC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF2ECF0)
#define PGGEHFHFACC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2ECE0)
#define PGGEHFHFACC_ENEIEIPBBPN_OFFSET UNITYSDK_OFFSET(0x1DF2EE70)
#define PGGEHFHFACC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF2F030)
#define PGGEHFHFACC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF2EEA0)
#define PGGEHFHFACC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF2EE90)
#define PGGEHFHFACC_FFFDGCMLLAI_OFFSET UNITYSDK_OFFSET(0x1DF2EE60)
#define PGGEHFHFACC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF2F1C0)
#define PGGEHFHFACC_HFBALHOKMHF_OFFSET UNITYSDK_OFFSET(0x1DF2EE40)
#define PGGEHFHFACC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF2ECA0)
#define PGGEHFHFACC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF2F610)
#define PGGEHFHFACC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF2F570)
#define PGGEHFHFACC_NIDHMABFJIE_OFFSET UNITYSDK_OFFSET(0x1DF2EE50)
#define PGGEHFHFACC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF2EE80)
#define PGGEHFHFACC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF2ECD0)
#define PGGEHFHFACC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF2F220)
#define PGGEHFHFACC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF2F280)

inline static constexpr unsigned int PGGEHFHFACC_TypeDefinitionIndex = 34205;

	class PGGEHFHFACC : public ::System::Object
	{
	public:
		::MIKGMGBHLEN* FPEKDDOODLK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::Byte _padding0[0x4];
		::System::Int64 MFHNPAODGGN; // 0x28
		static ::Google::Protobuf::MessageParser_1<::PGGEHFHFACC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PGGEHFHFACC*>**)UnitySDK::FromName("", "PGGEHFHFACC")->GetStaticField(0x3D580);
		}

		// static const ::System::Object KIEJLJIMANA; // 0x0
		// static const ::System::Object FIEMKPOELCD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGEHFHFACC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PGGEHFHFACC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGGEHFHFACC*))((::PBYTE)hIl2Cpp + PGGEHFHFACC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGGEHFHFACC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PGGEHFHFACC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PGGEHFHFACC*>*(*)())((::PBYTE)hIl2Cpp + PGGEHFHFACC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGEHFHFACC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PGGEHFHFACC* Clone()
		{
			return ((::PGGEHFHFACC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGEHFHFACC_CLONE_OFFSET))(this);
		}

		::MIKGMGBHLEN* HFBALHOKMHF()
		{
			return ((::MIKGMGBHLEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGEHFHFACC_HFBALHOKMHF_OFFSET))(this);
		}

		::System::Void NIDHMABFJIE(::MIKGMGBHLEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIKGMGBHLEN*))((::PBYTE)hIl2Cpp + PGGEHFHFACC_NIDHMABFJIE_OFFSET))(this, a1);
		}

		::System::Int64 FFFDGCMLLAI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGEHFHFACC_FFFDGCMLLAI_OFFSET))(this);
		}

		::System::Void ENEIEIPBBPN(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PGGEHFHFACC_ENEIEIPBBPN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGEHFHFACC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGGEHFHFACC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGGEHFHFACC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PGGEHFHFACC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PGGEHFHFACC*))((::PBYTE)hIl2Cpp + PGGEHFHFACC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGEHFHFACC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGEHFHFACC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PGGEHFHFACC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGEHFHFACC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PGGEHFHFACC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGGEHFHFACC*))((::PBYTE)hIl2Cpp + PGGEHFHFACC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PGGEHFHFACC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
