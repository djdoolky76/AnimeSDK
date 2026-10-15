#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCLFFAFGEFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCLFFAFGEFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAE07C0)
#define NCLFFAFGEFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE0860)
#define NCLFFAFGEFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAE04B0)
#define NCLFFAFGEFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAE0480)
#define NCLFFAFGEFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE0470)
#define NCLFFAFGEFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAE05C0)
#define NCLFFAFGEFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAE04F0)
#define NCLFFAFGEFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAE0720)
#define NCLFFAFGEFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAE0430)
#define NCLFFAFGEFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAE0810)
#define NCLFFAFGEFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAE07E0)
#define NCLFFAFGEFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAE0460)
#define NCLFFAFGEFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAE0750)
#define NCLFFAFGEFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAE07B0)

inline static constexpr unsigned int NCLFFAFGEFA_TypeDefinitionIndex = 33583;

	class NCLFFAFGEFA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NCLFFAFGEFA")->GetStaticField(0x5D350);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLFFAFGEFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCLFFAFGEFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCLFFAFGEFA*))((::PBYTE)hIl2Cpp + NCLFFAFGEFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCLFFAFGEFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NCLFFAFGEFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLFFAFGEFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCLFFAFGEFA* Clone()
		{
			return ((::NCLFFAFGEFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLFFAFGEFA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCLFFAFGEFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCLFFAFGEFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCLFFAFGEFA*))((::PBYTE)hIl2Cpp + NCLFFAFGEFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLFFAFGEFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLFFAFGEFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCLFFAFGEFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLFFAFGEFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCLFFAFGEFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCLFFAFGEFA*))((::PBYTE)hIl2Cpp + NCLFFAFGEFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCLFFAFGEFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
