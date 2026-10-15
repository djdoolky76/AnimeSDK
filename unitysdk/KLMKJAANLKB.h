#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLMKJAANLKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLMKJAANLKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8644A0)
#define KLMKJAANLKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E864540)
#define KLMKJAANLKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E864190)
#define KLMKJAANLKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E864160)
#define KLMKJAANLKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E864150)
#define KLMKJAANLKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8642A0)
#define KLMKJAANLKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8641D0)
#define KLMKJAANLKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E864400)
#define KLMKJAANLKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E864110)
#define KLMKJAANLKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8644F0)
#define KLMKJAANLKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8644C0)
#define KLMKJAANLKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E864140)
#define KLMKJAANLKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E864430)
#define KLMKJAANLKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E864490)

inline static constexpr unsigned int KLMKJAANLKB_TypeDefinitionIndex = 26523;

	class KLMKJAANLKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::KLMKJAANLKB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KLMKJAANLKB*>**)UnitySDK::FromName("", "KLMKJAANLKB")->GetStaticField(0x1E600);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMKJAANLKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLMKJAANLKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLMKJAANLKB*))((::PBYTE)hIl2Cpp + KLMKJAANLKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLMKJAANLKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KLMKJAANLKB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KLMKJAANLKB*>*(*)())((::PBYTE)hIl2Cpp + KLMKJAANLKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMKJAANLKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLMKJAANLKB* Clone()
		{
			return ((::KLMKJAANLKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMKJAANLKB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLMKJAANLKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLMKJAANLKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLMKJAANLKB*))((::PBYTE)hIl2Cpp + KLMKJAANLKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMKJAANLKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMKJAANLKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLMKJAANLKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMKJAANLKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLMKJAANLKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLMKJAANLKB*))((::PBYTE)hIl2Cpp + KLMKJAANLKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLMKJAANLKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
