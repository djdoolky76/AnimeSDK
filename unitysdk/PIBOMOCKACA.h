#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIBOMOCKACA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIBOMOCKACA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F2126B0)
#define PIBOMOCKACA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2128D0)
#define PIBOMOCKACA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F2122A0)
#define PIBOMOCKACA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F212270)
#define PIBOMOCKACA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F212260)
#define PIBOMOCKACA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F212430)
#define PIBOMOCKACA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F212330)
#define PIBOMOCKACA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F2125A0)
#define PIBOMOCKACA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F2121F0)
#define PIBOMOCKACA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F212770)
#define PIBOMOCKACA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F212740)
#define PIBOMOCKACA_NKNEBECLBOF_OFFSET UNITYSDK_OFFSET(0x1F212320)
#define PIBOMOCKACA_OGFEKBBBEMA_OFFSET UNITYSDK_OFFSET(0x1F212310)
#define PIBOMOCKACA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F212250)
#define PIBOMOCKACA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F2125D0)
#define PIBOMOCKACA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F212630)

inline static constexpr unsigned int PIBOMOCKACA_TypeDefinitionIndex = 33982;

	class PIBOMOCKACA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OJGKLENJPDA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PIBOMOCKACA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PIBOMOCKACA*>**)UnitySDK::FromName("", "PIBOMOCKACA")->GetStaticField(0x36F30);
		}

		// static const ::System::Object EEMPBGGOLOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBOMOCKACA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIBOMOCKACA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIBOMOCKACA*))((::PBYTE)hIl2Cpp + PIBOMOCKACA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIBOMOCKACA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PIBOMOCKACA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PIBOMOCKACA*>*(*)())((::PBYTE)hIl2Cpp + PIBOMOCKACA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBOMOCKACA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIBOMOCKACA* Clone()
		{
			return ((::PIBOMOCKACA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBOMOCKACA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OGFEKBBBEMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBOMOCKACA_OGFEKBBBEMA_OFFSET))(this);
		}

		::System::Void NKNEBECLBOF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIBOMOCKACA_NKNEBECLBOF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIBOMOCKACA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIBOMOCKACA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIBOMOCKACA*))((::PBYTE)hIl2Cpp + PIBOMOCKACA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBOMOCKACA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBOMOCKACA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIBOMOCKACA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBOMOCKACA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIBOMOCKACA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIBOMOCKACA*))((::PBYTE)hIl2Cpp + PIBOMOCKACA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIBOMOCKACA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
