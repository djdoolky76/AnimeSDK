#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEILAINOLPO;
class GCBCKOKEAJH;
class MGIHGHJMFAE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGIHGHJMFAE_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1EA25DF0)
#define MGIHGHJMFAE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA26500)
#define MGIHGHJMFAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA268D0)
#define MGIHGHJMFAE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA25D10)
#define MGIHGHJMFAE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA25C40)
#define MGIHGHJMFAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA25C30)
#define MGIHGHJMFAE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA26080)
#define MGIHGHJMFAE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA25E50)
#define MGIHGHJMFAE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA25E20)
#define MGIHGHJMFAE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA262B0)
#define MGIHGHJMFAE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA25BF0)
#define MGIHGHJMFAE_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1EA25E00)
#define MGIHGHJMFAE_LIAOBOCBJEG_OFFSET UNITYSDK_OFFSET(0x1EA25E30)
#define MGIHGHJMFAE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA266F0)
#define MGIHGHJMFAE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA26610)
#define MGIHGHJMFAE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA25E10)
#define MGIHGHJMFAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA25C20)
#define MGIHGHJMFAE_PCHLPNFKCFH_OFFSET UNITYSDK_OFFSET(0x1EA25E40)
#define MGIHGHJMFAE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA26360)
#define MGIHGHJMFAE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA263C0)

inline static constexpr unsigned int MGIHGHJMFAE_TypeDefinitionIndex = 33501;

	class MGIHGHJMFAE : public ::System::Object
	{
	public:
		::GCBCKOKEAJH* DKCCHALJNAD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::EEILAINOLPO* NLIJNNMCAAO; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MGIHGHJMFAE")->GetStaticField(0x4E320);
		}

		// static const ::System::Object DMAFCIBFMPD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KAJMJPDMGMF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGIHGHJMFAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGIHGHJMFAE*))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGIHGHJMFAE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MGIHGHJMFAE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGIHGHJMFAE* Clone()
		{
			return ((::MGIHGHJMFAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_CLONE_OFFSET))(this);
		}

		::EEILAINOLPO* ADGLNFILOHI()
		{
			return ((::EEILAINOLPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::EEILAINOLPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEILAINOLPO*))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GCBCKOKEAJH* LIAOBOCBJEG()
		{
			return ((::GCBCKOKEAJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_LIAOBOCBJEG_OFFSET))(this);
		}

		::System::Void PCHLPNFKCFH(::GCBCKOKEAJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCBCKOKEAJH*))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_PCHLPNFKCFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGIHGHJMFAE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGIHGHJMFAE*))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGIHGHJMFAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGIHGHJMFAE*))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGIHGHJMFAE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
