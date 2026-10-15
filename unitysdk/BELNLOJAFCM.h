#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BELNLOJAFCM;
class DGHPIDMDOJM;
class FHEGNOPNICH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BELNLOJAFCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA37730)
#define BELNLOJAFCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA37B20)
#define BELNLOJAFCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA370E0)
#define BELNLOJAFCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA36FE0)
#define BELNLOJAFCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA36F90)
#define BELNLOJAFCM_DMJBKPCMEDG_OFFSET UNITYSDK_OFFSET(0x1EA37140)
#define BELNLOJAFCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA371B0)
#define BELNLOJAFCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA37180)
#define BELNLOJAFCM_FILKEMBBPGK_OFFSET UNITYSDK_OFFSET(0x1EA37170)
#define BELNLOJAFCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA37400)
#define BELNLOJAFCM_HGKEAJLMLKN_OFFSET UNITYSDK_OFFSET(0x1EA37110)
#define BELNLOJAFCM_IAPLCKBHNOL_OFFSET UNITYSDK_OFFSET(0x1EA37160)
#define BELNLOJAFCM_JADJGEAPMNO_OFFSET UNITYSDK_OFFSET(0x1EA37150)
#define BELNLOJAFCM_JIEIHOEDEJA_OFFSET UNITYSDK_OFFSET(0x1EA37130)
#define BELNLOJAFCM_JIOJFMGAOHG_OFFSET UNITYSDK_OFFSET(0x1EA37120)
#define BELNLOJAFCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA36F50)
#define BELNLOJAFCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA379A0)
#define BELNLOJAFCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA37890)
#define BELNLOJAFCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA36F80)
#define BELNLOJAFCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA37540)
#define BELNLOJAFCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA375A0)

inline static constexpr unsigned int BELNLOJAFCM_TypeDefinitionIndex = 32332;

	class BELNLOJAFCM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LAPKFICKKPM; // 0x10
		::DGHPIDMDOJM* OPOCHONLBJC; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::FHEGNOPNICH* EHJBJLHIJME; // 0x28
		::System::UInt32 LNLJILBHKKI; // 0x30
		static ::Google::Protobuf::MessageParser_1<::BELNLOJAFCM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BELNLOJAFCM*>**)UnitySDK::FromName("", "BELNLOJAFCM")->GetStaticField(0x53590);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BDDEJFMFFCI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BELNLOJAFCM")->GetStaticField(0x53598);
		}

		// static const ::System::Object MABJPMGDBHI; // 0x0
		// static const ::System::Object GIOMNLFFAOB; // 0x0
		// static const ::System::Object INCHAIMGDPH; // 0x0
		// static const ::System::Object MHFBCGMDDOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BELNLOJAFCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BELNLOJAFCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BELNLOJAFCM*))((::PBYTE)hIl2Cpp + BELNLOJAFCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BELNLOJAFCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BELNLOJAFCM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BELNLOJAFCM*>*(*)())((::PBYTE)hIl2Cpp + BELNLOJAFCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BELNLOJAFCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BELNLOJAFCM* Clone()
		{
			return ((::BELNLOJAFCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BELNLOJAFCM_CLONE_OFFSET))(this);
		}

		::FHEGNOPNICH* HGKEAJLMLKN()
		{
			return ((::FHEGNOPNICH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BELNLOJAFCM_HGKEAJLMLKN_OFFSET))(this);
		}

		::System::Void JIOJFMGAOHG(::FHEGNOPNICH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHEGNOPNICH*))((::PBYTE)hIl2Cpp + BELNLOJAFCM_JIOJFMGAOHG_OFFSET))(this, a1);
		}

		::DGHPIDMDOJM* JIEIHOEDEJA()
		{
			return ((::DGHPIDMDOJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BELNLOJAFCM_JIEIHOEDEJA_OFFSET))(this);
		}

		::System::Void DMJBKPCMEDG(::DGHPIDMDOJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGHPIDMDOJM*))((::PBYTE)hIl2Cpp + BELNLOJAFCM_DMJBKPCMEDG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JADJGEAPMNO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BELNLOJAFCM_JADJGEAPMNO_OFFSET))(this);
		}

		::System::UInt32 IAPLCKBHNOL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BELNLOJAFCM_IAPLCKBHNOL_OFFSET))(this);
		}

		::System::Void FILKEMBBPGK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BELNLOJAFCM_FILKEMBBPGK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BELNLOJAFCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BELNLOJAFCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BELNLOJAFCM*))((::PBYTE)hIl2Cpp + BELNLOJAFCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BELNLOJAFCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BELNLOJAFCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BELNLOJAFCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BELNLOJAFCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BELNLOJAFCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BELNLOJAFCM*))((::PBYTE)hIl2Cpp + BELNLOJAFCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BELNLOJAFCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
