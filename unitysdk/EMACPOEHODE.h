#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMACPOEHODE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMACPOEHODE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2DC730)
#define EMACPOEHODE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2DC7D0)
#define EMACPOEHODE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2DC420)
#define EMACPOEHODE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2DC3F0)
#define EMACPOEHODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DC3E0)
#define EMACPOEHODE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2DC530)
#define EMACPOEHODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2DC460)
#define EMACPOEHODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2DC690)
#define EMACPOEHODE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2DC3A0)
#define EMACPOEHODE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2DC780)
#define EMACPOEHODE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2DC750)
#define EMACPOEHODE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2DC3D0)
#define EMACPOEHODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2DC6C0)
#define EMACPOEHODE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2DC720)

	class EMACPOEHODE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EMACPOEHODE")->GetStaticField(0x52170);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACPOEHODE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMACPOEHODE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMACPOEHODE*))((::PBYTE)hIl2Cpp + EMACPOEHODE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMACPOEHODE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EMACPOEHODE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACPOEHODE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMACPOEHODE* Clone()
		{
			return ((::EMACPOEHODE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACPOEHODE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMACPOEHODE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMACPOEHODE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMACPOEHODE*))((::PBYTE)hIl2Cpp + EMACPOEHODE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACPOEHODE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACPOEHODE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMACPOEHODE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACPOEHODE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMACPOEHODE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMACPOEHODE*))((::PBYTE)hIl2Cpp + EMACPOEHODE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMACPOEHODE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
