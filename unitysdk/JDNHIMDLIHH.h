#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDNHIMDLIHH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDNHIMDLIHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E710F80)
#define JDNHIMDLIHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E711020)
#define JDNHIMDLIHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E710C70)
#define JDNHIMDLIHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E710C40)
#define JDNHIMDLIHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E710C30)
#define JDNHIMDLIHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E710D80)
#define JDNHIMDLIHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E710CB0)
#define JDNHIMDLIHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E710EE0)
#define JDNHIMDLIHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E710BF0)
#define JDNHIMDLIHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E710FD0)
#define JDNHIMDLIHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E710FA0)
#define JDNHIMDLIHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E710C20)
#define JDNHIMDLIHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E710F10)
#define JDNHIMDLIHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E710F70)

inline static constexpr unsigned int JDNHIMDLIHH_TypeDefinitionIndex = 26682;

	class JDNHIMDLIHH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JDNHIMDLIHH")->GetStaticField(0x5E1E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNHIMDLIHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDNHIMDLIHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDNHIMDLIHH*))((::PBYTE)hIl2Cpp + JDNHIMDLIHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDNHIMDLIHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JDNHIMDLIHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNHIMDLIHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDNHIMDLIHH* Clone()
		{
			return ((::JDNHIMDLIHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNHIMDLIHH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDNHIMDLIHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDNHIMDLIHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDNHIMDLIHH*))((::PBYTE)hIl2Cpp + JDNHIMDLIHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNHIMDLIHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNHIMDLIHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDNHIMDLIHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNHIMDLIHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDNHIMDLIHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDNHIMDLIHH*))((::PBYTE)hIl2Cpp + JDNHIMDLIHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDNHIMDLIHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
