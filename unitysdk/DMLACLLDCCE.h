#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMLACLLDCCE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DMLACLLDCCE_BIHJIKEHFOG_OFFSET UNITYSDK_OFFSET(0x1E1F1020)
#define DMLACLLDCCE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1F1400)
#define DMLACLLDCCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F1730)
#define DMLACLLDCCE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1F0F50)
#define DMLACLLDCCE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1F0F20)
#define DMLACLLDCCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F0F10)
#define DMLACLLDCCE_DOKEGCCBNDP_OFFSET UNITYSDK_OFFSET(0x1E1F1010)
#define DMLACLLDCCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1F10D0)
#define DMLACLLDCCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1F1040)
#define DMLACLLDCCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1F11B0)
#define DMLACLLDCCE_HMOCJLCJNNK_OFFSET UNITYSDK_OFFSET(0x1E1F1000)
#define DMLACLLDCCE_HOJMIDMPGEJ_OFFSET UNITYSDK_OFFSET(0x1E1F0FC0)
#define DMLACLLDCCE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1F0EA0)
#define DMLACLLDCCE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1F1690)
#define DMLACLLDCCE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1F1640)
#define DMLACLLDCCE_MJBPNFKDBMF_OFFSET UNITYSDK_OFFSET(0x1E1F0FD0)
#define DMLACLLDCCE_MLCIHCHNCAN_OFFSET UNITYSDK_OFFSET(0x1E1F0FF0)
#define DMLACLLDCCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1F0F00)
#define DMLACLLDCCE_PEOLJJMCHHA_OFFSET UNITYSDK_OFFSET(0x1E1F1030)
#define DMLACLLDCCE_PFMDBMIBAGE_OFFSET UNITYSDK_OFFSET(0x1E1F0FE0)
#define DMLACLLDCCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1F11F0)
#define DMLACLLDCCE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1F1250)

inline static constexpr unsigned int DMLACLLDCCE_TypeDefinitionIndex = 29868;

	class DMLACLLDCCE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 OKCGLFPFDEM; // 0x18
		::System::UInt32 BPFDPBKDAMK; // 0x1C
		::System::UInt32 IIKBFBEOMLN; // 0x20
		::System::UInt32 JHJNBOHPJND; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DMLACLLDCCE")->GetStaticField(0x3F510);
		}

		// static const ::System::Object MGBDGGHMGBC; // 0x0
		// static const ::System::Object MGCFOIACPBO; // 0x0
		// static const ::System::Object ODPPKDFGENB; // 0x0
		// static const ::System::Object EPFPPKBEBJN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLACLLDCCE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DMLACLLDCCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMLACLLDCCE*))((::PBYTE)hIl2Cpp + DMLACLLDCCE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMLACLLDCCE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DMLACLLDCCE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLACLLDCCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DMLACLLDCCE* Clone()
		{
			return ((::DMLACLLDCCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLACLLDCCE_CLONE_OFFSET))(this);
		}

		::System::UInt32 HOJMIDMPGEJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLACLLDCCE_HOJMIDMPGEJ_OFFSET))(this);
		}

		::System::Void MJBPNFKDBMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMLACLLDCCE_MJBPNFKDBMF_OFFSET))(this, a1);
		}

		::System::UInt32 PFMDBMIBAGE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLACLLDCCE_PFMDBMIBAGE_OFFSET))(this);
		}

		::System::Void MLCIHCHNCAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMLACLLDCCE_MLCIHCHNCAN_OFFSET))(this, a1);
		}

		::System::Int32 HMOCJLCJNNK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLACLLDCCE_HMOCJLCJNNK_OFFSET))(this);
		}

		::System::Void DOKEGCCBNDP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMLACLLDCCE_DOKEGCCBNDP_OFFSET))(this, a1);
		}

		::System::UInt32 BIHJIKEHFOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLACLLDCCE_BIHJIKEHFOG_OFFSET))(this);
		}

		::System::Void PEOLJJMCHHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMLACLLDCCE_PEOLJJMCHHA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMLACLLDCCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMLACLLDCCE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMLACLLDCCE*))((::PBYTE)hIl2Cpp + DMLACLLDCCE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLACLLDCCE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLACLLDCCE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DMLACLLDCCE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLACLLDCCE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DMLACLLDCCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMLACLLDCCE*))((::PBYTE)hIl2Cpp + DMLACLLDCCE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DMLACLLDCCE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
