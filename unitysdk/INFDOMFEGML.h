#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INFDOMFEGML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define INFDOMFEGML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6C0DF0)
#define INFDOMFEGML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C1010)
#define INFDOMFEGML_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6C0A40)
#define INFDOMFEGML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6C0A10)
#define INFDOMFEGML_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C0A00)
#define INFDOMFEGML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6C0B70)
#define INFDOMFEGML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6C0AA0)
#define INFDOMFEGML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6C0CE0)
#define INFDOMFEGML_IFMBKPGIIOJ_OFFSET UNITYSDK_OFFSET(0x1E6C0A90)
#define INFDOMFEGML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6C09C0)
#define INFDOMFEGML_KHEHIJFJMIH_OFFSET UNITYSDK_OFFSET(0x1E6C0A80)
#define INFDOMFEGML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6C0EB0)
#define INFDOMFEGML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6C0E80)
#define INFDOMFEGML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6C09F0)
#define INFDOMFEGML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6C0D10)
#define INFDOMFEGML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6C0D70)

	class INFDOMFEGML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OEIJJLNNBHF; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "INFDOMFEGML")->GetStaticField(0x58270);
		}

		// static const ::System::Object BLNDLLNEPII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFDOMFEGML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INFDOMFEGML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INFDOMFEGML*))((::PBYTE)hIl2Cpp + INFDOMFEGML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INFDOMFEGML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + INFDOMFEGML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INFDOMFEGML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INFDOMFEGML* Clone()
		{
			return ((::INFDOMFEGML*(*)(::PVOID))((::PBYTE)hIl2Cpp + INFDOMFEGML_CLONE_OFFSET))(this);
		}

		::System::UInt32 KHEHIJFJMIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INFDOMFEGML_KHEHIJFJMIH_OFFSET))(this);
		}

		::System::Void IFMBKPGIIOJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INFDOMFEGML_IFMBKPGIIOJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INFDOMFEGML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INFDOMFEGML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INFDOMFEGML*))((::PBYTE)hIl2Cpp + INFDOMFEGML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INFDOMFEGML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INFDOMFEGML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INFDOMFEGML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INFDOMFEGML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INFDOMFEGML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INFDOMFEGML*))((::PBYTE)hIl2Cpp + INFDOMFEGML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INFDOMFEGML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
