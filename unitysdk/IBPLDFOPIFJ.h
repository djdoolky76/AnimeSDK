#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBPLDFOPIFJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBPLDFOPIFJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5EF330)
#define IBPLDFOPIFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5EF6B0)
#define IBPLDFOPIFJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5EEDB0)
#define IBPLDFOPIFJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5EED60)
#define IBPLDFOPIFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EED50)
#define IBPLDFOPIFJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5EEFC0)
#define IBPLDFOPIFJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5EEEB0)
#define IBPLDFOPIFJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5EEE20)
#define IBPLDFOPIFJ_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E5EEE30)
#define IBPLDFOPIFJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5EF0D0)
#define IBPLDFOPIFJ_GKBBEGDGBFP_OFFSET UNITYSDK_OFFSET(0x1E5EEE50)
#define IBPLDFOPIFJ_HPAKFNCJOLM_OFFSET UNITYSDK_OFFSET(0x1E5EEE60)
#define IBPLDFOPIFJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5EED10)
#define IBPLDFOPIFJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5EF4E0)
#define IBPLDFOPIFJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5EF480)
#define IBPLDFOPIFJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5EEE10)
#define IBPLDFOPIFJ_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E5EEE40)
#define IBPLDFOPIFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5EED40)
#define IBPLDFOPIFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5EF180)
#define IBPLDFOPIFJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5EF1E0)

inline static constexpr unsigned int IBPLDFOPIFJ_TypeDefinitionIndex = 31414;

	class IBPLDFOPIFJ : public ::System::Object
	{
	public:
		::System::String* EJKCCIFEGPO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 OPPNMFMNMGC; // 0x24
		static ::Google::Protobuf::MessageParser_1<::IBPLDFOPIFJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IBPLDFOPIFJ*>**)UnitySDK::FromName("", "IBPLDFOPIFJ")->GetStaticField(0x440E0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object AIOGHGMADFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBPLDFOPIFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBPLDFOPIFJ*))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IBPLDFOPIFJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IBPLDFOPIFJ*>*(*)())((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBPLDFOPIFJ* Clone()
		{
			return ((::IBPLDFOPIFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::String* GKBBEGDGBFP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_GKBBEGDGBFP_OFFSET))(this);
		}

		::System::Void HPAKFNCJOLM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_HPAKFNCJOLM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBPLDFOPIFJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBPLDFOPIFJ*))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBPLDFOPIFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBPLDFOPIFJ*))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
