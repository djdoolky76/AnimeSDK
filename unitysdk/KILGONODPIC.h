#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KILGONODPIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KILGONODPIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8639D0)
#define KILGONODPIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E863BF0)
#define KILGONODPIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E863620)
#define KILGONODPIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8635F0)
#define KILGONODPIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8635E0)
#define KILGONODPIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E863750)
#define KILGONODPIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E863680)
#define KILGONODPIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8638C0)
#define KILGONODPIC_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E863660)
#define KILGONODPIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8635A0)
#define KILGONODPIC_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E863670)
#define KILGONODPIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E863A90)
#define KILGONODPIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E863A60)
#define KILGONODPIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8635D0)
#define KILGONODPIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8638F0)
#define KILGONODPIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E863950)

inline static constexpr unsigned int KILGONODPIC_TypeDefinitionIndex = 33808;

	class KILGONODPIC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KILGONODPIC")->GetStaticField(0x1B520);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KILGONODPIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KILGONODPIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KILGONODPIC*))((::PBYTE)hIl2Cpp + KILGONODPIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KILGONODPIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KILGONODPIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KILGONODPIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KILGONODPIC* Clone()
		{
			return ((::KILGONODPIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KILGONODPIC_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KILGONODPIC_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KILGONODPIC_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KILGONODPIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KILGONODPIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KILGONODPIC*))((::PBYTE)hIl2Cpp + KILGONODPIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KILGONODPIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KILGONODPIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KILGONODPIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KILGONODPIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KILGONODPIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KILGONODPIC*))((::PBYTE)hIl2Cpp + KILGONODPIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KILGONODPIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
