#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPHBHKOOGBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IPHBHKOOGBJ_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E6B5E90)
#define IPHBHKOOGBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6B6200)
#define IPHBHKOOGBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B6420)
#define IPHBHKOOGBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6B5E50)
#define IPHBHKOOGBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6B5E20)
#define IPHBHKOOGBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B5E10)
#define IPHBHKOOGBJ_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E6B5EA0)
#define IPHBHKOOGBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6B5F80)
#define IPHBHKOOGBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6B5EB0)
#define IPHBHKOOGBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6B60F0)
#define IPHBHKOOGBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6B5DD0)
#define IPHBHKOOGBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6B62C0)
#define IPHBHKOOGBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6B6290)
#define IPHBHKOOGBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6B5E00)
#define IPHBHKOOGBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6B6120)
#define IPHBHKOOGBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6B6180)

inline static constexpr unsigned int IPHBHKOOGBJ_TypeDefinitionIndex = 29403;

	class IPHBHKOOGBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IPHBHKOOGBJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IPHBHKOOGBJ*>**)UnitySDK::FromName("", "IPHBHKOOGBJ")->GetStaticField(0x56860);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHBHKOOGBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IPHBHKOOGBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPHBHKOOGBJ*))((::PBYTE)hIl2Cpp + IPHBHKOOGBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPHBHKOOGBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IPHBHKOOGBJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IPHBHKOOGBJ*>*(*)())((::PBYTE)hIl2Cpp + IPHBHKOOGBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHBHKOOGBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IPHBHKOOGBJ* Clone()
		{
			return ((::IPHBHKOOGBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHBHKOOGBJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHBHKOOGBJ_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPHBHKOOGBJ_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IPHBHKOOGBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IPHBHKOOGBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPHBHKOOGBJ*))((::PBYTE)hIl2Cpp + IPHBHKOOGBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHBHKOOGBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHBHKOOGBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IPHBHKOOGBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHBHKOOGBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IPHBHKOOGBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPHBHKOOGBJ*))((::PBYTE)hIl2Cpp + IPHBHKOOGBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IPHBHKOOGBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
