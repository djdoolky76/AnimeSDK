#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEDKIIFNECM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DEDKIIFNECM_BOOBGJNKHMD_OFFSET UNITYSDK_OFFSET(0x1E190BC0)
#define DEDKIIFNECM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E190FF0)
#define DEDKIIFNECM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1913E0)
#define DEDKIIFNECM_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0x1E190BF0)
#define DEDKIIFNECM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E190B30)
#define DEDKIIFNECM_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E190BD0)
#define DEDKIIFNECM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E190AF0)
#define DEDKIIFNECM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E190AE0)
#define DEDKIIFNECM_DNLJAKCFMHC_OFFSET UNITYSDK_OFFSET(0x1E190C10)
#define DEDKIIFNECM_EELAOFKGLFP_OFFSET UNITYSDK_OFFSET(0x1E190BB0)
#define DEDKIIFNECM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E190CE0)
#define DEDKIIFNECM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E190C50)
#define DEDKIIFNECM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E190D30)
#define DEDKIIFNECM_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E190BE0)
#define DEDKIIFNECM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E190A70)
#define DEDKIIFNECM_KDPHIFKHODE_OFFSET UNITYSDK_OFFSET(0x1E190C20)
#define DEDKIIFNECM_KGMOPHKIKCJ_OFFSET UNITYSDK_OFFSET(0x1E190C00)
#define DEDKIIFNECM_MCECIKDKLCJ_OFFSET UNITYSDK_OFFSET(0x1E190C40)
#define DEDKIIFNECM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E191330)
#define DEDKIIFNECM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1912D0)
#define DEDKIIFNECM_NLGBICNFFFC_OFFSET UNITYSDK_OFFSET(0x1E190C30)
#define DEDKIIFNECM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E190AD0)
#define DEDKIIFNECM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E190D70)
#define DEDKIIFNECM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E190DD0)

inline static constexpr unsigned int DEDKIIFNECM_TypeDefinitionIndex = 34972;

	class DEDKIIFNECM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 HNPOOPPIOGG; // 0x18
		::System::Int32 KELMLAIBEGO; // 0x1C
		::System::UInt32 KPMKCGAOCEM; // 0x20
		::System::UInt32 HJCGJEFICAK; // 0x24
		::System::UInt32 KJAENGKDFJD; // 0x28
		static ::Google::Protobuf::MessageParser_1<::DEDKIIFNECM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DEDKIIFNECM*>**)UnitySDK::FromName("", "DEDKIIFNECM")->GetStaticField(0x1C610);
		}

		// static const ::System::Object IDMMJOIFHGM; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object NCECIHBDDNP; // 0x0
		// static const ::System::Object FAFGJGNLDNE; // 0x0
		// static const ::System::Object NNCCOKPHFNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDKIIFNECM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DEDKIIFNECM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEDKIIFNECM*))((::PBYTE)hIl2Cpp + DEDKIIFNECM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEDKIIFNECM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DEDKIIFNECM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DEDKIIFNECM*>*(*)())((::PBYTE)hIl2Cpp + DEDKIIFNECM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDKIIFNECM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DEDKIIFNECM* Clone()
		{
			return ((::DEDKIIFNECM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDKIIFNECM_CLONE_OFFSET))(this);
		}

		::System::Int32 EELAOFKGLFP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDKIIFNECM_EELAOFKGLFP_OFFSET))(this);
		}

		::System::Void BOOBGJNKHMD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEDKIIFNECM_BOOBGJNKHMD_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDKIIFNECM_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEDKIIFNECM_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 CECMCADBMDE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDKIIFNECM_CECMCADBMDE_OFFSET))(this);
		}

		::System::Void KGMOPHKIKCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEDKIIFNECM_KGMOPHKIKCJ_OFFSET))(this, a1);
		}

		::System::UInt32 DNLJAKCFMHC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDKIIFNECM_DNLJAKCFMHC_OFFSET))(this);
		}

		::System::Void KDPHIFKHODE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEDKIIFNECM_KDPHIFKHODE_OFFSET))(this, a1);
		}

		::System::Int32 NLGBICNFFFC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDKIIFNECM_NLGBICNFFFC_OFFSET))(this);
		}

		::System::Void MCECIKDKLCJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEDKIIFNECM_MCECIKDKLCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEDKIIFNECM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DEDKIIFNECM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEDKIIFNECM*))((::PBYTE)hIl2Cpp + DEDKIIFNECM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDKIIFNECM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDKIIFNECM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DEDKIIFNECM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDKIIFNECM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DEDKIIFNECM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEDKIIFNECM*))((::PBYTE)hIl2Cpp + DEDKIIFNECM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DEDKIIFNECM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
