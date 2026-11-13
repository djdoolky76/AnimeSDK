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

#define NBIFLFMNLEJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2015C5C0)
#define NBIFLFMNLEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x2015C820)
#define NBIFLFMNLEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x2015C1D0)
#define NBIFLFMNLEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2015C190)
#define NBIFLFMNLEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x2015C180)
#define NBIFLFMNLEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2015C340)
#define NBIFLFMNLEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x2015C260)
#define NBIFLFMNLEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2015C420)
#define NBIFLFMNLEJ_GNJHDBGBCBL_OFFSET UNITYSDK_OFFSET(0x2015C250)
#define NBIFLFMNLEJ_HGACDJJMLCK_OFFSET UNITYSDK_OFFSET(0x2015C220)
#define NBIFLFMNLEJ_IEIAADAJHOL_OFFSET UNITYSDK_OFFSET(0x2015C240)
#define NBIFLFMNLEJ_IFEBJOLPONJ_OFFSET UNITYSDK_OFFSET(0x2015C230)
#define NBIFLFMNLEJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2015C140)
#define NBIFLFMNLEJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2015C6A0)
#define NBIFLFMNLEJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2015C660)
#define NBIFLFMNLEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2015C170)
#define NBIFLFMNLEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2015C450)
#define NBIFLFMNLEJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x2015C4B0)

inline static constexpr unsigned int NBIFLFMNLEJ_TypeDefinitionIndex = 32821;

	class NBIFLFMNLEJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean GEIKIKJPHAE; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GGKMDMICMCP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NBIFLFMNLEJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NBIFLFMNLEJ*>**)UnitySDK::FromName("", "NBIFLFMNLEJ")->GetStaticField(0x58C50);
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
