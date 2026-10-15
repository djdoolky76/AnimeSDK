#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBNDHIOAMDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBNDHIOAMDF_BIOOHPIHADO_OFFSET UNITYSDK_OFFSET(0x1E433230)
#define GBNDHIOAMDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4335A0)
#define GBNDHIOAMDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4337C0)
#define GBNDHIOAMDF_CLCNPIJOIBL_OFFSET UNITYSDK_OFFSET(0x1E433240)
#define GBNDHIOAMDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4331F0)
#define GBNDHIOAMDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4331C0)
#define GBNDHIOAMDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4331B0)
#define GBNDHIOAMDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E433320)
#define GBNDHIOAMDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E433250)
#define GBNDHIOAMDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E433490)
#define GBNDHIOAMDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E433170)
#define GBNDHIOAMDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E433660)
#define GBNDHIOAMDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E433630)
#define GBNDHIOAMDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4331A0)
#define GBNDHIOAMDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4334C0)
#define GBNDHIOAMDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E433520)

inline static constexpr unsigned int GBNDHIOAMDF_TypeDefinitionIndex = 27255;

	class GBNDHIOAMDF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MGPCOLIAECE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GBNDHIOAMDF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBNDHIOAMDF*>**)UnitySDK::FromName("", "GBNDHIOAMDF")->GetStaticField(0xDFA0);
		}

		// static const ::System::Object BOGFCKKNGJB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNDHIOAMDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBNDHIOAMDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBNDHIOAMDF*))((::PBYTE)hIl2Cpp + GBNDHIOAMDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBNDHIOAMDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GBNDHIOAMDF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GBNDHIOAMDF*>*(*)())((::PBYTE)hIl2Cpp + GBNDHIOAMDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNDHIOAMDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBNDHIOAMDF* Clone()
		{
			return ((::GBNDHIOAMDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNDHIOAMDF_CLONE_OFFSET))(this);
		}

		::System::UInt32 BIOOHPIHADO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNDHIOAMDF_BIOOHPIHADO_OFFSET))(this);
		}

		::System::Void CLCNPIJOIBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBNDHIOAMDF_CLCNPIJOIBL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBNDHIOAMDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBNDHIOAMDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBNDHIOAMDF*))((::PBYTE)hIl2Cpp + GBNDHIOAMDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNDHIOAMDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNDHIOAMDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBNDHIOAMDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNDHIOAMDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBNDHIOAMDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBNDHIOAMDF*))((::PBYTE)hIl2Cpp + GBNDHIOAMDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBNDHIOAMDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
