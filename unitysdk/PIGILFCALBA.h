#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIGILFCALBA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIGILFCALBA_APMIGLEIMMO_OFFSET UNITYSDK_OFFSET(0x2054CE40)
#define PIGILFCALBA_BNIPKJKBICO_OFFSET UNITYSDK_OFFSET(0x2054CEC0)
#define PIGILFCALBA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2054D360)
#define PIGILFCALBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x2054D700)
#define PIGILFCALBA_CLILNPACBJG_OFFSET UNITYSDK_OFFSET(0x2054CEB0)
#define PIGILFCALBA_CLONE_OFFSET UNITYSDK_OFFSET(0x2054CDD0)
#define PIGILFCALBA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2054CD80)
#define PIGILFCALBA_CTOR_OFFSET UNITYSDK_OFFSET(0x2054CD70)
#define PIGILFCALBA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2054CFE0)
#define PIGILFCALBA_EQUALS_OFFSET UNITYSDK_OFFSET(0x2054CED0)
#define PIGILFCALBA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x2054CEA0)
#define PIGILFCALBA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2054D0F0)
#define PIGILFCALBA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2054CD30)
#define PIGILFCALBA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2054D530)
#define PIGILFCALBA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2054D4D0)
#define PIGILFCALBA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x2054CE90)
#define PIGILFCALBA_OEEAMGALALP_OFFSET UNITYSDK_OFFSET(0x2054CE30)
#define PIGILFCALBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2054CD60)
#define PIGILFCALBA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2054D1B0)
#define PIGILFCALBA_WRITETO_OFFSET UNITYSDK_OFFSET(0x2054D210)

inline static constexpr unsigned int PIGILFCALBA_TypeDefinitionIndex = 28345;

	class PIGILFCALBA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* LKGNNEIDBII; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 IPFHHCHDDAC; // 0x24
		static ::Google::Protobuf::MessageParser_1<::PIGILFCALBA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PIGILFCALBA*>**)UnitySDK::FromName("", "PIGILFCALBA")->GetStaticField(0x3BD20);
		}

		// static const ::System::Object EPNLPKGNFCM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NPNONCLADFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGILFCALBA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIGILFCALBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIGILFCALBA*))((::PBYTE)hIl2Cpp + PIGILFCALBA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIGILFCALBA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PIGILFCALBA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PIGILFCALBA*>*(*)())((::PBYTE)hIl2Cpp + PIGILFCALBA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGILFCALBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIGILFCALBA* Clone()
		{
			return ((::PIGILFCALBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGILFCALBA_CLONE_OFFSET))(this);
		}

		::System::String* OEEAMGALALP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGILFCALBA_OEEAMGALALP_OFFSET))(this);
		}

		::System::Void APMIGLEIMMO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PIGILFCALBA_APMIGLEIMMO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGILFCALBA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIGILFCALBA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 CLILNPACBJG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGILFCALBA_CLILNPACBJG_OFFSET))(this);
		}

		::System::Void BNIPKJKBICO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIGILFCALBA_BNIPKJKBICO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIGILFCALBA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIGILFCALBA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIGILFCALBA*))((::PBYTE)hIl2Cpp + PIGILFCALBA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGILFCALBA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGILFCALBA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIGILFCALBA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGILFCALBA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIGILFCALBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIGILFCALBA*))((::PBYTE)hIl2Cpp + PIGILFCALBA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIGILFCALBA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
