#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDLGMIIOACH;
class PBIGEJHGLEH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PBIGEJHGLEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEF6FF0)
#define PBIGEJHGLEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF7270)
#define PBIGEJHGLEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEF6950)
#define PBIGEJHGLEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEF68C0)
#define PBIGEJHGLEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF68B0)
#define PBIGEJHGLEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEF6BE0)
#define PBIGEJHGLEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEF6A40)
#define PBIGEJHGLEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEF6EB0)
#define PBIGEJHGLEH_GGJJJFGPHPG_OFFSET UNITYSDK_OFFSET(0x1DEF6A20)
#define PBIGEJHGLEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEF6840)
#define PBIGEJHGLEH_JNKMMFGANEP_OFFSET UNITYSDK_OFFSET(0x1DEF6A30)
#define PBIGEJHGLEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEF70E0)
#define PBIGEJHGLEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEF7050)
#define PBIGEJHGLEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEF68A0)
#define PBIGEJHGLEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEF6F00)
#define PBIGEJHGLEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEF6F60)

inline static constexpr unsigned int PBIGEJHGLEH_TypeDefinitionIndex = 28635;

	class PBIGEJHGLEH : public ::System::Object
	{
	public:
		::FDLGMIIOACH* CLNIKCBNDHL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PBIGEJHGLEH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PBIGEJHGLEH*>**)UnitySDK::FromName("", "PBIGEJHGLEH")->GetStaticField(0x33640);
		}

		// static const ::System::Object LANGMKPEPJK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIGEJHGLEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PBIGEJHGLEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBIGEJHGLEH*))((::PBYTE)hIl2Cpp + PBIGEJHGLEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBIGEJHGLEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PBIGEJHGLEH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PBIGEJHGLEH*>*(*)())((::PBYTE)hIl2Cpp + PBIGEJHGLEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIGEJHGLEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PBIGEJHGLEH* Clone()
		{
			return ((::PBIGEJHGLEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIGEJHGLEH_CLONE_OFFSET))(this);
		}

		::FDLGMIIOACH* GGJJJFGPHPG()
		{
			return ((::FDLGMIIOACH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIGEJHGLEH_GGJJJFGPHPG_OFFSET))(this);
		}

		::System::Void JNKMMFGANEP(::FDLGMIIOACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLGMIIOACH*))((::PBYTE)hIl2Cpp + PBIGEJHGLEH_JNKMMFGANEP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBIGEJHGLEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PBIGEJHGLEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBIGEJHGLEH*))((::PBYTE)hIl2Cpp + PBIGEJHGLEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIGEJHGLEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIGEJHGLEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PBIGEJHGLEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIGEJHGLEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PBIGEJHGLEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBIGEJHGLEH*))((::PBYTE)hIl2Cpp + PBIGEJHGLEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PBIGEJHGLEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
