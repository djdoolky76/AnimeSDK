#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPGACAHCFP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NHPGACAHCFP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB241B0)
#define NHPGACAHCFP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB24250)
#define NHPGACAHCFP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB23EA0)
#define NHPGACAHCFP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB23E70)
#define NHPGACAHCFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB23E60)
#define NHPGACAHCFP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB23FB0)
#define NHPGACAHCFP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB23EE0)
#define NHPGACAHCFP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB24110)
#define NHPGACAHCFP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB23E20)
#define NHPGACAHCFP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB24200)
#define NHPGACAHCFP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB241D0)
#define NHPGACAHCFP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB23E50)
#define NHPGACAHCFP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB24140)
#define NHPGACAHCFP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB241A0)

	class NHPGACAHCFP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NHPGACAHCFP")->GetStaticField(0x60930);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPGACAHCFP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NHPGACAHCFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHPGACAHCFP*))((::PBYTE)hIl2Cpp + NHPGACAHCFP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHPGACAHCFP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NHPGACAHCFP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPGACAHCFP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NHPGACAHCFP* Clone()
		{
			return ((::NHPGACAHCFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPGACAHCFP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHPGACAHCFP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NHPGACAHCFP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHPGACAHCFP*))((::PBYTE)hIl2Cpp + NHPGACAHCFP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPGACAHCFP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPGACAHCFP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NHPGACAHCFP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPGACAHCFP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NHPGACAHCFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHPGACAHCFP*))((::PBYTE)hIl2Cpp + NHPGACAHCFP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NHPGACAHCFP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
