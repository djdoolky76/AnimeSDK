#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OACJDKMNPIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OACJDKMNPIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBA4EA0)
#define OACJDKMNPIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA50C0)
#define OACJDKMNPIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBA4AF0)
#define OACJDKMNPIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBA4AC0)
#define OACJDKMNPIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA4AB0)
#define OACJDKMNPIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBA4C20)
#define OACJDKMNPIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBA4B50)
#define OACJDKMNPIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBA4D90)
#define OACJDKMNPIC_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1EBA4B30)
#define OACJDKMNPIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBA4A70)
#define OACJDKMNPIC_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1EBA4B40)
#define OACJDKMNPIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBA4F60)
#define OACJDKMNPIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBA4F30)
#define OACJDKMNPIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBA4AA0)
#define OACJDKMNPIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBA4DC0)
#define OACJDKMNPIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBA4E20)

	class OACJDKMNPIC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OACJDKMNPIC")->GetStaticField(0xF460);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OACJDKMNPIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OACJDKMNPIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OACJDKMNPIC*))((::PBYTE)hIl2Cpp + OACJDKMNPIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OACJDKMNPIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OACJDKMNPIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OACJDKMNPIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OACJDKMNPIC* Clone()
		{
			return ((::OACJDKMNPIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OACJDKMNPIC_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OACJDKMNPIC_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OACJDKMNPIC_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OACJDKMNPIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OACJDKMNPIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OACJDKMNPIC*))((::PBYTE)hIl2Cpp + OACJDKMNPIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OACJDKMNPIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OACJDKMNPIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OACJDKMNPIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OACJDKMNPIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OACJDKMNPIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OACJDKMNPIC*))((::PBYTE)hIl2Cpp + OACJDKMNPIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OACJDKMNPIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
