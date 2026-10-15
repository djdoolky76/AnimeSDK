#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJEONNOCMPH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GJEONNOCMPH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4A7690)
#define GJEONNOCMPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A7730)
#define GJEONNOCMPH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4A7380)
#define GJEONNOCMPH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4A7350)
#define GJEONNOCMPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A7340)
#define GJEONNOCMPH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4A7490)
#define GJEONNOCMPH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4A73C0)
#define GJEONNOCMPH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4A75F0)
#define GJEONNOCMPH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4A7300)
#define GJEONNOCMPH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4A76E0)
#define GJEONNOCMPH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4A76B0)
#define GJEONNOCMPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4A7330)
#define GJEONNOCMPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4A7620)
#define GJEONNOCMPH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4A7680)

	class GJEONNOCMPH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GJEONNOCMPH")->GetStaticField(0x1B810);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEONNOCMPH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GJEONNOCMPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJEONNOCMPH*))((::PBYTE)hIl2Cpp + GJEONNOCMPH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJEONNOCMPH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GJEONNOCMPH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEONNOCMPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GJEONNOCMPH* Clone()
		{
			return ((::GJEONNOCMPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEONNOCMPH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJEONNOCMPH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GJEONNOCMPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJEONNOCMPH*))((::PBYTE)hIl2Cpp + GJEONNOCMPH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEONNOCMPH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEONNOCMPH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GJEONNOCMPH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEONNOCMPH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GJEONNOCMPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJEONNOCMPH*))((::PBYTE)hIl2Cpp + GJEONNOCMPH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GJEONNOCMPH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
