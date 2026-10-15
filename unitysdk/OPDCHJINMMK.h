#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPDCHJINMMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OPDCHJINMMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEDE830)
#define OPDCHJINMMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEDE8D0)
#define OPDCHJINMMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEDE520)
#define OPDCHJINMMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEDE4F0)
#define OPDCHJINMMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDE4E0)
#define OPDCHJINMMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEDE630)
#define OPDCHJINMMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEDE560)
#define OPDCHJINMMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEDE790)
#define OPDCHJINMMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEDE4A0)
#define OPDCHJINMMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEDE880)
#define OPDCHJINMMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEDE850)
#define OPDCHJINMMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEDE4D0)
#define OPDCHJINMMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEDE7C0)
#define OPDCHJINMMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEDE820)

	class OPDCHJINMMK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OPDCHJINMMK")->GetStaticField(0x2F9F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDCHJINMMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OPDCHJINMMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPDCHJINMMK*))((::PBYTE)hIl2Cpp + OPDCHJINMMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPDCHJINMMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OPDCHJINMMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDCHJINMMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OPDCHJINMMK* Clone()
		{
			return ((::OPDCHJINMMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDCHJINMMK_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPDCHJINMMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OPDCHJINMMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OPDCHJINMMK*))((::PBYTE)hIl2Cpp + OPDCHJINMMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDCHJINMMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDCHJINMMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OPDCHJINMMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDCHJINMMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OPDCHJINMMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPDCHJINMMK*))((::PBYTE)hIl2Cpp + OPDCHJINMMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OPDCHJINMMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
