#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDPGAPPKBBB;
class LKLKNFHKCBK;
class NEIMLKNMDBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDPGAPPKBBB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E901D00)
#define LDPGAPPKBBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E902310)
#define LDPGAPPKBBB_CGHHLLBAOHN_OFFSET UNITYSDK_OFFSET(0x1E901810)
#define LDPGAPPKBBB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E901730)
#define LDPGAPPKBBB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E901640)
#define LDPGAPPKBBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9015E0)
#define LDPGAPPKBBB_EBAOCGGBDFK_OFFSET UNITYSDK_OFFSET(0x1E901770)
#define LDPGAPPKBBB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E901850)
#define LDPGAPPKBBB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E901820)
#define LDPGAPPKBBB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9017E0)
#define LDPGAPPKBBB_FOFMIHADABG_OFFSET UNITYSDK_OFFSET(0x1E901760)
#define LDPGAPPKBBB_GCIFDBAKBFI_OFFSET UNITYSDK_OFFSET(0x1E9017A0)
#define LDPGAPPKBBB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E901930)
#define LDPGAPPKBBB_GONDHIJKOJE_OFFSET UNITYSDK_OFFSET(0x1E901790)
#define LDPGAPPKBBB_HAHKDMNEHDA_OFFSET UNITYSDK_OFFSET(0x1E901800)
#define LDPGAPPKBBB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9015A0)
#define LDPGAPPKBBB_JPGEDANMEGA_OFFSET UNITYSDK_OFFSET(0x1E9017F0)
#define LDPGAPPKBBB_KCEBIHANAEP_OFFSET UNITYSDK_OFFSET(0x1E9017B0)
#define LDPGAPPKBBB_KPDHOOBGJOA_OFFSET UNITYSDK_OFFSET(0x1E901780)
#define LDPGAPPKBBB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9021A0)
#define LDPGAPPKBBB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E902070)
#define LDPGAPPKBBB_NHIBFLABHGJ_OFFSET UNITYSDK_OFFSET(0x1E9017C0)
#define LDPGAPPKBBB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9017D0)
#define LDPGAPPKBBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9015D0)
#define LDPGAPPKBBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9019D0)
#define LDPGAPPKBBB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E901A30)

inline static constexpr unsigned int LDPGAPPKBBB_TypeDefinitionIndex = 29087;

	class LDPGAPPKBBB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NEIMLKNMDBM*>* DIPJMDLMBEA; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LKLKNFHKCBK*>* HLKKKJIMCDH; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 EEJKJMHODND; // 0x28
		::System::UInt32 BEIPFCCPIJB; // 0x2C
		::System::UInt32 NAEACGPKNNH; // 0x30
		::System::UInt32 HIPBGEOABFL; // 0x34
		::System::UInt32 DJIAIKMHLOE; // 0x38
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LDPGAPPKBBB")->GetStaticField(0x359E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GCJDBDBNCJF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LDPGAPPKBBB")->GetStaticField(0x359E8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DKCLEHOLLOE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LDPGAPPKBBB")->GetStaticField(0x359F0);
		}

		// static const ::System::Object DFLDAOLENMB; // 0x0
		// static const ::System::Object POKDIIMEELK; // 0x0
		// static const ::System::Object IPMDENGDKFE; // 0x0
		// static const ::System::Object FGOBNHFNFMD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DFLIDGMFJPC; // 0x0
		// static const ::System::Object EHJCCBJGOLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDPGAPPKBBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDPGAPPKBBB*))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDPGAPPKBBB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LDPGAPPKBBB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDPGAPPKBBB* Clone()
		{
			return ((::LDPGAPPKBBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_CLONE_OFFSET))(this);
		}

		::System::UInt32 FOFMIHADABG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_FOFMIHADABG_OFFSET))(this);
		}

		::System::Void EBAOCGGBDFK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_EBAOCGGBDFK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LKLKNFHKCBK*>* KPDHOOBGJOA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LKLKNFHKCBK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_KPDHOOBGJOA_OFFSET))(this);
		}

		::System::UInt32 GONDHIJKOJE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_GONDHIJKOJE_OFFSET))(this);
		}

		::System::Void GCIFDBAKBFI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_GCIFDBAKBFI_OFFSET))(this, a1);
		}

		::System::UInt32 KCEBIHANAEP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_KCEBIHANAEP_OFFSET))(this);
		}

		::System::Void NHIBFLABHGJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_NHIBFLABHGJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NEIMLKNMDBM*>* JPGEDANMEGA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NEIMLKNMDBM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_JPGEDANMEGA_OFFSET))(this);
		}

		::System::UInt32 HAHKDMNEHDA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_HAHKDMNEHDA_OFFSET))(this);
		}

		::System::Void CGHHLLBAOHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_CGHHLLBAOHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDPGAPPKBBB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDPGAPPKBBB*))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDPGAPPKBBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDPGAPPKBBB*))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDPGAPPKBBB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
