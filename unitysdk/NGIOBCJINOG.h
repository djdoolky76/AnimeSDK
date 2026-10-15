#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGIOBCJINOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGIOBCJINOG_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1EAE4900)
#define NGIOBCJINOG_BOOBGJNKHMD_OFFSET UNITYSDK_OFFSET(0x1EAE4890)
#define NGIOBCJINOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAE4D10)
#define NGIOBCJINOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE51E0)
#define NGIOBCJINOG_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0x1EAE4860)
#define NGIOBCJINOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAE4810)
#define NGIOBCJINOG_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1EAE48A0)
#define NGIOBCJINOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAE47D0)
#define NGIOBCJINOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE47C0)
#define NGIOBCJINOG_DNLJAKCFMHC_OFFSET UNITYSDK_OFFSET(0x1EAE48E0)
#define NGIOBCJINOG_EELAOFKGLFP_OFFSET UNITYSDK_OFFSET(0x1EAE4880)
#define NGIOBCJINOG_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1EAE4910)
#define NGIOBCJINOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAE4980)
#define NGIOBCJINOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAE4920)
#define NGIOBCJINOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAE49D0)
#define NGIOBCJINOG_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1EAE48B0)
#define NGIOBCJINOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAE4780)
#define NGIOBCJINOG_KDPHIFKHODE_OFFSET UNITYSDK_OFFSET(0x1EAE48F0)
#define NGIOBCJINOG_KGMOPHKIKCJ_OFFSET UNITYSDK_OFFSET(0x1EAE4870)
#define NGIOBCJINOG_MCECIKDKLCJ_OFFSET UNITYSDK_OFFSET(0x1EAE48D0)
#define NGIOBCJINOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAE5110)
#define NGIOBCJINOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAE50A0)
#define NGIOBCJINOG_NLGBICNFFFC_OFFSET UNITYSDK_OFFSET(0x1EAE48C0)
#define NGIOBCJINOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAE47B0)
#define NGIOBCJINOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAE4A20)
#define NGIOBCJINOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAE4A80)

inline static constexpr unsigned int NGIOBCJINOG_TypeDefinitionIndex = 34934;

	class NGIOBCJINOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KPMKCGAOCEM; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 NPFBAFODCBI; // 0x20
		::System::UInt32 KJAENGKDFJD; // 0x28
		::System::Int32 HNPOOPPIOGG; // 0x2C
		::System::UInt32 HJCGJEFICAK; // 0x30
		::System::Int32 KELMLAIBEGO; // 0x34
		static ::Google::Protobuf::MessageParser_1<::NGIOBCJINOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NGIOBCJINOG*>**)UnitySDK::FromName("", "NGIOBCJINOG")->GetStaticField(0x1DD00);
		}

		// static const ::System::Object NCECIHBDDNP; // 0x0
		// static const ::System::Object IDMMJOIFHGM; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object NNCCOKPHFNG; // 0x0
		// static const ::System::Object FAFGJGNLDNE; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIOBCJINOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGIOBCJINOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGIOBCJINOG*))((::PBYTE)hIl2Cpp + NGIOBCJINOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGIOBCJINOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NGIOBCJINOG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NGIOBCJINOG*>*(*)())((::PBYTE)hIl2Cpp + NGIOBCJINOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIOBCJINOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGIOBCJINOG* Clone()
		{
			return ((::NGIOBCJINOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIOBCJINOG_CLONE_OFFSET))(this);
		}

		::System::UInt32 CECMCADBMDE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIOBCJINOG_CECMCADBMDE_OFFSET))(this);
		}

		::System::Void KGMOPHKIKCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGIOBCJINOG_KGMOPHKIKCJ_OFFSET))(this, a1);
		}

		::System::Int32 EELAOFKGLFP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIOBCJINOG_EELAOFKGLFP_OFFSET))(this);
		}

		::System::Void BOOBGJNKHMD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGIOBCJINOG_BOOBGJNKHMD_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIOBCJINOG_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGIOBCJINOG_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Int32 NLGBICNFFFC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIOBCJINOG_NLGBICNFFFC_OFFSET))(this);
		}

		::System::Void MCECIKDKLCJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGIOBCJINOG_MCECIKDKLCJ_OFFSET))(this, a1);
		}

		::System::UInt32 DNLJAKCFMHC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIOBCJINOG_DNLJAKCFMHC_OFFSET))(this);
		}

		::System::Void KDPHIFKHODE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGIOBCJINOG_KDPHIFKHODE_OFFSET))(this, a1);
		}

		::System::UInt64 ACOJNBBKMOE()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIOBCJINOG_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NGIOBCJINOG_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGIOBCJINOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGIOBCJINOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGIOBCJINOG*))((::PBYTE)hIl2Cpp + NGIOBCJINOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIOBCJINOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIOBCJINOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGIOBCJINOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIOBCJINOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGIOBCJINOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGIOBCJINOG*))((::PBYTE)hIl2Cpp + NGIOBCJINOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGIOBCJINOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
