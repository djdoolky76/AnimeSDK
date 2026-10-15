#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEGGFGBNLPE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AEGGFGBNLPE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDEC580)
#define AEGGFGBNLPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDEC740)
#define AEGGFGBNLPE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDEC110)
#define AEGGFGBNLPE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDEC0E0)
#define AEGGFGBNLPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEC0D0)
#define AEGGFGBNLPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDEC2B0)
#define AEGGFGBNLPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDEC1A0)
#define AEGGFGBNLPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDEC430)
#define AEGGFGBNLPE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDEC060)
#define AEGGFGBNLPE_LIINJFJKKLK_OFFSET UNITYSDK_OFFSET(0x1DDEC180)
#define AEGGFGBNLPE_LLPAKALDHFE_OFFSET UNITYSDK_OFFSET(0x1DDEC190)
#define AEGGFGBNLPE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDEC5E0)
#define AEGGFGBNLPE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDEC5B0)
#define AEGGFGBNLPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDEC0C0)
#define AEGGFGBNLPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDEC460)
#define AEGGFGBNLPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDEC4C0)

	class AEGGFGBNLPE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean FEKPPGIHMAN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AEGGFGBNLPE")->GetStaticField(0x2C7E0);
		}

		// static const ::System::Object GCBAMAPEDPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGGFGBNLPE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AEGGFGBNLPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEGGFGBNLPE*))((::PBYTE)hIl2Cpp + AEGGFGBNLPE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEGGFGBNLPE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AEGGFGBNLPE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGGFGBNLPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AEGGFGBNLPE* Clone()
		{
			return ((::AEGGFGBNLPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGGFGBNLPE_CLONE_OFFSET))(this);
		}

		::System::Boolean LIINJFJKKLK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGGFGBNLPE_LIINJFJKKLK_OFFSET))(this);
		}

		::System::Void LLPAKALDHFE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AEGGFGBNLPE_LLPAKALDHFE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AEGGFGBNLPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AEGGFGBNLPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AEGGFGBNLPE*))((::PBYTE)hIl2Cpp + AEGGFGBNLPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGGFGBNLPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGGFGBNLPE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AEGGFGBNLPE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGGFGBNLPE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AEGGFGBNLPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEGGFGBNLPE*))((::PBYTE)hIl2Cpp + AEGGFGBNLPE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AEGGFGBNLPE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
