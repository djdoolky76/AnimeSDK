#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAPHOALBKBH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LAPHOALBKBH_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E8D4850)
#define LAPHOALBKBH_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E8D4860)
#define LAPHOALBKBH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8D4BC0)
#define LAPHOALBKBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D4DE0)
#define LAPHOALBKBH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8D4810)
#define LAPHOALBKBH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8D47E0)
#define LAPHOALBKBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D47D0)
#define LAPHOALBKBH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8D4940)
#define LAPHOALBKBH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8D4870)
#define LAPHOALBKBH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8D4AB0)
#define LAPHOALBKBH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8D4790)
#define LAPHOALBKBH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8D4C80)
#define LAPHOALBKBH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8D4C50)
#define LAPHOALBKBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8D47C0)
#define LAPHOALBKBH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8D4AE0)
#define LAPHOALBKBH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8D4B40)

inline static constexpr unsigned int LAPHOALBKBH_TypeDefinitionIndex = 27910;

	class LAPHOALBKBH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LAPHOALBKBH")->GetStaticField(0x2FA80);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPHOALBKBH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LAPHOALBKBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAPHOALBKBH*))((::PBYTE)hIl2Cpp + LAPHOALBKBH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAPHOALBKBH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LAPHOALBKBH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPHOALBKBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LAPHOALBKBH* Clone()
		{
			return ((::LAPHOALBKBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPHOALBKBH_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPHOALBKBH_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAPHOALBKBH_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LAPHOALBKBH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LAPHOALBKBH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAPHOALBKBH*))((::PBYTE)hIl2Cpp + LAPHOALBKBH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPHOALBKBH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPHOALBKBH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LAPHOALBKBH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPHOALBKBH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LAPHOALBKBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAPHOALBKBH*))((::PBYTE)hIl2Cpp + LAPHOALBKBH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LAPHOALBKBH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
