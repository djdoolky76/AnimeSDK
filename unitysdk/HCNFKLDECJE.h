#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCNFKLDECJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCNFKLDECJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E544CA0)
#define HCNFKLDECJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E544EC0)
#define HCNFKLDECJE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5448F0)
#define HCNFKLDECJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5448C0)
#define HCNFKLDECJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5448B0)
#define HCNFKLDECJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E544A20)
#define HCNFKLDECJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E544950)
#define HCNFKLDECJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E544B90)
#define HCNFKLDECJE_IKKLCDDNEBD_OFFSET UNITYSDK_OFFSET(0x1E544940)
#define HCNFKLDECJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E544870)
#define HCNFKLDECJE_LHMPAIBIHFI_OFFSET UNITYSDK_OFFSET(0x1E544930)
#define HCNFKLDECJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E544D60)
#define HCNFKLDECJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E544D30)
#define HCNFKLDECJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5448A0)
#define HCNFKLDECJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E544BC0)
#define HCNFKLDECJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E544C20)

	class HCNFKLDECJE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BPDPDDPHKDP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HCNFKLDECJE")->GetStaticField(0x30B80);
		}

		// static const ::System::Object ABDLFEHJGGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNFKLDECJE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCNFKLDECJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCNFKLDECJE*))((::PBYTE)hIl2Cpp + HCNFKLDECJE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCNFKLDECJE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HCNFKLDECJE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNFKLDECJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCNFKLDECJE* Clone()
		{
			return ((::HCNFKLDECJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNFKLDECJE_CLONE_OFFSET))(this);
		}

		::System::UInt32 LHMPAIBIHFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNFKLDECJE_LHMPAIBIHFI_OFFSET))(this);
		}

		::System::Void IKKLCDDNEBD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCNFKLDECJE_IKKLCDDNEBD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCNFKLDECJE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCNFKLDECJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCNFKLDECJE*))((::PBYTE)hIl2Cpp + HCNFKLDECJE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNFKLDECJE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNFKLDECJE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCNFKLDECJE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNFKLDECJE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCNFKLDECJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCNFKLDECJE*))((::PBYTE)hIl2Cpp + HCNFKLDECJE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCNFKLDECJE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
