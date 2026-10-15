#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPPEMMILLCO.h"
#include "unitysdk/System/Object.h"
class NENHKMEFAEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NENHKMEFAEC_AKJAJGGDCIP_OFFSET UNITYSDK_OFFSET(0x1EAFE860)
#define NENHKMEFAEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAFEBD0)
#define NENHKMEFAEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAFEEE0)
#define NENHKMEFAEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAFE810)
#define NENHKMEFAEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAFE7E0)
#define NENHKMEFAEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAFE7D0)
#define NENHKMEFAEC_EJDIMEGMAKG_OFFSET UNITYSDK_OFFSET(0x1EAFE880)
#define NENHKMEFAEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAFE980)
#define NENHKMEFAEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAFE8A0)
#define NENHKMEFAEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAFEA50)
#define NENHKMEFAEC_GOIACKBBPOD_OFFSET UNITYSDK_OFFSET(0x1EAFE890)
#define NENHKMEFAEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAFE790)
#define NENHKMEFAEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAFED60)
#define NENHKMEFAEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAFED20)
#define NENHKMEFAEC_OBEDECHDPPG_OFFSET UNITYSDK_OFFSET(0x1EAFE870)
#define NENHKMEFAEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAFE7C0)
#define NENHKMEFAEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAFEA80)
#define NENHKMEFAEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAFEAE0)

inline static constexpr unsigned int NENHKMEFAEC_TypeDefinitionIndex = 31270;

	class NENHKMEFAEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CPHIMKMOFMM; // 0x18
		::NPPEMMILLCO EMHBAOIIKLC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NENHKMEFAEC")->GetStaticField(0x5E490);
		}

		// static const ::System::Object PNFCALKCEHD; // 0x0
		// static const ::System::Object NINHOJDICNH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NENHKMEFAEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NENHKMEFAEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NENHKMEFAEC*))((::PBYTE)hIl2Cpp + NENHKMEFAEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NENHKMEFAEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NENHKMEFAEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NENHKMEFAEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NENHKMEFAEC* Clone()
		{
			return ((::NENHKMEFAEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NENHKMEFAEC_CLONE_OFFSET))(this);
		}

		::System::UInt32 AKJAJGGDCIP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NENHKMEFAEC_AKJAJGGDCIP_OFFSET))(this);
		}

		::System::Void OBEDECHDPPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NENHKMEFAEC_OBEDECHDPPG_OFFSET))(this, a1);
		}

		::NPPEMMILLCO EJDIMEGMAKG()
		{
			return ((::NPPEMMILLCO(*)(::PVOID))((::PBYTE)hIl2Cpp + NENHKMEFAEC_EJDIMEGMAKG_OFFSET))(this);
		}

		::System::Void GOIACKBBPOD(::NPPEMMILLCO a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPPEMMILLCO))((::PBYTE)hIl2Cpp + NENHKMEFAEC_GOIACKBBPOD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NENHKMEFAEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NENHKMEFAEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NENHKMEFAEC*))((::PBYTE)hIl2Cpp + NENHKMEFAEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NENHKMEFAEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NENHKMEFAEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NENHKMEFAEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NENHKMEFAEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NENHKMEFAEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NENHKMEFAEC*))((::PBYTE)hIl2Cpp + NENHKMEFAEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NENHKMEFAEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
