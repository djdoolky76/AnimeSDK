#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALGDCPHADFA;
class FMKMEFMOJGJ;
class IEDPDDJAAIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALGDCPHADFA_BCLBLIKNPAP_OFFSET UNITYSDK_OFFSET(0x20019AD0)
#define ALGDCPHADFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2001A040)
#define ALGDCPHADFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x2001A5E0)
#define ALGDCPHADFA_CGIHAAECAMI_OFFSET UNITYSDK_OFFSET(0x20019AC0)
#define ALGDCPHADFA_CLONE_OFFSET UNITYSDK_OFFSET(0x20019A80)
#define ALGDCPHADFA_CNCBLMFJMPG_OFFSET UNITYSDK_OFFSET(0x20019AE0)
#define ALGDCPHADFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20019950)
#define ALGDCPHADFA_CTOR_OFFSET UNITYSDK_OFFSET(0x200198E0)
#define ALGDCPHADFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20019B80)
#define ALGDCPHADFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x20019B50)
#define ALGDCPHADFA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20019B00)
#define ALGDCPHADFA_FFPNLGDBGJD_OFFSET UNITYSDK_OFFSET(0x20019B20)
#define ALGDCPHADFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20019C60)
#define ALGDCPHADFA_HKKGLFNEDLK_OFFSET UNITYSDK_OFFSET(0x20019B10)
#define ALGDCPHADFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x200198A0)
#define ALGDCPHADFA_LIINJFJKKLK_OFFSET UNITYSDK_OFFSET(0x20019B30)
#define ALGDCPHADFA_LLPAKALDHFE_OFFSET UNITYSDK_OFFSET(0x20019B40)
#define ALGDCPHADFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2001A460)
#define ALGDCPHADFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2001A330)
#define ALGDCPHADFA_OAAGDHIGNKG_OFFSET UNITYSDK_OFFSET(0x20019AB0)
#define ALGDCPHADFA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20019AF0)
#define ALGDCPHADFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x200198D0)
#define ALGDCPHADFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20019D30)
#define ALGDCPHADFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x20019D90)

inline static constexpr unsigned int ALGDCPHADFA_TypeDefinitionIndex = 32905;

	class ALGDCPHADFA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IEDPDDJAAIH*>* IIDENPGCFHC; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::FMKMEFMOJGJ*>* MMLOEMDGKPE; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::Int64 LMEKGGGLGDB; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		::System::Boolean FEKPPGIHMAN; // 0x34
		::System::Byte _padding0[0x3];
		::System::UInt64 CODDHMMBPND; // 0x38
		static ::Google::Protobuf::FieldCodec_1<::IEDPDDJAAIH*>** StaticGet_LKFLJCHLIOI()
		{
			return (::Google::Protobuf::FieldCodec_1<::IEDPDDJAAIH*>**)UnitySDK::FromName("", "ALGDCPHADFA")->GetStaticField(0x36F90);
		}

		static ::Google::Protobuf::FieldCodec_1<::FMKMEFMOJGJ*>** StaticGet_LABIMIPFLMF()
		{
			return (::Google::Protobuf::FieldCodec_1<::FMKMEFMOJGJ*>**)UnitySDK::FromName("", "ALGDCPHADFA")->GetStaticField(0x36F98);
		}

		static ::Google::Protobuf::MessageParser_1<::ALGDCPHADFA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ALGDCPHADFA*>**)UnitySDK::FromName("", "ALGDCPHADFA")->GetStaticField(0x36FA0);
		}

		// static const ::System::Object OBODFLCEOFE; // 0x0
		// static const ::System::Object AAHHMMEEJGN; // 0x0
		// static const ::System::Object EAKLHMMJAJC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IGFHKAIFLGN; // 0x0
		// static const ::System::Object GCBAMAPEDPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGDCPHADFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALGDCPHADFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALGDCPHADFA*))((::PBYTE)hIl2Cpp + ALGDCPHADFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALGDCPHADFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ALGDCPHADFA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ALGDCPHADFA*>*(*)())((::PBYTE)hIl2Cpp + ALGDCPHADFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGDCPHADFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALGDCPHADFA* Clone()
		{
			return ((::ALGDCPHADFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGDCPHADFA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FMKMEFMOJGJ*>* OAAGDHIGNKG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FMKMEFMOJGJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGDCPHADFA_OAAGDHIGNKG_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IEDPDDJAAIH*>* CGIHAAECAMI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IEDPDDJAAIH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGDCPHADFA_CGIHAAECAMI_OFFSET))(this);
		}

		::System::UInt64 BCLBLIKNPAP()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGDCPHADFA_BCLBLIKNPAP_OFFSET))(this);
		}

		::System::Void CNCBLMFJMPG(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ALGDCPHADFA_CNCBLMFJMPG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGDCPHADFA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALGDCPHADFA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Int64 HKKGLFNEDLK()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGDCPHADFA_HKKGLFNEDLK_OFFSET))(this);
		}

		::System::Void FFPNLGDBGJD(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ALGDCPHADFA_FFPNLGDBGJD_OFFSET))(this, a1);
		}

		::System::Boolean LIINJFJKKLK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGDCPHADFA_LIINJFJKKLK_OFFSET))(this);
		}

		::System::Void LLPAKALDHFE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ALGDCPHADFA_LLPAKALDHFE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALGDCPHADFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALGDCPHADFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALGDCPHADFA*))((::PBYTE)hIl2Cpp + ALGDCPHADFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGDCPHADFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGDCPHADFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALGDCPHADFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGDCPHADFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALGDCPHADFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALGDCPHADFA*))((::PBYTE)hIl2Cpp + ALGDCPHADFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALGDCPHADFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
