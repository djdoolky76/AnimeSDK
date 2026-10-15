#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOIGMDLPHOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OOIGMDLPHOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEAAB80)
#define OOIGMDLPHOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEAAE50)
#define OOIGMDLPHOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEAA7D0)
#define OOIGMDLPHOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEAA7A0)
#define OOIGMDLPHOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAA790)
#define OOIGMDLPHOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEAA940)
#define OOIGMDLPHOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEAA860)
#define OOIGMDLPHOD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEAA830)
#define OOIGMDLPHOD_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1DEAA840)
#define OOIGMDLPHOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEAAA10)
#define OOIGMDLPHOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEAA750)
#define OOIGMDLPHOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEAACD0)
#define OOIGMDLPHOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEAAC90)
#define OOIGMDLPHOD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEAA820)
#define OOIGMDLPHOD_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1DEAA850)
#define OOIGMDLPHOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEAA780)
#define OOIGMDLPHOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEAAA40)
#define OOIGMDLPHOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEAAAA0)

inline static constexpr unsigned int OOIGMDLPHOD_TypeDefinitionIndex = 31418;

	class OOIGMDLPHOD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 OPPNMFMNMGC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OOIGMDLPHOD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OOIGMDLPHOD*>**)UnitySDK::FromName("", "OOIGMDLPHOD")->GetStaticField(0x2A030);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OOIGMDLPHOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOIGMDLPHOD*))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOIGMDLPHOD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OOIGMDLPHOD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OOIGMDLPHOD*>*(*)())((::PBYTE)hIl2Cpp + OOIGMDLPHOD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OOIGMDLPHOD* Clone()
		{
			return ((::OOIGMDLPHOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OOIGMDLPHOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OOIGMDLPHOD*))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OOIGMDLPHOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOIGMDLPHOD*))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OOIGMDLPHOD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
