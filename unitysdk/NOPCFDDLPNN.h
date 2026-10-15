#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOPCFDDLPNN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NOPCFDDLPNN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB63FB0)
#define NOPCFDDLPNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB641D0)
#define NOPCFDDLPNN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB63BA0)
#define NOPCFDDLPNN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB63B70)
#define NOPCFDDLPNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB63B60)
#define NOPCFDDLPNN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB63D30)
#define NOPCFDDLPNN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB63C30)
#define NOPCFDDLPNN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB63EA0)
#define NOPCFDDLPNN_IFMBKPGIIOJ_OFFSET UNITYSDK_OFFSET(0x1EB63C20)
#define NOPCFDDLPNN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB63AF0)
#define NOPCFDDLPNN_KHEHIJFJMIH_OFFSET UNITYSDK_OFFSET(0x1EB63C10)
#define NOPCFDDLPNN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB64070)
#define NOPCFDDLPNN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB64040)
#define NOPCFDDLPNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB63B50)
#define NOPCFDDLPNN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB63ED0)
#define NOPCFDDLPNN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB63F30)

inline static constexpr unsigned int NOPCFDDLPNN_TypeDefinitionIndex = 29895;

	class NOPCFDDLPNN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OEIJJLNNBHF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NOPCFDDLPNN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NOPCFDDLPNN*>**)UnitySDK::FromName("", "NOPCFDDLPNN")->GetStaticField(0xC2E0);
		}

		// static const ::System::Object BLNDLLNEPII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCFDDLPNN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NOPCFDDLPNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOPCFDDLPNN*))((::PBYTE)hIl2Cpp + NOPCFDDLPNN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOPCFDDLPNN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NOPCFDDLPNN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NOPCFDDLPNN*>*(*)())((::PBYTE)hIl2Cpp + NOPCFDDLPNN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCFDDLPNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NOPCFDDLPNN* Clone()
		{
			return ((::NOPCFDDLPNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCFDDLPNN_CLONE_OFFSET))(this);
		}

		::System::UInt32 KHEHIJFJMIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCFDDLPNN_KHEHIJFJMIH_OFFSET))(this);
		}

		::System::Void IFMBKPGIIOJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOPCFDDLPNN_IFMBKPGIIOJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOPCFDDLPNN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NOPCFDDLPNN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NOPCFDDLPNN*))((::PBYTE)hIl2Cpp + NOPCFDDLPNN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCFDDLPNN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCFDDLPNN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NOPCFDDLPNN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCFDDLPNN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NOPCFDDLPNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOPCFDDLPNN*))((::PBYTE)hIl2Cpp + NOPCFDDLPNN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NOPCFDDLPNN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
