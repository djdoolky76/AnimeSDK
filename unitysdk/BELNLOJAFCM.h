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

#define BELNLOJAFCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA64E00)
#define BELNLOJAFCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA651F0)
#define BELNLOJAFCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA647B0)
#define BELNLOJAFCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA646B0)
#define BELNLOJAFCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA64660)
#define BELNLOJAFCM_DMJBKPCMEDG_OFFSET UNITYSDK_OFFSET(0x1EA64810)
#define BELNLOJAFCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA64880)
#define BELNLOJAFCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA64850)
#define BELNLOJAFCM_FILKEMBBPGK_OFFSET UNITYSDK_OFFSET(0x1EA64840)
#define BELNLOJAFCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA64AD0)
#define BELNLOJAFCM_HGKEAJLMLKN_OFFSET UNITYSDK_OFFSET(0x1EA647E0)
#define BELNLOJAFCM_IAPLCKBHNOL_OFFSET UNITYSDK_OFFSET(0x1EA64830)
#define BELNLOJAFCM_JADJGEAPMNO_OFFSET UNITYSDK_OFFSET(0x1EA64820)
#define BELNLOJAFCM_JIEIHOEDEJA_OFFSET UNITYSDK_OFFSET(0x1EA64800)
#define BELNLOJAFCM_JIOJFMGAOHG_OFFSET UNITYSDK_OFFSET(0x1EA647F0)
#define BELNLOJAFCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA64620)
#define BELNLOJAFCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA65070)
#define BELNLOJAFCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA64F60)
#define BELNLOJAFCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA64650)
#define BELNLOJAFCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA64C10)
#define BELNLOJAFCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA64C70)

inline static constexpr unsigned int BELNLOJAFCM_TypeDefinitionIndex = 32332;

	class BELNLOJAFCM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::DGHPIDMDOJM* OPOCHONLBJC; // 0x18
		::FHEGNOPNICH* EHJBJLHIJME; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LAPKFICKKPM; // 0x28
		::System::UInt32 LNLJILBHKKI; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BDDEJFMFFCI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BELNLOJAFCM")->GetStaticField(0x40ED0);
		}

		static ::Google::Protobuf::MessageParser_1<::BELNLOJAFCM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BELNLOJAFCM*>**)UnitySDK::FromName("", "BELNLOJAFCM")->GetStaticField(0x40ED8);
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
