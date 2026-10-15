#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJFPCBCKKEJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AJFPCBCKKEJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C0AA0)
#define AJFPCBCKKEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C0B40)
#define AJFPCBCKKEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C0790)
#define AJFPCBCKKEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C0760)
#define AJFPCBCKKEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C0750)
#define AJFPCBCKKEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C08A0)
#define AJFPCBCKKEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C07D0)
#define AJFPCBCKKEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C0A00)
#define AJFPCBCKKEJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C0710)
#define AJFPCBCKKEJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C0AF0)
#define AJFPCBCKKEJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C0AC0)
#define AJFPCBCKKEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C0740)
#define AJFPCBCKKEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C0A30)
#define AJFPCBCKKEJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C0A90)

inline static constexpr unsigned int AJFPCBCKKEJ_TypeDefinitionIndex = 30584;

	class AJFPCBCKKEJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AJFPCBCKKEJ")->GetStaticField(0x34E60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFPCBCKKEJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJFPCBCKKEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJFPCBCKKEJ*))((::PBYTE)hIl2Cpp + AJFPCBCKKEJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJFPCBCKKEJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AJFPCBCKKEJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFPCBCKKEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJFPCBCKKEJ* Clone()
		{
			return ((::AJFPCBCKKEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFPCBCKKEJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJFPCBCKKEJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJFPCBCKKEJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJFPCBCKKEJ*))((::PBYTE)hIl2Cpp + AJFPCBCKKEJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFPCBCKKEJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFPCBCKKEJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJFPCBCKKEJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFPCBCKKEJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJFPCBCKKEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJFPCBCKKEJ*))((::PBYTE)hIl2Cpp + AJFPCBCKKEJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJFPCBCKKEJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
