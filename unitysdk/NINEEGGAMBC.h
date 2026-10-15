#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NINEEGGAMBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NINEEGGAMBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB0A6B0)
#define NINEEGGAMBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0A8D0)
#define NINEEGGAMBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB0A300)
#define NINEEGGAMBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB0A2D0)
#define NINEEGGAMBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0A2C0)
#define NINEEGGAMBC_EMBPPNMPKAB_OFFSET UNITYSDK_OFFSET(0x1EB0A350)
#define NINEEGGAMBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB0A430)
#define NINEEGGAMBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB0A360)
#define NINEEGGAMBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB0A5A0)
#define NINEEGGAMBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB0A280)
#define NINEEGGAMBC_KBDKDPLNPIM_OFFSET UNITYSDK_OFFSET(0x1EB0A340)
#define NINEEGGAMBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB0A770)
#define NINEEGGAMBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB0A740)
#define NINEEGGAMBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB0A2B0)
#define NINEEGGAMBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB0A5D0)
#define NINEEGGAMBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB0A630)

inline static constexpr unsigned int NINEEGGAMBC_TypeDefinitionIndex = 31978;

	class NINEEGGAMBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FCJCPAFKJCA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NINEEGGAMBC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NINEEGGAMBC*>**)UnitySDK::FromName("", "NINEEGGAMBC")->GetStaticField(0x68510);
		}

		// static const ::System::Object HAGOIANMDEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEEGGAMBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NINEEGGAMBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NINEEGGAMBC*))((::PBYTE)hIl2Cpp + NINEEGGAMBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NINEEGGAMBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NINEEGGAMBC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NINEEGGAMBC*>*(*)())((::PBYTE)hIl2Cpp + NINEEGGAMBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEEGGAMBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NINEEGGAMBC* Clone()
		{
			return ((::NINEEGGAMBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEEGGAMBC_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBDKDPLNPIM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEEGGAMBC_KBDKDPLNPIM_OFFSET))(this);
		}

		::System::Void EMBPPNMPKAB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NINEEGGAMBC_EMBPPNMPKAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NINEEGGAMBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NINEEGGAMBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NINEEGGAMBC*))((::PBYTE)hIl2Cpp + NINEEGGAMBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEEGGAMBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEEGGAMBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NINEEGGAMBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEEGGAMBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NINEEGGAMBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NINEEGGAMBC*))((::PBYTE)hIl2Cpp + NINEEGGAMBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NINEEGGAMBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
