#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDGOBNJPKJG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDGOBNJPKJG_ALMHHJFJLLL_OFFSET UNITYSDK_OFFSET(0x20536010)
#define FDGOBNJPKJG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20536370)
#define FDGOBNJPKJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x20536590)
#define FDGOBNJPKJG_CLONE_OFFSET UNITYSDK_OFFSET(0x20535FC0)
#define FDGOBNJPKJG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20535F90)
#define FDGOBNJPKJG_CTOR_OFFSET UNITYSDK_OFFSET(0x20535F80)
#define FDGOBNJPKJG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205360F0)
#define FDGOBNJPKJG_EQUALS_OFFSET UNITYSDK_OFFSET(0x20536020)
#define FDGOBNJPKJG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20536260)
#define FDGOBNJPKJG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20535F40)
#define FDGOBNJPKJG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20536430)
#define FDGOBNJPKJG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20536400)
#define FDGOBNJPKJG_MJLHMKEGEAM_OFFSET UNITYSDK_OFFSET(0x20536000)
#define FDGOBNJPKJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20535F70)
#define FDGOBNJPKJG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20536290)
#define FDGOBNJPKJG_WRITETO_OFFSET UNITYSDK_OFFSET(0x205362F0)

inline static constexpr unsigned int FDGOBNJPKJG_TypeDefinitionIndex = 34879;

	class FDGOBNJPKJG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LLLNCANIDIG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FDGOBNJPKJG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FDGOBNJPKJG*>**)UnitySDK::FromName("", "FDGOBNJPKJG")->GetStaticField(0x48A00);
		}

		// static const ::System::Object OEGDIABFNPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGOBNJPKJG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDGOBNJPKJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDGOBNJPKJG*))((::PBYTE)hIl2Cpp + FDGOBNJPKJG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDGOBNJPKJG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FDGOBNJPKJG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FDGOBNJPKJG*>*(*)())((::PBYTE)hIl2Cpp + FDGOBNJPKJG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGOBNJPKJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDGOBNJPKJG* Clone()
		{
			return ((::FDGOBNJPKJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGOBNJPKJG_CLONE_OFFSET))(this);
		}

		::System::UInt32 MJLHMKEGEAM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGOBNJPKJG_MJLHMKEGEAM_OFFSET))(this);
		}

		::System::Void ALMHHJFJLLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDGOBNJPKJG_ALMHHJFJLLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDGOBNJPKJG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDGOBNJPKJG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDGOBNJPKJG*))((::PBYTE)hIl2Cpp + FDGOBNJPKJG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGOBNJPKJG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGOBNJPKJG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDGOBNJPKJG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGOBNJPKJG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDGOBNJPKJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDGOBNJPKJG*))((::PBYTE)hIl2Cpp + FDGOBNJPKJG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDGOBNJPKJG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
