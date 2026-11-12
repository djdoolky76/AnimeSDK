#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHKPBPHJOMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HHKPBPHJOMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F884990)
#define HHKPBPHJOMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F884A30)
#define HHKPBPHJOMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F884680)
#define HHKPBPHJOMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F884650)
#define HHKPBPHJOMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F884640)
#define HHKPBPHJOMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F884790)
#define HHKPBPHJOMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F8846C0)
#define HHKPBPHJOMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8848F0)
#define HHKPBPHJOMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F884600)
#define HHKPBPHJOMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8849E0)
#define HHKPBPHJOMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F8849B0)
#define HHKPBPHJOMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F884630)
#define HHKPBPHJOMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F884920)
#define HHKPBPHJOMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F884980)

inline static constexpr unsigned int HHKPBPHJOMO_TypeDefinitionIndex = 28467;

	class HHKPBPHJOMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HHKPBPHJOMO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HHKPBPHJOMO*>**)UnitySDK::FromName("", "HHKPBPHJOMO")->GetStaticField(0x2FED0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKPBPHJOMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HHKPBPHJOMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHKPBPHJOMO*))((::PBYTE)hIl2Cpp + HHKPBPHJOMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHKPBPHJOMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HHKPBPHJOMO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HHKPBPHJOMO*>*(*)())((::PBYTE)hIl2Cpp + HHKPBPHJOMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKPBPHJOMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HHKPBPHJOMO* Clone()
		{
			return ((::HHKPBPHJOMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKPBPHJOMO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHKPBPHJOMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HHKPBPHJOMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HHKPBPHJOMO*))((::PBYTE)hIl2Cpp + HHKPBPHJOMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKPBPHJOMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKPBPHJOMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HHKPBPHJOMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKPBPHJOMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HHKPBPHJOMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHKPBPHJOMO*))((::PBYTE)hIl2Cpp + HHKPBPHJOMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HHKPBPHJOMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
