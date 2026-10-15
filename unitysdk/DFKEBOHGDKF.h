#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFKEBOHGDKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFKEBOHGDKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1A44A0)
#define DFKEBOHGDKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A4540)
#define DFKEBOHGDKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1A4190)
#define DFKEBOHGDKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1A4160)
#define DFKEBOHGDKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A4150)
#define DFKEBOHGDKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1A42A0)
#define DFKEBOHGDKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1A41D0)
#define DFKEBOHGDKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1A4400)
#define DFKEBOHGDKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1A4110)
#define DFKEBOHGDKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1A44F0)
#define DFKEBOHGDKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1A44C0)
#define DFKEBOHGDKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1A4140)
#define DFKEBOHGDKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1A4430)
#define DFKEBOHGDKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1A4490)

	class DFKEBOHGDKF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DFKEBOHGDKF")->GetStaticField(0x32C80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKEBOHGDKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFKEBOHGDKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFKEBOHGDKF*))((::PBYTE)hIl2Cpp + DFKEBOHGDKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFKEBOHGDKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DFKEBOHGDKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKEBOHGDKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFKEBOHGDKF* Clone()
		{
			return ((::DFKEBOHGDKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKEBOHGDKF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFKEBOHGDKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFKEBOHGDKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFKEBOHGDKF*))((::PBYTE)hIl2Cpp + DFKEBOHGDKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKEBOHGDKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKEBOHGDKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFKEBOHGDKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKEBOHGDKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFKEBOHGDKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFKEBOHGDKF*))((::PBYTE)hIl2Cpp + DFKEBOHGDKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFKEBOHGDKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
