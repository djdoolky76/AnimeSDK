#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHMKAOJPAPO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHMKAOJPAPO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2027C010)
#define GHMKAOJPAPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x2027C230)
#define GHMKAOJPAPO_CKPDGGDDPLB_OFFSET UNITYSDK_OFFSET(0x2027BC80)
#define GHMKAOJPAPO_CLKLHEIJMKB_OFFSET UNITYSDK_OFFSET(0x2027BC70)
#define GHMKAOJPAPO_CLONE_OFFSET UNITYSDK_OFFSET(0x2027BC00)
#define GHMKAOJPAPO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2027BBD0)
#define GHMKAOJPAPO_CTOR_OFFSET UNITYSDK_OFFSET(0x2027BBC0)
#define GHMKAOJPAPO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2027BD90)
#define GHMKAOJPAPO_EQUALS_OFFSET UNITYSDK_OFFSET(0x2027BC90)
#define GHMKAOJPAPO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2027BF00)
#define GHMKAOJPAPO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2027BB50)
#define GHMKAOJPAPO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2027C0D0)
#define GHMKAOJPAPO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2027C0A0)
#define GHMKAOJPAPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2027BBB0)
#define GHMKAOJPAPO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2027BF30)
#define GHMKAOJPAPO_WRITETO_OFFSET UNITYSDK_OFFSET(0x2027BF90)

inline static constexpr unsigned int GHMKAOJPAPO_TypeDefinitionIndex = 30596;

	class GHMKAOJPAPO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNAGOBDKKEJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GHMKAOJPAPO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GHMKAOJPAPO*>**)UnitySDK::FromName("", "GHMKAOJPAPO")->GetStaticField(0xFE30);
		}

		// static const ::System::Object ONCNEMGOHKG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMKAOJPAPO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHMKAOJPAPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMKAOJPAPO*))((::PBYTE)hIl2Cpp + GHMKAOJPAPO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHMKAOJPAPO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GHMKAOJPAPO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GHMKAOJPAPO*>*(*)())((::PBYTE)hIl2Cpp + GHMKAOJPAPO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMKAOJPAPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHMKAOJPAPO* Clone()
		{
			return ((::GHMKAOJPAPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMKAOJPAPO_CLONE_OFFSET))(this);
		}

		::System::UInt32 CLKLHEIJMKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMKAOJPAPO_CLKLHEIJMKB_OFFSET))(this);
		}

		::System::Void CKPDGGDDPLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHMKAOJPAPO_CKPDGGDDPLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHMKAOJPAPO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHMKAOJPAPO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMKAOJPAPO*))((::PBYTE)hIl2Cpp + GHMKAOJPAPO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMKAOJPAPO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMKAOJPAPO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHMKAOJPAPO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMKAOJPAPO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHMKAOJPAPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMKAOJPAPO*))((::PBYTE)hIl2Cpp + GHMKAOJPAPO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHMKAOJPAPO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
