#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPBDJBIFJHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPBDJBIFJHA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E402D60)
#define FPBDJBIFJHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E402E00)
#define FPBDJBIFJHA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E402A50)
#define FPBDJBIFJHA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E402A20)
#define FPBDJBIFJHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E402A10)
#define FPBDJBIFJHA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E402B60)
#define FPBDJBIFJHA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E402A90)
#define FPBDJBIFJHA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E402CC0)
#define FPBDJBIFJHA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4029D0)
#define FPBDJBIFJHA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E402DB0)
#define FPBDJBIFJHA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E402D80)
#define FPBDJBIFJHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E402A00)
#define FPBDJBIFJHA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E402CF0)
#define FPBDJBIFJHA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E402D50)

inline static constexpr unsigned int FPBDJBIFJHA_TypeDefinitionIndex = 30887;

	class FPBDJBIFJHA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FPBDJBIFJHA")->GetStaticField(0x66520);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBDJBIFJHA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPBDJBIFJHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPBDJBIFJHA*))((::PBYTE)hIl2Cpp + FPBDJBIFJHA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPBDJBIFJHA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FPBDJBIFJHA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBDJBIFJHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPBDJBIFJHA* Clone()
		{
			return ((::FPBDJBIFJHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBDJBIFJHA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPBDJBIFJHA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPBDJBIFJHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPBDJBIFJHA*))((::PBYTE)hIl2Cpp + FPBDJBIFJHA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBDJBIFJHA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBDJBIFJHA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPBDJBIFJHA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBDJBIFJHA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPBDJBIFJHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPBDJBIFJHA*))((::PBYTE)hIl2Cpp + FPBDJBIFJHA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPBDJBIFJHA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
