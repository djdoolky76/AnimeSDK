#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPJCKMPBAFC;
class JLJPFFILKIO;
class LMKAAFKLMDG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LMKAAFKLMDG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9A7E00)
#define LMKAAFKLMDG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A81D0)
#define LMKAAFKLMDG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9A7670)
#define LMKAAFKLMDG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9A75B0)
#define LMKAAFKLMDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A75A0)
#define LMKAAFKLMDG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9A79D0)
#define LMKAAFKLMDG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9A77A0)
#define LMKAAFKLMDG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9A7750)
#define LMKAAFKLMDG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9A7C00)
#define LMKAAFKLMDG_IFECPLFEPIE_OFFSET UNITYSDK_OFFSET(0x1E9A7760)
#define LMKAAFKLMDG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9A7560)
#define LMKAAFKLMDG_KGLIPAJLDMC_OFFSET UNITYSDK_OFFSET(0x1E9A7780)
#define LMKAAFKLMDG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9A8010)
#define LMKAAFKLMDG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9A7F00)
#define LMKAAFKLMDG_MNPKDNPEKDH_OFFSET UNITYSDK_OFFSET(0x1E9A7770)
#define LMKAAFKLMDG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9A7740)
#define LMKAAFKLMDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9A7590)
#define LMKAAFKLMDG_PIGCJIAOIKA_OFFSET UNITYSDK_OFFSET(0x1E9A7790)
#define LMKAAFKLMDG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9A7C60)
#define LMKAAFKLMDG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9A7CC0)

inline static constexpr unsigned int LMKAAFKLMDG_TypeDefinitionIndex = 30515;

	class LMKAAFKLMDG : public ::System::Object
	{
	public:
		::JLJPFFILKIO* KMJKJFJEDBF; // 0x10
		::BPJCKMPBAFC* GMBIBLEDALJ; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LMKAAFKLMDG")->GetStaticField(0x4D680);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JJBDGCGPPFI; // 0x0
		// static const ::System::Object EEDDEINLCCA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMKAAFKLMDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMKAAFKLMDG*))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMKAAFKLMDG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LMKAAFKLMDG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LMKAAFKLMDG* Clone()
		{
			return ((::LMKAAFKLMDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::BPJCKMPBAFC* IFECPLFEPIE()
		{
			return ((::BPJCKMPBAFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_IFECPLFEPIE_OFFSET))(this);
		}

		::System::Void MNPKDNPEKDH(::BPJCKMPBAFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPJCKMPBAFC*))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_MNPKDNPEKDH_OFFSET))(this, a1);
		}

		::JLJPFFILKIO* KGLIPAJLDMC()
		{
			return ((::JLJPFFILKIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_KGLIPAJLDMC_OFFSET))(this);
		}

		::System::Void PIGCJIAOIKA(::JLJPFFILKIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLJPFFILKIO*))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_PIGCJIAOIKA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LMKAAFKLMDG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMKAAFKLMDG*))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LMKAAFKLMDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMKAAFKLMDG*))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LMKAAFKLMDG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
