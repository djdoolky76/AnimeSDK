#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKOEAOPNEAC;
class NBDKNCJGOMN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBDKNCJGOMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EACEAC0)
#define NBDKNCJGOMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EACEDE0)
#define NBDKNCJGOMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EACE580)
#define NBDKNCJGOMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EACE510)
#define NBDKNCJGOMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EACE500)
#define NBDKNCJGOMN_EAEMJJKEGJJ_OFFSET UNITYSDK_OFFSET(0x1EACE620)
#define NBDKNCJGOMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EACE7C0)
#define NBDKNCJGOMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EACE640)
#define NBDKNCJGOMN_FJLDGDMODJG_OFFSET UNITYSDK_OFFSET(0x1EACE610)
#define NBDKNCJGOMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EACE940)
#define NBDKNCJGOMN_HGDGANGFNNE_OFFSET UNITYSDK_OFFSET(0x1EACE630)
#define NBDKNCJGOMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EACE4C0)
#define NBDKNCJGOMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EACEC20)
#define NBDKNCJGOMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EACEB90)
#define NBDKNCJGOMN_NFCBGMIJEMN_OFFSET UNITYSDK_OFFSET(0x1EACE600)
#define NBDKNCJGOMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EACE4F0)
#define NBDKNCJGOMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EACE980)
#define NBDKNCJGOMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EACE9E0)

inline static constexpr unsigned int NBDKNCJGOMN_TypeDefinitionIndex = 33926;

	class NBDKNCJGOMN : public ::System::Object
	{
	public:
		::HKOEAOPNEAC* AAHFBGDFEEF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 POPPNJDMNAF; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NBDKNCJGOMN")->GetStaticField(0x5CDD0);
		}

		// static const ::System::Object IIFBFKNBFAA; // 0x0
		// static const ::System::Object ANLLGHKJCIB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDKNCJGOMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBDKNCJGOMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBDKNCJGOMN*))((::PBYTE)hIl2Cpp + NBDKNCJGOMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBDKNCJGOMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NBDKNCJGOMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDKNCJGOMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBDKNCJGOMN* Clone()
		{
			return ((::NBDKNCJGOMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDKNCJGOMN_CLONE_OFFSET))(this);
		}

		::System::UInt32 NFCBGMIJEMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDKNCJGOMN_NFCBGMIJEMN_OFFSET))(this);
		}

		::System::Void FJLDGDMODJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBDKNCJGOMN_FJLDGDMODJG_OFFSET))(this, a1);
		}

		::HKOEAOPNEAC* EAEMJJKEGJJ()
		{
			return ((::HKOEAOPNEAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDKNCJGOMN_EAEMJJKEGJJ_OFFSET))(this);
		}

		::System::Void HGDGANGFNNE(::HKOEAOPNEAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKOEAOPNEAC*))((::PBYTE)hIl2Cpp + NBDKNCJGOMN_HGDGANGFNNE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBDKNCJGOMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBDKNCJGOMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBDKNCJGOMN*))((::PBYTE)hIl2Cpp + NBDKNCJGOMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDKNCJGOMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDKNCJGOMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBDKNCJGOMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDKNCJGOMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBDKNCJGOMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBDKNCJGOMN*))((::PBYTE)hIl2Cpp + NBDKNCJGOMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBDKNCJGOMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
