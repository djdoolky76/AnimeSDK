#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHNFGOJKPDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NHNFGOJKPDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB230E0)
#define NHNFGOJKPDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB23180)
#define NHNFGOJKPDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB22DD0)
#define NHNFGOJKPDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB22DA0)
#define NHNFGOJKPDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB22D90)
#define NHNFGOJKPDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB22EE0)
#define NHNFGOJKPDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB22E10)
#define NHNFGOJKPDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB23040)
#define NHNFGOJKPDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB22D50)
#define NHNFGOJKPDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB23130)
#define NHNFGOJKPDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB23100)
#define NHNFGOJKPDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB22D80)
#define NHNFGOJKPDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB23070)
#define NHNFGOJKPDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB230D0)

	class NHNFGOJKPDJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NHNFGOJKPDJ")->GetStaticField(0x60830);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNFGOJKPDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NHNFGOJKPDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHNFGOJKPDJ*))((::PBYTE)hIl2Cpp + NHNFGOJKPDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHNFGOJKPDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NHNFGOJKPDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNFGOJKPDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NHNFGOJKPDJ* Clone()
		{
			return ((::NHNFGOJKPDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNFGOJKPDJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHNFGOJKPDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NHNFGOJKPDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHNFGOJKPDJ*))((::PBYTE)hIl2Cpp + NHNFGOJKPDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNFGOJKPDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNFGOJKPDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NHNFGOJKPDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNFGOJKPDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NHNFGOJKPDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHNFGOJKPDJ*))((::PBYTE)hIl2Cpp + NHNFGOJKPDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NHNFGOJKPDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
