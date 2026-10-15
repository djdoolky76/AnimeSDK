#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDFJBLDICPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDFJBLDICPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8F6FB0)
#define LDFJBLDICPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F7050)
#define LDFJBLDICPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8F6C50)
#define LDFJBLDICPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8F6C20)
#define LDFJBLDICPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F6C10)
#define LDFJBLDICPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8F6DB0)
#define LDFJBLDICPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8F6CC0)
#define LDFJBLDICPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8F6F10)
#define LDFJBLDICPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8F6BA0)
#define LDFJBLDICPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8F7000)
#define LDFJBLDICPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8F6FD0)
#define LDFJBLDICPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8F6C00)
#define LDFJBLDICPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8F6F40)
#define LDFJBLDICPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8F6FA0)

	class LDFJBLDICPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LDFJBLDICPJ")->GetStaticField(0x33F10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFJBLDICPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDFJBLDICPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDFJBLDICPJ*))((::PBYTE)hIl2Cpp + LDFJBLDICPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDFJBLDICPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LDFJBLDICPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFJBLDICPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDFJBLDICPJ* Clone()
		{
			return ((::LDFJBLDICPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFJBLDICPJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDFJBLDICPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDFJBLDICPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDFJBLDICPJ*))((::PBYTE)hIl2Cpp + LDFJBLDICPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFJBLDICPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFJBLDICPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDFJBLDICPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFJBLDICPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDFJBLDICPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDFJBLDICPJ*))((::PBYTE)hIl2Cpp + LDFJBLDICPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDFJBLDICPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
