#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBFAGOOJIOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBFAGOOJIOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EACFEF0)
#define NBFAGOOJIOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD0110)
#define NBFAGOOJIOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EACFB40)
#define NBFAGOOJIOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EACFB10)
#define NBFAGOOJIOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EACFB00)
#define NBFAGOOJIOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EACFC70)
#define NBFAGOOJIOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EACFBA0)
#define NBFAGOOJIOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EACFDE0)
#define NBFAGOOJIOB_HKLHGBLHAHH_OFFSET UNITYSDK_OFFSET(0x1EACFB80)
#define NBFAGOOJIOB_JBEDMBMCBME_OFFSET UNITYSDK_OFFSET(0x1EACFB90)
#define NBFAGOOJIOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EACFAC0)
#define NBFAGOOJIOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EACFFB0)
#define NBFAGOOJIOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EACFF80)
#define NBFAGOOJIOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EACFAF0)
#define NBFAGOOJIOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EACFE10)
#define NBFAGOOJIOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EACFE70)

inline static constexpr unsigned int NBFAGOOJIOB_TypeDefinitionIndex = 33103;

	class NBFAGOOJIOB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LCNCDNFDOKM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NBFAGOOJIOB")->GetStaticField(0x5CE60);
		}

		// static const ::System::Object HCDFHDMONPM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFAGOOJIOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBFAGOOJIOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBFAGOOJIOB*))((::PBYTE)hIl2Cpp + NBFAGOOJIOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBFAGOOJIOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NBFAGOOJIOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFAGOOJIOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBFAGOOJIOB* Clone()
		{
			return ((::NBFAGOOJIOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFAGOOJIOB_CLONE_OFFSET))(this);
		}

		::System::UInt32 HKLHGBLHAHH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFAGOOJIOB_HKLHGBLHAHH_OFFSET))(this);
		}

		::System::Void JBEDMBMCBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBFAGOOJIOB_JBEDMBMCBME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBFAGOOJIOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBFAGOOJIOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBFAGOOJIOB*))((::PBYTE)hIl2Cpp + NBFAGOOJIOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFAGOOJIOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFAGOOJIOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBFAGOOJIOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFAGOOJIOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBFAGOOJIOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBFAGOOJIOB*))((::PBYTE)hIl2Cpp + NBFAGOOJIOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBFAGOOJIOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
