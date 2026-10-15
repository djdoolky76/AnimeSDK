#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBIFLFMNLEJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBIFLFMNLEJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAA4F00)
#define NBIFLFMNLEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAA5160)
#define NBIFLFMNLEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAA4B10)
#define NBIFLFMNLEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAA4AD0)
#define NBIFLFMNLEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA4AC0)
#define NBIFLFMNLEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAA4C80)
#define NBIFLFMNLEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAA4BA0)
#define NBIFLFMNLEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAA4D60)
#define NBIFLFMNLEJ_GNJHDBGBCBL_OFFSET UNITYSDK_OFFSET(0x1EAA4B90)
#define NBIFLFMNLEJ_HGACDJJMLCK_OFFSET UNITYSDK_OFFSET(0x1EAA4B60)
#define NBIFLFMNLEJ_IEIAADAJHOL_OFFSET UNITYSDK_OFFSET(0x1EAA4B80)
#define NBIFLFMNLEJ_IFEBJOLPONJ_OFFSET UNITYSDK_OFFSET(0x1EAA4B70)
#define NBIFLFMNLEJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAA4A80)
#define NBIFLFMNLEJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAA4FE0)
#define NBIFLFMNLEJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAA4FA0)
#define NBIFLFMNLEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAA4AB0)
#define NBIFLFMNLEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAA4D90)
#define NBIFLFMNLEJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAA4DF0)

inline static constexpr unsigned int NBIFLFMNLEJ_TypeDefinitionIndex = 31908;

	class NBIFLFMNLEJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GGKMDMICMCP; // 0x18
		::System::Boolean GEIKIKJPHAE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NBIFLFMNLEJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NBIFLFMNLEJ*>**)UnitySDK::FromName("", "NBIFLFMNLEJ")->GetStaticField(0x5E070);
		}

		// static const ::System::Object LEIGKMCKFHC; // 0x0
		// static const ::System::Object NMCANELKJNL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBIFLFMNLEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIFLFMNLEJ*))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NBIFLFMNLEJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NBIFLFMNLEJ*>*(*)())((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBIFLFMNLEJ* Clone()
		{
			return ((::NBIFLFMNLEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 HGACDJJMLCK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_HGACDJJMLCK_OFFSET))(this);
		}

		::System::Void IFEBJOLPONJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_IFEBJOLPONJ_OFFSET))(this, a1);
		}

		::System::Boolean IEIAADAJHOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_IEIAADAJHOL_OFFSET))(this);
		}

		::System::Void GNJHDBGBCBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_GNJHDBGBCBL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBIFLFMNLEJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBIFLFMNLEJ*))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBIFLFMNLEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIFLFMNLEJ*))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
