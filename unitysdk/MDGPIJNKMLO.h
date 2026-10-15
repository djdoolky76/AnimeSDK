#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDGPIJNKMLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MDGPIJNKMLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA03280)
#define MDGPIJNKMLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA03320)
#define MDGPIJNKMLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA02F70)
#define MDGPIJNKMLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA02F40)
#define MDGPIJNKMLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA02F30)
#define MDGPIJNKMLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA03080)
#define MDGPIJNKMLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA02FB0)
#define MDGPIJNKMLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA031E0)
#define MDGPIJNKMLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA02EF0)
#define MDGPIJNKMLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA032D0)
#define MDGPIJNKMLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA032A0)
#define MDGPIJNKMLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA02F20)
#define MDGPIJNKMLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA03210)
#define MDGPIJNKMLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA03270)

inline static constexpr unsigned int MDGPIJNKMLO_TypeDefinitionIndex = 30525;

	class MDGPIJNKMLO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MDGPIJNKMLO")->GetStaticField(0x495D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGPIJNKMLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MDGPIJNKMLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDGPIJNKMLO*))((::PBYTE)hIl2Cpp + MDGPIJNKMLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDGPIJNKMLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MDGPIJNKMLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGPIJNKMLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MDGPIJNKMLO* Clone()
		{
			return ((::MDGPIJNKMLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGPIJNKMLO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDGPIJNKMLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MDGPIJNKMLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MDGPIJNKMLO*))((::PBYTE)hIl2Cpp + MDGPIJNKMLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGPIJNKMLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGPIJNKMLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MDGPIJNKMLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGPIJNKMLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MDGPIJNKMLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDGPIJNKMLO*))((::PBYTE)hIl2Cpp + MDGPIJNKMLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MDGPIJNKMLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
