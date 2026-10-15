#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABKIKDIGKHG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABKIKDIGKHG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDCDD40)
#define ABKIKDIGKHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDCDDE0)
#define ABKIKDIGKHG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDCDA30)
#define ABKIKDIGKHG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDCDA00)
#define ABKIKDIGKHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDCD9F0)
#define ABKIKDIGKHG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDCDB40)
#define ABKIKDIGKHG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDCDA70)
#define ABKIKDIGKHG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDCDCA0)
#define ABKIKDIGKHG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDCD9B0)
#define ABKIKDIGKHG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDCDD90)
#define ABKIKDIGKHG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDCDD60)
#define ABKIKDIGKHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDCD9E0)
#define ABKIKDIGKHG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDCDCD0)
#define ABKIKDIGKHG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDCDD30)

inline static constexpr unsigned int ABKIKDIGKHG_TypeDefinitionIndex = 26732;

	class ABKIKDIGKHG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ABKIKDIGKHG")->GetStaticField(0x399C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABKIKDIGKHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABKIKDIGKHG*))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABKIKDIGKHG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ABKIKDIGKHG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABKIKDIGKHG* Clone()
		{
			return ((::ABKIKDIGKHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABKIKDIGKHG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABKIKDIGKHG*))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABKIKDIGKHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABKIKDIGKHG*))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABKIKDIGKHG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
