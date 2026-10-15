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

#define FDGOBNJPKJG_ALMHHJFJLLL_OFFSET UNITYSDK_OFFSET(0x1E32B890)
#define FDGOBNJPKJG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E32BBF0)
#define FDGOBNJPKJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32BE10)
#define FDGOBNJPKJG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E32B840)
#define FDGOBNJPKJG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E32B810)
#define FDGOBNJPKJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32B800)
#define FDGOBNJPKJG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E32B970)
#define FDGOBNJPKJG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E32B8A0)
#define FDGOBNJPKJG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E32BAE0)
#define FDGOBNJPKJG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E32B7C0)
#define FDGOBNJPKJG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E32BCB0)
#define FDGOBNJPKJG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E32BC80)
#define FDGOBNJPKJG_MJLHMKEGEAM_OFFSET UNITYSDK_OFFSET(0x1E32B880)
#define FDGOBNJPKJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E32B7F0)
#define FDGOBNJPKJG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E32BB10)
#define FDGOBNJPKJG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E32BB70)

inline static constexpr unsigned int FDGOBNJPKJG_TypeDefinitionIndex = 33964;

	class FDGOBNJPKJG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LLLNCANIDIG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FDGOBNJPKJG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FDGOBNJPKJG*>**)UnitySDK::FromName("", "FDGOBNJPKJG")->GetStaticField(0x529E0);
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
