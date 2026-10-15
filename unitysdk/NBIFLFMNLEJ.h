#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBIFLFMNLEJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBIFLFMNLEJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAD2590)
#define NBIFLFMNLEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD27F0)
#define NBIFLFMNLEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAD21A0)
#define NBIFLFMNLEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAD2160)
#define NBIFLFMNLEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD2150)
#define NBIFLFMNLEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAD2310)
#define NBIFLFMNLEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAD2230)
#define NBIFLFMNLEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAD23F0)
#define NBIFLFMNLEJ_GNJHDBGBCBL_OFFSET UNITYSDK_OFFSET(0x1EAD2220)
#define NBIFLFMNLEJ_HGACDJJMLCK_OFFSET UNITYSDK_OFFSET(0x1EAD21F0)
#define NBIFLFMNLEJ_IEIAADAJHOL_OFFSET UNITYSDK_OFFSET(0x1EAD2210)
#define NBIFLFMNLEJ_IFEBJOLPONJ_OFFSET UNITYSDK_OFFSET(0x1EAD2200)
#define NBIFLFMNLEJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAD2110)
#define NBIFLFMNLEJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAD2670)
#define NBIFLFMNLEJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAD2630)
#define NBIFLFMNLEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAD2140)
#define NBIFLFMNLEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAD2420)
#define NBIFLFMNLEJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAD2480)

inline static constexpr unsigned int NBIFLFMNLEJ_TypeDefinitionIndex = 31908;

	class NBIFLFMNLEJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean GEIKIKJPHAE; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GGKMDMICMCP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NBIFLFMNLEJ")->GetStaticField(0x5CF50);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NBIFLFMNLEJ_JJGHOBBFNJD_OFFSET))();
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
