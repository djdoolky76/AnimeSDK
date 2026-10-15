#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNDCKLDMJKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNDCKLDMJKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8A0490)
#define KNDCKLDMJKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A0530)
#define KNDCKLDMJKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8A0180)
#define KNDCKLDMJKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8A0150)
#define KNDCKLDMJKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A0140)
#define KNDCKLDMJKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8A0290)
#define KNDCKLDMJKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8A01C0)
#define KNDCKLDMJKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8A03F0)
#define KNDCKLDMJKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8A0100)
#define KNDCKLDMJKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8A04E0)
#define KNDCKLDMJKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8A04B0)
#define KNDCKLDMJKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8A0130)
#define KNDCKLDMJKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8A0420)
#define KNDCKLDMJKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8A0480)

inline static constexpr unsigned int KNDCKLDMJKB_TypeDefinitionIndex = 32423;

	class KNDCKLDMJKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::KNDCKLDMJKB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KNDCKLDMJKB*>**)UnitySDK::FromName("", "KNDCKLDMJKB")->GetStaticField(0x234D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDCKLDMJKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNDCKLDMJKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNDCKLDMJKB*))((::PBYTE)hIl2Cpp + KNDCKLDMJKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNDCKLDMJKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KNDCKLDMJKB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KNDCKLDMJKB*>*(*)())((::PBYTE)hIl2Cpp + KNDCKLDMJKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDCKLDMJKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNDCKLDMJKB* Clone()
		{
			return ((::KNDCKLDMJKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDCKLDMJKB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNDCKLDMJKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNDCKLDMJKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNDCKLDMJKB*))((::PBYTE)hIl2Cpp + KNDCKLDMJKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDCKLDMJKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDCKLDMJKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNDCKLDMJKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDCKLDMJKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNDCKLDMJKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNDCKLDMJKB*))((::PBYTE)hIl2Cpp + KNDCKLDMJKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNDCKLDMJKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
