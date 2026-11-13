#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHJMEFOOOAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHJMEFOOOAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20692BB0)
#define FHJMEFOOOAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x20692C50)
#define FHJMEFOOOAB_CLONE_OFFSET UNITYSDK_OFFSET(0x206928A0)
#define FHJMEFOOOAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20692870)
#define FHJMEFOOOAB_CTOR_OFFSET UNITYSDK_OFFSET(0x20692860)
#define FHJMEFOOOAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x206929B0)
#define FHJMEFOOOAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x206928E0)
#define FHJMEFOOOAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20692B10)
#define FHJMEFOOOAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20692820)
#define FHJMEFOOOAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20692C00)
#define FHJMEFOOOAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20692BD0)
#define FHJMEFOOOAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20692850)
#define FHJMEFOOOAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20692B40)
#define FHJMEFOOOAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x20692BA0)

inline static constexpr unsigned int FHJMEFOOOAB_TypeDefinitionIndex = 28343;

	class FHJMEFOOOAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FHJMEFOOOAB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FHJMEFOOOAB*>**)UnitySDK::FromName("", "FHJMEFOOOAB")->GetStaticField(0x41E10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJMEFOOOAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHJMEFOOOAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHJMEFOOOAB*))((::PBYTE)hIl2Cpp + FHJMEFOOOAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHJMEFOOOAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FHJMEFOOOAB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FHJMEFOOOAB*>*(*)())((::PBYTE)hIl2Cpp + FHJMEFOOOAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJMEFOOOAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHJMEFOOOAB* Clone()
		{
			return ((::FHJMEFOOOAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJMEFOOOAB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHJMEFOOOAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHJMEFOOOAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHJMEFOOOAB*))((::PBYTE)hIl2Cpp + FHJMEFOOOAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJMEFOOOAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJMEFOOOAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHJMEFOOOAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJMEFOOOAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHJMEFOOOAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHJMEFOOOAB*))((::PBYTE)hIl2Cpp + FHJMEFOOOAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHJMEFOOOAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
