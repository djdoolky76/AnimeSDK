#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJGKOGKEDOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJGKOGKEDOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9812B0)
#define LJGKOGKEDOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9814D0)
#define LJGKOGKEDOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E980EA0)
#define LJGKOGKEDOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E980E70)
#define LJGKOGKEDOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E980E60)
#define LJGKOGKEDOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E981030)
#define LJGKOGKEDOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E980F30)
#define LJGKOGKEDOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9811A0)
#define LJGKOGKEDOA_GGAJDDPDHJK_OFFSET UNITYSDK_OFFSET(0x1E980F10)
#define LJGKOGKEDOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E980DF0)
#define LJGKOGKEDOA_KNEJAOBCGKN_OFFSET UNITYSDK_OFFSET(0x1E980F20)
#define LJGKOGKEDOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E981370)
#define LJGKOGKEDOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E981340)
#define LJGKOGKEDOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E980E50)
#define LJGKOGKEDOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9811D0)
#define LJGKOGKEDOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E981230)

	class LJGKOGKEDOA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EMJPCHGKDPL; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LJGKOGKEDOA")->GetStaticField(0x47D70);
		}

		// static const ::System::Object OILJOBDJEDO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGKOGKEDOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJGKOGKEDOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJGKOGKEDOA*))((::PBYTE)hIl2Cpp + LJGKOGKEDOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJGKOGKEDOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LJGKOGKEDOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGKOGKEDOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJGKOGKEDOA* Clone()
		{
			return ((::LJGKOGKEDOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGKOGKEDOA_CLONE_OFFSET))(this);
		}

		::System::UInt32 GGAJDDPDHJK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGKOGKEDOA_GGAJDDPDHJK_OFFSET))(this);
		}

		::System::Void KNEJAOBCGKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJGKOGKEDOA_KNEJAOBCGKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJGKOGKEDOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJGKOGKEDOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJGKOGKEDOA*))((::PBYTE)hIl2Cpp + LJGKOGKEDOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGKOGKEDOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGKOGKEDOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJGKOGKEDOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGKOGKEDOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJGKOGKEDOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJGKOGKEDOA*))((::PBYTE)hIl2Cpp + LJGKOGKEDOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJGKOGKEDOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
