#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIKINEEIMFM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIKINEEIMFM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E862B20)
#define KIKINEEIMFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E862BC0)
#define KIKINEEIMFM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E862810)
#define KIKINEEIMFM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8627E0)
#define KIKINEEIMFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8627D0)
#define KIKINEEIMFM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E862920)
#define KIKINEEIMFM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E862850)
#define KIKINEEIMFM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E862A80)
#define KIKINEEIMFM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E862790)
#define KIKINEEIMFM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E862B70)
#define KIKINEEIMFM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E862B40)
#define KIKINEEIMFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8627C0)
#define KIKINEEIMFM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E862AB0)
#define KIKINEEIMFM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E862B10)

	class KIKINEEIMFM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KIKINEEIMFM")->GetStaticField(0x1B3D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKINEEIMFM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIKINEEIMFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIKINEEIMFM*))((::PBYTE)hIl2Cpp + KIKINEEIMFM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIKINEEIMFM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KIKINEEIMFM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKINEEIMFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIKINEEIMFM* Clone()
		{
			return ((::KIKINEEIMFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKINEEIMFM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIKINEEIMFM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIKINEEIMFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIKINEEIMFM*))((::PBYTE)hIl2Cpp + KIKINEEIMFM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKINEEIMFM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKINEEIMFM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIKINEEIMFM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKINEEIMFM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIKINEEIMFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIKINEEIMFM*))((::PBYTE)hIl2Cpp + KIKINEEIMFM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIKINEEIMFM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
