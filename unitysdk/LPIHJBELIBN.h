#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLAKIACAACO;
class KOBALACAPKF;
class LPIHJBELIBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LPIHJBELIBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9CE8B0)
#define LPIHJBELIBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CEDD0)
#define LPIHJBELIBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9CE110)
#define LPIHJBELIBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9CE030)
#define LPIHJBELIBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CE020)
#define LPIHJBELIBN_EGHNAGOJFJD_OFFSET UNITYSDK_OFFSET(0x1E9CE240)
#define LPIHJBELIBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9CE490)
#define LPIHJBELIBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9CE260)
#define LPIHJBELIBN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9CE210)
#define LPIHJBELIBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9CE6C0)
#define LPIHJBELIBN_HGCCNJAMBPK_OFFSET UNITYSDK_OFFSET(0x1E9CE250)
#define LPIHJBELIBN_IMIONLCLJDC_OFFSET UNITYSDK_OFFSET(0x1E9CE230)
#define LPIHJBELIBN_JHLDEDEMJAI_OFFSET UNITYSDK_OFFSET(0x1E9CE220)
#define LPIHJBELIBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9CDFE0)
#define LPIHJBELIBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9CEB30)
#define LPIHJBELIBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9CE9B0)
#define LPIHJBELIBN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9CE200)
#define LPIHJBELIBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9CE010)
#define LPIHJBELIBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9CE710)
#define LPIHJBELIBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9CE770)

inline static constexpr unsigned int LPIHJBELIBN_TypeDefinitionIndex = 26992;

	class LPIHJBELIBN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CLAKIACAACO* IDJNJDDEECN; // 0x18
		::KOBALACAPKF* AGEMDICINPK; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LPIHJBELIBN")->GetStaticField(0x41D40);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MJFPACABLBD; // 0x0
		// static const ::System::Object BEIENNFBJPB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIHJBELIBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LPIHJBELIBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPIHJBELIBN*))((::PBYTE)hIl2Cpp + LPIHJBELIBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPIHJBELIBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LPIHJBELIBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIHJBELIBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LPIHJBELIBN* Clone()
		{
			return ((::LPIHJBELIBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIHJBELIBN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIHJBELIBN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPIHJBELIBN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::KOBALACAPKF* JHLDEDEMJAI()
		{
			return ((::KOBALACAPKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIHJBELIBN_JHLDEDEMJAI_OFFSET))(this);
		}

		::System::Void IMIONLCLJDC(::KOBALACAPKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOBALACAPKF*))((::PBYTE)hIl2Cpp + LPIHJBELIBN_IMIONLCLJDC_OFFSET))(this, a1);
		}

		::CLAKIACAACO* EGHNAGOJFJD()
		{
			return ((::CLAKIACAACO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIHJBELIBN_EGHNAGOJFJD_OFFSET))(this);
		}

		::System::Void HGCCNJAMBPK(::CLAKIACAACO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLAKIACAACO*))((::PBYTE)hIl2Cpp + LPIHJBELIBN_HGCCNJAMBPK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPIHJBELIBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LPIHJBELIBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPIHJBELIBN*))((::PBYTE)hIl2Cpp + LPIHJBELIBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIHJBELIBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIHJBELIBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LPIHJBELIBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIHJBELIBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LPIHJBELIBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPIHJBELIBN*))((::PBYTE)hIl2Cpp + LPIHJBELIBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LPIHJBELIBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
