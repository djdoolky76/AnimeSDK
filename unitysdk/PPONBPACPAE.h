#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPONBPACPAE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PPONBPACPAE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFE1E80)
#define PPONBPACPAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE1F20)
#define PPONBPACPAE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFE1B70)
#define PPONBPACPAE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFE1B40)
#define PPONBPACPAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE1B30)
#define PPONBPACPAE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFE1C80)
#define PPONBPACPAE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFE1BB0)
#define PPONBPACPAE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFE1DE0)
#define PPONBPACPAE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFE1AF0)
#define PPONBPACPAE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFE1ED0)
#define PPONBPACPAE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFE1EA0)
#define PPONBPACPAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFE1B20)
#define PPONBPACPAE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFE1E10)
#define PPONBPACPAE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFE1E70)

	class PPONBPACPAE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PPONBPACPAE")->GetStaticField(0x43870);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPONBPACPAE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PPONBPACPAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPONBPACPAE*))((::PBYTE)hIl2Cpp + PPONBPACPAE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPONBPACPAE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PPONBPACPAE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPONBPACPAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PPONBPACPAE* Clone()
		{
			return ((::PPONBPACPAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPONBPACPAE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPONBPACPAE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PPONBPACPAE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPONBPACPAE*))((::PBYTE)hIl2Cpp + PPONBPACPAE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPONBPACPAE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPONBPACPAE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PPONBPACPAE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPONBPACPAE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PPONBPACPAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPONBPACPAE*))((::PBYTE)hIl2Cpp + PPONBPACPAE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PPONBPACPAE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
