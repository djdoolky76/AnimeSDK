#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIMBJCONBAE;
class FMNPJNPAMOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FIMBJCONBAE_ADFOKNNPOLA_OFFSET UNITYSDK_OFFSET(0x2069FCF0)
#define FIMBJCONBAE_BBGEIPCHPJB_OFFSET UNITYSDK_OFFSET(0x2069FCD0)
#define FIMBJCONBAE_BHMJJIBJMKF_OFFSET UNITYSDK_OFFSET(0x2069FCE0)
#define FIMBJCONBAE_BJDLDEEAPKJ_OFFSET UNITYSDK_OFFSET(0x2069FD10)
#define FIMBJCONBAE_BKJFMLIHDLL_OFFSET UNITYSDK_OFFSET(0x2069FCC0)
#define FIMBJCONBAE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x206A0330)
#define FIMBJCONBAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x206A0910)
#define FIMBJCONBAE_CLONE_OFFSET UNITYSDK_OFFSET(0x2069FC70)
#define FIMBJCONBAE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2069FB20)
#define FIMBJCONBAE_CTOR_OFFSET UNITYSDK_OFFSET(0x2069FA90)
#define FIMBJCONBAE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2069FDE0)
#define FIMBJCONBAE_EQUALS_OFFSET UNITYSDK_OFFSET(0x2069FD80)
#define FIMBJCONBAE_FBHNPIFFLDO_OFFSET UNITYSDK_OFFSET(0x2069FD30)
#define FIMBJCONBAE_FECEAIGEONI_OFFSET UNITYSDK_OFFSET(0x2069FD40)
#define FIMBJCONBAE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2069FEC0)
#define FIMBJCONBAE_GHFCMIEJEPJ_OFFSET UNITYSDK_OFFSET(0x2069FD60)
#define FIMBJCONBAE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2069FA20)
#define FIMBJCONBAE_LFNNPHCCNJJ_OFFSET UNITYSDK_OFFSET(0x2069FD50)
#define FIMBJCONBAE_LHKFNGAHGAM_OFFSET UNITYSDK_OFFSET(0x2069FD70)
#define FIMBJCONBAE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x206A0750)
#define FIMBJCONBAE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x206A0660)
#define FIMBJCONBAE_NNOLOGDMMNM_OFFSET UNITYSDK_OFFSET(0x2069FD20)
#define FIMBJCONBAE_OHOCPLPDHJK_OFFSET UNITYSDK_OFFSET(0x2069FD00)
#define FIMBJCONBAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2069FA80)
#define FIMBJCONBAE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x206A0030)
#define FIMBJCONBAE_WRITETO_OFFSET UNITYSDK_OFFSET(0x206A0090)

inline static constexpr unsigned int FIMBJCONBAE_TypeDefinitionIndex = 26093;

	class FIMBJCONBAE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OCJIEBDICGE; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::FMNPJNPAMOA*>* BJMPPFHBFPJ; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 JGNOFIEMNBC; // 0x28
		::System::UInt32 PNBLBEOOBAL; // 0x2C
		::System::UInt32 AJGILLIHKGG; // 0x30
		::System::UInt32 JJDMFHNHONH; // 0x34
		::System::UInt32 PJPACJJPJNN; // 0x38
		static ::Google::Protobuf::MessageParser_1<::FIMBJCONBAE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FIMBJCONBAE*>**)UnitySDK::FromName("", "FIMBJCONBAE")->GetStaticField(0x43D10);
		}

		static ::Google::Protobuf::FieldCodec_1<::FMNPJNPAMOA*>** StaticGet_PEINCAJLGDF()
		{
			return (::Google::Protobuf::FieldCodec_1<::FMNPJNPAMOA*>**)UnitySDK::FromName("", "FIMBJCONBAE")->GetStaticField(0x43D18);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FDLCICFKKNG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FIMBJCONBAE")->GetStaticField(0x43D20);
		}

		// static const ::System::Object NBMFGGMGPCM; // 0x0
		// static const ::System::Object NLMGLCJBPEL; // 0x0
		// static const ::System::Object EAMILPJOLPM; // 0x0
		// static const ::System::Object EJCMDDHFBNL; // 0x0
		// static const ::System::Object CLFPLGJOPGB; // 0x0
		// static const ::System::Object JLBAMIKMMKP; // 0x0
		// static const ::System::Object AFJPDBCCNLD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMBJCONBAE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FIMBJCONBAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIMBJCONBAE*))((::PBYTE)hIl2Cpp + FIMBJCONBAE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIMBJCONBAE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FIMBJCONBAE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FIMBJCONBAE*>*(*)())((::PBYTE)hIl2Cpp + FIMBJCONBAE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMBJCONBAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FIMBJCONBAE* Clone()
		{
			return ((::FIMBJCONBAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMBJCONBAE_CLONE_OFFSET))(this);
		}

		::System::UInt32 BKJFMLIHDLL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMBJCONBAE_BKJFMLIHDLL_OFFSET))(this);
		}

		::System::Void BBGEIPCHPJB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIMBJCONBAE_BBGEIPCHPJB_OFFSET))(this, a1);
		}

		::System::UInt32 BHMJJIBJMKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMBJCONBAE_BHMJJIBJMKF_OFFSET))(this);
		}

		::System::Void ADFOKNNPOLA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIMBJCONBAE_ADFOKNNPOLA_OFFSET))(this, a1);
		}

		::System::UInt32 OHOCPLPDHJK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMBJCONBAE_OHOCPLPDHJK_OFFSET))(this);
		}

		::System::Void BJDLDEEAPKJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIMBJCONBAE_BJDLDEEAPKJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NNOLOGDMMNM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMBJCONBAE_NNOLOGDMMNM_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FMNPJNPAMOA*>* FBHNPIFFLDO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FMNPJNPAMOA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMBJCONBAE_FBHNPIFFLDO_OFFSET))(this);
		}

		::System::UInt32 FECEAIGEONI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMBJCONBAE_FECEAIGEONI_OFFSET))(this);
		}

		::System::Void LFNNPHCCNJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIMBJCONBAE_LFNNPHCCNJJ_OFFSET))(this, a1);
		}

		::System::UInt32 GHFCMIEJEPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMBJCONBAE_GHFCMIEJEPJ_OFFSET))(this);
		}

		::System::Void LHKFNGAHGAM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIMBJCONBAE_LHKFNGAHGAM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIMBJCONBAE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FIMBJCONBAE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIMBJCONBAE*))((::PBYTE)hIl2Cpp + FIMBJCONBAE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMBJCONBAE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMBJCONBAE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FIMBJCONBAE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMBJCONBAE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FIMBJCONBAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIMBJCONBAE*))((::PBYTE)hIl2Cpp + FIMBJCONBAE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FIMBJCONBAE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
