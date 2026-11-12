#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEPFEJKFFGB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEPFEJKFFGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE413C0)
#define NEPFEJKFFGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE41460)
#define NEPFEJKFFGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE410B0)
#define NEPFEJKFFGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE41080)
#define NEPFEJKFFGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE41070)
#define NEPFEJKFFGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE411C0)
#define NEPFEJKFFGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE410F0)
#define NEPFEJKFFGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE41320)
#define NEPFEJKFFGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE41030)
#define NEPFEJKFFGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE41410)
#define NEPFEJKFFGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE413E0)
#define NEPFEJKFFGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE41060)
#define NEPFEJKFFGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE41350)
#define NEPFEJKFFGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE413B0)

inline static constexpr unsigned int NEPFEJKFFGB_TypeDefinitionIndex = 35111;

	class NEPFEJKFFGB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NEPFEJKFFGB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NEPFEJKFFGB*>**)UnitySDK::FromName("", "NEPFEJKFFGB")->GetStaticField(0x695A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPFEJKFFGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NEPFEJKFFGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEPFEJKFFGB*))((::PBYTE)hIl2Cpp + NEPFEJKFFGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEPFEJKFFGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NEPFEJKFFGB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NEPFEJKFFGB*>*(*)())((::PBYTE)hIl2Cpp + NEPFEJKFFGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPFEJKFFGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEPFEJKFFGB* Clone()
		{
			return ((::NEPFEJKFFGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPFEJKFFGB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEPFEJKFFGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEPFEJKFFGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEPFEJKFFGB*))((::PBYTE)hIl2Cpp + NEPFEJKFFGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPFEJKFFGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPFEJKFFGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NEPFEJKFFGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPFEJKFFGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NEPFEJKFFGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEPFEJKFFGB*))((::PBYTE)hIl2Cpp + NEPFEJKFFGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NEPFEJKFFGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
