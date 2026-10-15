#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABKNCPGFADC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABKNCPGFADC_AIACADJENDG_OFFSET UNITYSDK_OFFSET(0x1DDCE090)
#define ABKNCPGFADC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDCE490)
#define ABKNCPGFADC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDCE7A0)
#define ABKNCPGFADC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDCE010)
#define ABKNCPGFADC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDCDFD0)
#define ABKNCPGFADC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDCDFC0)
#define ABKNCPGFADC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDCE1B0)
#define ABKNCPGFADC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDCE0C0)
#define ABKNCPGFADC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DDCE0B0)
#define ABKNCPGFADC_FICJINGODOM_OFFSET UNITYSDK_OFFSET(0x1DDCE080)
#define ABKNCPGFADC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDCE290)
#define ABKNCPGFADC_HPGLDOOFONJ_OFFSET UNITYSDK_OFFSET(0x1DDCE060)
#define ABKNCPGFADC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDCDF80)
#define ABKNCPGFADC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDCE600)
#define ABKNCPGFADC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDCE5B0)
#define ABKNCPGFADC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DDCE0A0)
#define ABKNCPGFADC_PAJHAHFHLEI_OFFSET UNITYSDK_OFFSET(0x1DDCE070)
#define ABKNCPGFADC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDCDFB0)
#define ABKNCPGFADC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDCE2C0)
#define ABKNCPGFADC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDCE320)

inline static constexpr unsigned int ABKNCPGFADC_TypeDefinitionIndex = 29789;

	class ABKNCPGFADC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IOJPFPKAAOP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::Boolean PCMINDIJBMD; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ABKNCPGFADC")->GetStaticField(0x39AA0);
		}

		// static const ::System::Object EBNBMOHHABN; // 0x0
		// static const ::System::Object BIOKDEJNHBH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKNCPGFADC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABKNCPGFADC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABKNCPGFADC*))((::PBYTE)hIl2Cpp + ABKNCPGFADC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABKNCPGFADC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ABKNCPGFADC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKNCPGFADC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABKNCPGFADC* Clone()
		{
			return ((::ABKNCPGFADC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKNCPGFADC_CLONE_OFFSET))(this);
		}

		::System::UInt32 HPGLDOOFONJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKNCPGFADC_HPGLDOOFONJ_OFFSET))(this);
		}

		::System::Void PAJHAHFHLEI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABKNCPGFADC_PAJHAHFHLEI_OFFSET))(this, a1);
		}

		::System::Boolean FICJINGODOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKNCPGFADC_FICJINGODOM_OFFSET))(this);
		}

		::System::Void AIACADJENDG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABKNCPGFADC_AIACADJENDG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKNCPGFADC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABKNCPGFADC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABKNCPGFADC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABKNCPGFADC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABKNCPGFADC*))((::PBYTE)hIl2Cpp + ABKNCPGFADC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKNCPGFADC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKNCPGFADC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABKNCPGFADC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKNCPGFADC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABKNCPGFADC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABKNCPGFADC*))((::PBYTE)hIl2Cpp + ABKNCPGFADC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABKNCPGFADC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
