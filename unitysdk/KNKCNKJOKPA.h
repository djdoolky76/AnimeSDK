#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNKCNKJOKPA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNKCNKJOKPA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8A5270)
#define KNKCNKJOKPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A5490)
#define KNKCNKJOKPA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8A4EC0)
#define KNKCNKJOKPA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8A4E90)
#define KNKCNKJOKPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A4E80)
#define KNKCNKJOKPA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8A4FF0)
#define KNKCNKJOKPA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8A4F20)
#define KNKCNKJOKPA_FIMLHKBCDHL_OFFSET UNITYSDK_OFFSET(0x1E8A4F10)
#define KNKCNKJOKPA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8A5160)
#define KNKCNKJOKPA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8A4E40)
#define KNKCNKJOKPA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8A5330)
#define KNKCNKJOKPA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8A5300)
#define KNKCNKJOKPA_OCIIGFPLJLN_OFFSET UNITYSDK_OFFSET(0x1E8A4F00)
#define KNKCNKJOKPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8A4E70)
#define KNKCNKJOKPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8A5190)
#define KNKCNKJOKPA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8A51F0)

inline static constexpr unsigned int KNKCNKJOKPA_TypeDefinitionIndex = 27134;

	class KNKCNKJOKPA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBMHLCCHEGF; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KNKCNKJOKPA")->GetStaticField(0x24600);
		}

		// static const ::System::Object MFOEEODHKGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKCNKJOKPA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNKCNKJOKPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNKCNKJOKPA*))((::PBYTE)hIl2Cpp + KNKCNKJOKPA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNKCNKJOKPA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KNKCNKJOKPA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKCNKJOKPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNKCNKJOKPA* Clone()
		{
			return ((::KNKCNKJOKPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKCNKJOKPA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OCIIGFPLJLN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKCNKJOKPA_OCIIGFPLJLN_OFFSET))(this);
		}

		::System::Void FIMLHKBCDHL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNKCNKJOKPA_FIMLHKBCDHL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNKCNKJOKPA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNKCNKJOKPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNKCNKJOKPA*))((::PBYTE)hIl2Cpp + KNKCNKJOKPA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKCNKJOKPA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKCNKJOKPA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNKCNKJOKPA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKCNKJOKPA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNKCNKJOKPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNKCNKJOKPA*))((::PBYTE)hIl2Cpp + KNKCNKJOKPA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNKCNKJOKPA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
