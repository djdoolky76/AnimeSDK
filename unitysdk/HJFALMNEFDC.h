#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJFALMNEFDC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HJFALMNEFDC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5A7400)
#define HJFALMNEFDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A74A0)
#define HJFALMNEFDC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5A70F0)
#define HJFALMNEFDC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5A70C0)
#define HJFALMNEFDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A70B0)
#define HJFALMNEFDC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5A7200)
#define HJFALMNEFDC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5A7130)
#define HJFALMNEFDC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5A7360)
#define HJFALMNEFDC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5A7070)
#define HJFALMNEFDC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5A7450)
#define HJFALMNEFDC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5A7420)
#define HJFALMNEFDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5A70A0)
#define HJFALMNEFDC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5A7390)
#define HJFALMNEFDC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5A73F0)

	class HJFALMNEFDC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HJFALMNEFDC")->GetStaticField(0x3FB20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFALMNEFDC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HJFALMNEFDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJFALMNEFDC*))((::PBYTE)hIl2Cpp + HJFALMNEFDC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJFALMNEFDC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HJFALMNEFDC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFALMNEFDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HJFALMNEFDC* Clone()
		{
			return ((::HJFALMNEFDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFALMNEFDC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJFALMNEFDC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HJFALMNEFDC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HJFALMNEFDC*))((::PBYTE)hIl2Cpp + HJFALMNEFDC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFALMNEFDC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFALMNEFDC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HJFALMNEFDC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFALMNEFDC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HJFALMNEFDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJFALMNEFDC*))((::PBYTE)hIl2Cpp + HJFALMNEFDC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HJFALMNEFDC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
