#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMIGGGFOGCN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KMIGGGFOGCN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E86E440)
#define KMIGGGFOGCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86E4E0)
#define KMIGGGFOGCN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E86E130)
#define KMIGGGFOGCN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E86E100)
#define KMIGGGFOGCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86E0F0)
#define KMIGGGFOGCN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E86E240)
#define KMIGGGFOGCN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E86E170)
#define KMIGGGFOGCN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E86E3A0)
#define KMIGGGFOGCN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E86E0B0)
#define KMIGGGFOGCN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E86E490)
#define KMIGGGFOGCN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E86E460)
#define KMIGGGFOGCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E86E0E0)
#define KMIGGGFOGCN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E86E3D0)
#define KMIGGGFOGCN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E86E430)

inline static constexpr unsigned int KMIGGGFOGCN_TypeDefinitionIndex = 29849;

	class KMIGGGFOGCN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::KMIGGGFOGCN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KMIGGGFOGCN*>**)UnitySDK::FromName("", "KMIGGGFOGCN")->GetStaticField(0x1F0D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIGGGFOGCN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KMIGGGFOGCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMIGGGFOGCN*))((::PBYTE)hIl2Cpp + KMIGGGFOGCN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMIGGGFOGCN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KMIGGGFOGCN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KMIGGGFOGCN*>*(*)())((::PBYTE)hIl2Cpp + KMIGGGFOGCN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIGGGFOGCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KMIGGGFOGCN* Clone()
		{
			return ((::KMIGGGFOGCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIGGGFOGCN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMIGGGFOGCN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KMIGGGFOGCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMIGGGFOGCN*))((::PBYTE)hIl2Cpp + KMIGGGFOGCN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIGGGFOGCN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIGGGFOGCN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KMIGGGFOGCN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIGGGFOGCN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KMIGGGFOGCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMIGGGFOGCN*))((::PBYTE)hIl2Cpp + KMIGGGFOGCN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KMIGGGFOGCN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
