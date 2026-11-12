#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBCKAGHDPEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBCKAGHDPEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F715580)
#define GBCKAGHDPEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F715620)
#define GBCKAGHDPEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F715270)
#define GBCKAGHDPEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F715240)
#define GBCKAGHDPEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F715230)
#define GBCKAGHDPEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F715380)
#define GBCKAGHDPEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7152B0)
#define GBCKAGHDPEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F7154E0)
#define GBCKAGHDPEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F7151F0)
#define GBCKAGHDPEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F7155D0)
#define GBCKAGHDPEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F7155A0)
#define GBCKAGHDPEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F715220)
#define GBCKAGHDPEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F715510)
#define GBCKAGHDPEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F715570)

inline static constexpr unsigned int GBCKAGHDPEB_TypeDefinitionIndex = 27641;

	class GBCKAGHDPEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::GBCKAGHDPEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBCKAGHDPEB*>**)UnitySDK::FromName("", "GBCKAGHDPEB")->GetStaticField(0x55250);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCKAGHDPEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBCKAGHDPEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBCKAGHDPEB*))((::PBYTE)hIl2Cpp + GBCKAGHDPEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBCKAGHDPEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GBCKAGHDPEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GBCKAGHDPEB*>*(*)())((::PBYTE)hIl2Cpp + GBCKAGHDPEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCKAGHDPEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBCKAGHDPEB* Clone()
		{
			return ((::GBCKAGHDPEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCKAGHDPEB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBCKAGHDPEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBCKAGHDPEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBCKAGHDPEB*))((::PBYTE)hIl2Cpp + GBCKAGHDPEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCKAGHDPEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCKAGHDPEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBCKAGHDPEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCKAGHDPEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBCKAGHDPEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBCKAGHDPEB*))((::PBYTE)hIl2Cpp + GBCKAGHDPEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBCKAGHDPEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
