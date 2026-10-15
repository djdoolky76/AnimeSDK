#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDLBEEMAABE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BDLBEEMAABE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E91A210)
#define BDLBEEMAABE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E91A4E0)
#define BDLBEEMAABE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E919E60)
#define BDLBEEMAABE_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E919EB0)
#define BDLBEEMAABE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E919E30)
#define BDLBEEMAABE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E919E20)
#define BDLBEEMAABE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E919FD0)
#define BDLBEEMAABE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E919EF0)
#define BDLBEEMAABE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E91A0A0)
#define BDLBEEMAABE_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E919EC0)
#define BDLBEEMAABE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E919DE0)
#define BDLBEEMAABE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E91A360)
#define BDLBEEMAABE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E91A320)
#define BDLBEEMAABE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E919E10)
#define BDLBEEMAABE_PICEABANDOD_OFFSET UNITYSDK_OFFSET(0x1E919ED0)
#define BDLBEEMAABE_PNDKIIBELNJ_OFFSET UNITYSDK_OFFSET(0x1E919EE0)
#define BDLBEEMAABE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E91A0D0)
#define BDLBEEMAABE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E91A130)

inline static constexpr unsigned int BDLBEEMAABE_TypeDefinitionIndex = 31928;

	class BDLBEEMAABE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BLCBGABKKMO; // 0x18
		::System::UInt32 KJAENGKDFJD; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BDLBEEMAABE")->GetStaticField(0x3E2D0);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object KDHAGMBAEFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLBEEMAABE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BDLBEEMAABE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDLBEEMAABE*))((::PBYTE)hIl2Cpp + BDLBEEMAABE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDLBEEMAABE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BDLBEEMAABE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLBEEMAABE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BDLBEEMAABE* Clone()
		{
			return ((::BDLBEEMAABE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLBEEMAABE_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLBEEMAABE_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDLBEEMAABE_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 PICEABANDOD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLBEEMAABE_PICEABANDOD_OFFSET))(this);
		}

		::System::Void PNDKIIBELNJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDLBEEMAABE_PNDKIIBELNJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDLBEEMAABE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BDLBEEMAABE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDLBEEMAABE*))((::PBYTE)hIl2Cpp + BDLBEEMAABE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLBEEMAABE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLBEEMAABE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BDLBEEMAABE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLBEEMAABE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BDLBEEMAABE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDLBEEMAABE*))((::PBYTE)hIl2Cpp + BDLBEEMAABE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BDLBEEMAABE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
