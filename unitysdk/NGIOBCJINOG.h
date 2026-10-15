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

#define NGIOBCJINOG_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1EB11F90)
#define NGIOBCJINOG_BOOBGJNKHMD_OFFSET UNITYSDK_OFFSET(0x1EB11F20)
#define NGIOBCJINOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB123B0)
#define NGIOBCJINOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB12880)
#define NGIOBCJINOG_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0x1EB11EF0)
#define NGIOBCJINOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB11EA0)
#define NGIOBCJINOG_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1EB11F30)
#define NGIOBCJINOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB11E60)
#define NGIOBCJINOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB11E50)
#define NGIOBCJINOG_DNLJAKCFMHC_OFFSET UNITYSDK_OFFSET(0x1EB11F70)
#define NGIOBCJINOG_EELAOFKGLFP_OFFSET UNITYSDK_OFFSET(0x1EB11F10)
#define NGIOBCJINOG_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1EB11FA0)
#define NGIOBCJINOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB12010)
#define NGIOBCJINOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB11FB0)
#define NGIOBCJINOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB12060)
#define NGIOBCJINOG_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1EB11F40)
#define NGIOBCJINOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB11E10)
#define NGIOBCJINOG_KDPHIFKHODE_OFFSET UNITYSDK_OFFSET(0x1EB11F80)
#define NGIOBCJINOG_KGMOPHKIKCJ_OFFSET UNITYSDK_OFFSET(0x1EB11F00)
#define NGIOBCJINOG_MCECIKDKLCJ_OFFSET UNITYSDK_OFFSET(0x1EB11F60)
#define NGIOBCJINOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB127B0)
#define NGIOBCJINOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB12740)
#define NGIOBCJINOG_NLGBICNFFFC_OFFSET UNITYSDK_OFFSET(0x1EB11F50)
#define NGIOBCJINOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB11E40)
#define NGIOBCJINOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB120C0)
#define NGIOBCJINOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB12120)

inline static constexpr unsigned int NGIOBCJINOG_TypeDefinitionIndex = 34934;

	class NGIOBCJINOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 KELMLAIBEGO; // 0x18
		::System::UInt32 KPMKCGAOCEM; // 0x1C
		::System::UInt32 KJAENGKDFJD; // 0x20
		::System::UInt32 HJCGJEFICAK; // 0x24
		::System::Int32 HNPOOPPIOGG; // 0x28
		::System::Byte _padding0[0x4];
		::System::UInt64 NPFBAFODCBI; // 0x30
		static ::Google::Protobuf::MessageParser_1<::NGIOBCJINOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NGIOBCJINOG*>**)UnitySDK::FromName("", "NGIOBCJINOG")->GetStaticField(0x20E00);
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
