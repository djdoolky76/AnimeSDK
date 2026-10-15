#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHLPFGCOJBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EHLPFGCOJBN_ALIDAFMCJGG_OFFSET UNITYSDK_OFFSET(0x1E2A15A0)
#define EHLPFGCOJBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A1900)
#define EHLPFGCOJBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A1B20)
#define EHLPFGCOJBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A1550)
#define EHLPFGCOJBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A1520)
#define EHLPFGCOJBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A1510)
#define EHLPFGCOJBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A1680)
#define EHLPFGCOJBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A15B0)
#define EHLPFGCOJBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A17F0)
#define EHLPFGCOJBN_GGIPNHGMPCN_OFFSET UNITYSDK_OFFSET(0x1E2A1590)
#define EHLPFGCOJBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A14D0)
#define EHLPFGCOJBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A19C0)
#define EHLPFGCOJBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A1990)
#define EHLPFGCOJBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A1500)
#define EHLPFGCOJBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A1820)
#define EHLPFGCOJBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A1880)

inline static constexpr unsigned int EHLPFGCOJBN_TypeDefinitionIndex = 33746;

	class EHLPFGCOJBN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MDHELICKNPE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EHLPFGCOJBN")->GetStaticField(0x48870);
		}

		// static const ::System::Object HLKDEGJOKIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLPFGCOJBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EHLPFGCOJBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHLPFGCOJBN*))((::PBYTE)hIl2Cpp + EHLPFGCOJBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHLPFGCOJBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EHLPFGCOJBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLPFGCOJBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EHLPFGCOJBN* Clone()
		{
			return ((::EHLPFGCOJBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLPFGCOJBN_CLONE_OFFSET))(this);
		}

		::System::UInt32 GGIPNHGMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLPFGCOJBN_GGIPNHGMPCN_OFFSET))(this);
		}

		::System::Void ALIDAFMCJGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EHLPFGCOJBN_ALIDAFMCJGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHLPFGCOJBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EHLPFGCOJBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHLPFGCOJBN*))((::PBYTE)hIl2Cpp + EHLPFGCOJBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLPFGCOJBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLPFGCOJBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EHLPFGCOJBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLPFGCOJBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EHLPFGCOJBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHLPFGCOJBN*))((::PBYTE)hIl2Cpp + EHLPFGCOJBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EHLPFGCOJBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
