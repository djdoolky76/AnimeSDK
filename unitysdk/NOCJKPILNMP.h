#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKOEAOPNEAC;
class NOCJKPILNMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NOCJKPILNMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB88D80)
#define NOCJKPILNMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB890E0)
#define NOCJKPILNMP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB887B0)
#define NOCJKPILNMP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB88740)
#define NOCJKPILNMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB88730)
#define NOCJKPILNMP_EAEMJJKEGJJ_OFFSET UNITYSDK_OFFSET(0x1EB88870)
#define NOCJKPILNMP_EDDAFNHCDGB_OFFSET UNITYSDK_OFFSET(0x1EB88890)
#define NOCJKPILNMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB889B0)
#define NOCJKPILNMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB888B0)
#define NOCJKPILNMP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB88840)
#define NOCJKPILNMP_FBGECKKOPEC_OFFSET UNITYSDK_OFFSET(0x1EB88860)
#define NOCJKPILNMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB88B50)
#define NOCJKPILNMP_HGDGANGFNNE_OFFSET UNITYSDK_OFFSET(0x1EB88880)
#define NOCJKPILNMP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB886F0)
#define NOCJKPILNMP_KFEGHCBAIJB_OFFSET UNITYSDK_OFFSET(0x1EB888A0)
#define NOCJKPILNMP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB88FF0)
#define NOCJKPILNMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB88F40)
#define NOCJKPILNMP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB88830)
#define NOCJKPILNMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB88720)
#define NOCJKPILNMP_PHOOHADHKOL_OFFSET UNITYSDK_OFFSET(0x1EB88850)
#define NOCJKPILNMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB88B90)
#define NOCJKPILNMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB88BF0)

	class NOCJKPILNMP : public ::System::Object
	{
	public:
		::HKOEAOPNEAC* AAHFBGDFEEF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MEHILKJPAOA; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 AMKFLHPAOLA; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NOCJKPILNMP")->GetStaticField(0xB850);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PKDJIKAMOOK; // 0x0
		// static const ::System::Object ANLLGHKJCIB; // 0x0
		// static const ::System::Object PMLONCOBNEO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCJKPILNMP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NOCJKPILNMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOCJKPILNMP*))((::PBYTE)hIl2Cpp + NOCJKPILNMP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOCJKPILNMP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NOCJKPILNMP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCJKPILNMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NOCJKPILNMP* Clone()
		{
			return ((::NOCJKPILNMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCJKPILNMP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCJKPILNMP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOCJKPILNMP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 PHOOHADHKOL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCJKPILNMP_PHOOHADHKOL_OFFSET))(this);
		}

		::System::Void FBGECKKOPEC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOCJKPILNMP_FBGECKKOPEC_OFFSET))(this, a1);
		}

		::HKOEAOPNEAC* EAEMJJKEGJJ()
		{
			return ((::HKOEAOPNEAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCJKPILNMP_EAEMJJKEGJJ_OFFSET))(this);
		}

		::System::Void HGDGANGFNNE(::HKOEAOPNEAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKOEAOPNEAC*))((::PBYTE)hIl2Cpp + NOCJKPILNMP_HGDGANGFNNE_OFFSET))(this, a1);
		}

		::System::UInt32 EDDAFNHCDGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCJKPILNMP_EDDAFNHCDGB_OFFSET))(this);
		}

		::System::Void KFEGHCBAIJB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOCJKPILNMP_KFEGHCBAIJB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOCJKPILNMP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NOCJKPILNMP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NOCJKPILNMP*))((::PBYTE)hIl2Cpp + NOCJKPILNMP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCJKPILNMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCJKPILNMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NOCJKPILNMP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCJKPILNMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NOCJKPILNMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOCJKPILNMP*))((::PBYTE)hIl2Cpp + NOCJKPILNMP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NOCJKPILNMP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
