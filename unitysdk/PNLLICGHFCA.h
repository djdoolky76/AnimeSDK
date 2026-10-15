#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNLLICGHFCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNLLICGHFCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFBDF30)
#define PNLLICGHFCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFBE300)
#define PNLLICGHFCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFBDAE0)
#define PNLLICGHFCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFBDAA0)
#define PNLLICGHFCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBDA90)
#define PNLLICGHFCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFBDC70)
#define PNLLICGHFCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFBDB90)
#define PNLLICGHFCA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DFBDB80)
#define PNLLICGHFCA_FGGBMGCGCKF_OFFSET UNITYSDK_OFFSET(0x1DFBDB40)
#define PNLLICGHFCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFBDD50)
#define PNLLICGHFCA_JAOPBIKPOMI_OFFSET UNITYSDK_OFFSET(0x1DFBDB30)
#define PNLLICGHFCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFBDA50)
#define PNLLICGHFCA_LKBDNLAMPPG_OFFSET UNITYSDK_OFFSET(0x1DFBDB60)
#define PNLLICGHFCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFBE160)
#define PNLLICGHFCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFBE110)
#define PNLLICGHFCA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DFBDB70)
#define PNLLICGHFCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFBDA80)
#define PNLLICGHFCA_PFNPJNPKHHG_OFFSET UNITYSDK_OFFSET(0x1DFBDB50)
#define PNLLICGHFCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFBDD90)
#define PNLLICGHFCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFBDDF0)

inline static constexpr unsigned int PNLLICGHFCA_TypeDefinitionIndex = 31223;

	class PNLLICGHFCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 AENFHPAGFOI; // 0x1C
		::System::UInt64 BHDCGBNFPKI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PNLLICGHFCA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PNLLICGHFCA*>**)UnitySDK::FromName("", "PNLLICGHFCA")->GetStaticField(0x51BE0);
		}

		// static const ::System::Object HLGEDBNIHII; // 0x0
		// static const ::System::Object KGAMBJABCOJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLICGHFCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNLLICGHFCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNLLICGHFCA*))((::PBYTE)hIl2Cpp + PNLLICGHFCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNLLICGHFCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PNLLICGHFCA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PNLLICGHFCA*>*(*)())((::PBYTE)hIl2Cpp + PNLLICGHFCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLICGHFCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNLLICGHFCA* Clone()
		{
			return ((::PNLLICGHFCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLICGHFCA_CLONE_OFFSET))(this);
		}

		::System::UInt32 JAOPBIKPOMI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLICGHFCA_JAOPBIKPOMI_OFFSET))(this);
		}

		::System::Void FGGBMGCGCKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNLLICGHFCA_FGGBMGCGCKF_OFFSET))(this, a1);
		}

		::System::UInt64 PFNPJNPKHHG()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLICGHFCA_PFNPJNPKHHG_OFFSET))(this);
		}

		::System::Void LKBDNLAMPPG(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PNLLICGHFCA_LKBDNLAMPPG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLICGHFCA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNLLICGHFCA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNLLICGHFCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNLLICGHFCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNLLICGHFCA*))((::PBYTE)hIl2Cpp + PNLLICGHFCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLICGHFCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLICGHFCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNLLICGHFCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLICGHFCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNLLICGHFCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNLLICGHFCA*))((::PBYTE)hIl2Cpp + PNLLICGHFCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNLLICGHFCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
