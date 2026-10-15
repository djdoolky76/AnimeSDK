#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IONBKDFCGJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IONBKDFCGJO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6AD140)
#define IONBKDFCGJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6AD1E0)
#define IONBKDFCGJO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6ACE30)
#define IONBKDFCGJO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6ACE00)
#define IONBKDFCGJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6ACDF0)
#define IONBKDFCGJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6ACF40)
#define IONBKDFCGJO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6ACE70)
#define IONBKDFCGJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6AD0A0)
#define IONBKDFCGJO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6ACDB0)
#define IONBKDFCGJO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6AD190)
#define IONBKDFCGJO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6AD160)
#define IONBKDFCGJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6ACDE0)
#define IONBKDFCGJO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6AD0D0)
#define IONBKDFCGJO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6AD130)

inline static constexpr unsigned int IONBKDFCGJO_TypeDefinitionIndex = 26763;

	class IONBKDFCGJO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::IONBKDFCGJO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IONBKDFCGJO*>**)UnitySDK::FromName("", "IONBKDFCGJO")->GetStaticField(0x552A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONBKDFCGJO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IONBKDFCGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IONBKDFCGJO*))((::PBYTE)hIl2Cpp + IONBKDFCGJO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IONBKDFCGJO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IONBKDFCGJO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IONBKDFCGJO*>*(*)())((::PBYTE)hIl2Cpp + IONBKDFCGJO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONBKDFCGJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IONBKDFCGJO* Clone()
		{
			return ((::IONBKDFCGJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONBKDFCGJO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IONBKDFCGJO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IONBKDFCGJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IONBKDFCGJO*))((::PBYTE)hIl2Cpp + IONBKDFCGJO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IONBKDFCGJO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONBKDFCGJO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IONBKDFCGJO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IONBKDFCGJO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IONBKDFCGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IONBKDFCGJO*))((::PBYTE)hIl2Cpp + IONBKDFCGJO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IONBKDFCGJO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
