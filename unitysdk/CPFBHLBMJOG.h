#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPFBHLBMJOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPFBHLBMJOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E13BC80)
#define CPFBHLBMJOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E13BD20)
#define CPFBHLBMJOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E13B970)
#define CPFBHLBMJOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E13B940)
#define CPFBHLBMJOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13B930)
#define CPFBHLBMJOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E13BA80)
#define CPFBHLBMJOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E13B9B0)
#define CPFBHLBMJOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E13BBE0)
#define CPFBHLBMJOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E13B8F0)
#define CPFBHLBMJOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E13BCD0)
#define CPFBHLBMJOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E13BCA0)
#define CPFBHLBMJOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E13B920)
#define CPFBHLBMJOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E13BC10)
#define CPFBHLBMJOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E13BC70)

	class CPFBHLBMJOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CPFBHLBMJOG")->GetStaticField(0x22150);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFBHLBMJOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPFBHLBMJOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPFBHLBMJOG*))((::PBYTE)hIl2Cpp + CPFBHLBMJOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPFBHLBMJOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CPFBHLBMJOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFBHLBMJOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPFBHLBMJOG* Clone()
		{
			return ((::CPFBHLBMJOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFBHLBMJOG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPFBHLBMJOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPFBHLBMJOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPFBHLBMJOG*))((::PBYTE)hIl2Cpp + CPFBHLBMJOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFBHLBMJOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFBHLBMJOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPFBHLBMJOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFBHLBMJOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPFBHLBMJOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPFBHLBMJOG*))((::PBYTE)hIl2Cpp + CPFBHLBMJOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPFBHLBMJOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
