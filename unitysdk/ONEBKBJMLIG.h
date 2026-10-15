#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONEBKBJMLIG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONEBKBJMLIG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEC3680)
#define ONEBKBJMLIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC3720)
#define ONEBKBJMLIG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEC3370)
#define ONEBKBJMLIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEC3340)
#define ONEBKBJMLIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC3330)
#define ONEBKBJMLIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEC3480)
#define ONEBKBJMLIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEC33B0)
#define ONEBKBJMLIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEC35E0)
#define ONEBKBJMLIG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEC32F0)
#define ONEBKBJMLIG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEC36D0)
#define ONEBKBJMLIG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEC36A0)
#define ONEBKBJMLIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEC3320)
#define ONEBKBJMLIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEC3610)
#define ONEBKBJMLIG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEC3670)

	class ONEBKBJMLIG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ONEBKBJMLIG")->GetStaticField(0x2C0B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEBKBJMLIG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONEBKBJMLIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONEBKBJMLIG*))((::PBYTE)hIl2Cpp + ONEBKBJMLIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONEBKBJMLIG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ONEBKBJMLIG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEBKBJMLIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONEBKBJMLIG* Clone()
		{
			return ((::ONEBKBJMLIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEBKBJMLIG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONEBKBJMLIG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONEBKBJMLIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONEBKBJMLIG*))((::PBYTE)hIl2Cpp + ONEBKBJMLIG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEBKBJMLIG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEBKBJMLIG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONEBKBJMLIG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEBKBJMLIG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONEBKBJMLIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONEBKBJMLIG*))((::PBYTE)hIl2Cpp + ONEBKBJMLIG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONEBKBJMLIG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
