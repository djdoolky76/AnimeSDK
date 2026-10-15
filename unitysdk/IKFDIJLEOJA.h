#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKFDIJLEOJA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IKFDIJLEOJA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6A07C0)
#define IKFDIJLEOJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A0860)
#define IKFDIJLEOJA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6A04B0)
#define IKFDIJLEOJA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6A0480)
#define IKFDIJLEOJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A0470)
#define IKFDIJLEOJA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6A05C0)
#define IKFDIJLEOJA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6A04F0)
#define IKFDIJLEOJA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6A0720)
#define IKFDIJLEOJA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6A0430)
#define IKFDIJLEOJA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6A0810)
#define IKFDIJLEOJA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6A07E0)
#define IKFDIJLEOJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6A0460)
#define IKFDIJLEOJA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6A0750)
#define IKFDIJLEOJA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6A07B0)

	class IKFDIJLEOJA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IKFDIJLEOJA")->GetStaticField(0x554B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFDIJLEOJA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IKFDIJLEOJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKFDIJLEOJA*))((::PBYTE)hIl2Cpp + IKFDIJLEOJA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKFDIJLEOJA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IKFDIJLEOJA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFDIJLEOJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IKFDIJLEOJA* Clone()
		{
			return ((::IKFDIJLEOJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFDIJLEOJA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKFDIJLEOJA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IKFDIJLEOJA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKFDIJLEOJA*))((::PBYTE)hIl2Cpp + IKFDIJLEOJA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFDIJLEOJA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFDIJLEOJA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IKFDIJLEOJA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFDIJLEOJA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IKFDIJLEOJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKFDIJLEOJA*))((::PBYTE)hIl2Cpp + IKFDIJLEOJA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IKFDIJLEOJA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
