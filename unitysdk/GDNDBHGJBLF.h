#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDNDBHGJBLF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDNDBHGJBLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E44FC70)
#define GDNDBHGJBLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E44FE90)
#define GDNDBHGJBLF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E44F860)
#define GDNDBHGJBLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E44F830)
#define GDNDBHGJBLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E44F820)
#define GDNDBHGJBLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E44F9F0)
#define GDNDBHGJBLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E44F8F0)
#define GDNDBHGJBLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E44FB60)
#define GDNDBHGJBLF_IKDPGIGDDDC_OFFSET UNITYSDK_OFFSET(0x1E44F8D0)
#define GDNDBHGJBLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E44F7B0)
#define GDNDBHGJBLF_KLCGEBLIANF_OFFSET UNITYSDK_OFFSET(0x1E44F8E0)
#define GDNDBHGJBLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E44FD30)
#define GDNDBHGJBLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E44FD00)
#define GDNDBHGJBLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E44F810)
#define GDNDBHGJBLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E44FB90)
#define GDNDBHGJBLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E44FBF0)

	class GDNDBHGJBLF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BJCGANEHKEO; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GDNDBHGJBLF")->GetStaticField(0x11480);
		}

		// static const ::System::Object AFKPGOJFAFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDNDBHGJBLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDNDBHGJBLF*))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDNDBHGJBLF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GDNDBHGJBLF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDNDBHGJBLF* Clone()
		{
			return ((::GDNDBHGJBLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_CLONE_OFFSET))(this);
		}

		::System::UInt32 IKDPGIGDDDC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_IKDPGIGDDDC_OFFSET))(this);
		}

		::System::Void KLCGEBLIANF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_KLCGEBLIANF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDNDBHGJBLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDNDBHGJBLF*))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDNDBHGJBLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDNDBHGJBLF*))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDNDBHGJBLF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
