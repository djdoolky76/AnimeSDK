#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANDPLLAKCLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANDPLLAKCLE_BEPKKOHEOGL_OFFSET UNITYSDK_OFFSET(0x1E529E60)
#define ANDPLLAKCLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E52A1D0)
#define ANDPLLAKCLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52A3F0)
#define ANDPLLAKCLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E529E20)
#define ANDPLLAKCLE_CMPAPOLKDMI_OFFSET UNITYSDK_OFFSET(0x1E529E70)
#define ANDPLLAKCLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E529DF0)
#define ANDPLLAKCLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E529DE0)
#define ANDPLLAKCLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E529F50)
#define ANDPLLAKCLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E529E80)
#define ANDPLLAKCLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E52A0C0)
#define ANDPLLAKCLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E529DA0)
#define ANDPLLAKCLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E52A290)
#define ANDPLLAKCLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E52A260)
#define ANDPLLAKCLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E529DD0)
#define ANDPLLAKCLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E52A0F0)
#define ANDPLLAKCLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E52A150)

	class ANDPLLAKCLE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BMGMACIBMFH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ANDPLLAKCLE")->GetStaticField(0x3D970);
		}

		// static const ::System::Object FPEDPMAHHND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDPLLAKCLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANDPLLAKCLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANDPLLAKCLE*))((::PBYTE)hIl2Cpp + ANDPLLAKCLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANDPLLAKCLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ANDPLLAKCLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDPLLAKCLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANDPLLAKCLE* Clone()
		{
			return ((::ANDPLLAKCLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDPLLAKCLE_CLONE_OFFSET))(this);
		}

		::System::UInt32 BEPKKOHEOGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDPLLAKCLE_BEPKKOHEOGL_OFFSET))(this);
		}

		::System::Void CMPAPOLKDMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANDPLLAKCLE_CMPAPOLKDMI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANDPLLAKCLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANDPLLAKCLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANDPLLAKCLE*))((::PBYTE)hIl2Cpp + ANDPLLAKCLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDPLLAKCLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDPLLAKCLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANDPLLAKCLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDPLLAKCLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANDPLLAKCLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANDPLLAKCLE*))((::PBYTE)hIl2Cpp + ANDPLLAKCLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANDPLLAKCLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
