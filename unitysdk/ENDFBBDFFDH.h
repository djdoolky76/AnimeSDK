#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENDFBBDFFDH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ENDFBBDFFDH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2EA200)
#define ENDFBBDFFDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2EA2A0)
#define ENDFBBDFFDH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2E9EF0)
#define ENDFBBDFFDH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2E9EC0)
#define ENDFBBDFFDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E9EB0)
#define ENDFBBDFFDH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2EA000)
#define ENDFBBDFFDH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2E9F30)
#define ENDFBBDFFDH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2EA160)
#define ENDFBBDFFDH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2E9E70)
#define ENDFBBDFFDH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2EA250)
#define ENDFBBDFFDH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2EA220)
#define ENDFBBDFFDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2E9EA0)
#define ENDFBBDFFDH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2EA190)
#define ENDFBBDFFDH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2EA1F0)

inline static constexpr unsigned int ENDFBBDFFDH_TypeDefinitionIndex = 29458;

	class ENDFBBDFFDH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ENDFBBDFFDH")->GetStaticField(0x543A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDFBBDFFDH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ENDFBBDFFDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENDFBBDFFDH*))((::PBYTE)hIl2Cpp + ENDFBBDFFDH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENDFBBDFFDH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ENDFBBDFFDH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDFBBDFFDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ENDFBBDFFDH* Clone()
		{
			return ((::ENDFBBDFFDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDFBBDFFDH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENDFBBDFFDH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ENDFBBDFFDH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENDFBBDFFDH*))((::PBYTE)hIl2Cpp + ENDFBBDFFDH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDFBBDFFDH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDFBBDFFDH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ENDFBBDFFDH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDFBBDFFDH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ENDFBBDFFDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENDFBBDFFDH*))((::PBYTE)hIl2Cpp + ENDFBBDFFDH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ENDFBBDFFDH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
