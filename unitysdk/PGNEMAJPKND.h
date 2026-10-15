#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGNEMAJPKND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PGNEMAJPKND_BNHNJHIOLNP_OFFSET UNITYSDK_OFFSET(0x1DF35710)
#define PGNEMAJPKND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF35A90)
#define PGNEMAJPKND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF35E30)
#define PGNEMAJPKND_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF35670)
#define PGNEMAJPKND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF35630)
#define PGNEMAJPKND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF35620)
#define PGNEMAJPKND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF35800)
#define PGNEMAJPKND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF35720)
#define PGNEMAJPKND_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF356D0)
#define PGNEMAJPKND_FOIJJJCIFAC_OFFSET UNITYSDK_OFFSET(0x1DF356E0)
#define PGNEMAJPKND_GDKMJHDEMHI_OFFSET UNITYSDK_OFFSET(0x1DF356F0)
#define PGNEMAJPKND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF358D0)
#define PGNEMAJPKND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF355E0)
#define PGNEMAJPKND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF35C70)
#define PGNEMAJPKND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF35C20)
#define PGNEMAJPKND_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF356C0)
#define PGNEMAJPKND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF35610)
#define PGNEMAJPKND_PIJBAGHLHFE_OFFSET UNITYSDK_OFFSET(0x1DF35700)
#define PGNEMAJPKND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF35900)
#define PGNEMAJPKND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF35960)

	class PGNEMAJPKND : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 LHNBGHCAICH; // 0x1C
		::System::UInt32 JKFAONHBBEG; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PGNEMAJPKND")->GetStaticField(0x3E7F0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LKJMIMGEBFO; // 0x0
		// static const ::System::Object FAFFHPGKOLG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNEMAJPKND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PGNEMAJPKND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGNEMAJPKND*))((::PBYTE)hIl2Cpp + PGNEMAJPKND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGNEMAJPKND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PGNEMAJPKND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNEMAJPKND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PGNEMAJPKND* Clone()
		{
			return ((::PGNEMAJPKND*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNEMAJPKND_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNEMAJPKND_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGNEMAJPKND_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 FOIJJJCIFAC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNEMAJPKND_FOIJJJCIFAC_OFFSET))(this);
		}

		::System::Void GDKMJHDEMHI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGNEMAJPKND_GDKMJHDEMHI_OFFSET))(this, a1);
		}

		::System::UInt32 PIJBAGHLHFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNEMAJPKND_PIJBAGHLHFE_OFFSET))(this);
		}

		::System::Void BNHNJHIOLNP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGNEMAJPKND_BNHNJHIOLNP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGNEMAJPKND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PGNEMAJPKND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PGNEMAJPKND*))((::PBYTE)hIl2Cpp + PGNEMAJPKND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNEMAJPKND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNEMAJPKND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PGNEMAJPKND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNEMAJPKND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PGNEMAJPKND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGNEMAJPKND*))((::PBYTE)hIl2Cpp + PGNEMAJPKND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PGNEMAJPKND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
