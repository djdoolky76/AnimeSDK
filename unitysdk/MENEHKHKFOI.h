#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MENEHKHKFOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MENEHKHKFOI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD5C580)
#define MENEHKHKFOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD5C620)
#define MENEHKHKFOI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD5C270)
#define MENEHKHKFOI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD5C240)
#define MENEHKHKFOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD5C230)
#define MENEHKHKFOI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD5C380)
#define MENEHKHKFOI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD5C2B0)
#define MENEHKHKFOI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD5C4E0)
#define MENEHKHKFOI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD5C1F0)
#define MENEHKHKFOI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD5C5D0)
#define MENEHKHKFOI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD5C5A0)
#define MENEHKHKFOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD5C220)
#define MENEHKHKFOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD5C510)
#define MENEHKHKFOI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD5C570)

inline static constexpr unsigned int MENEHKHKFOI_TypeDefinitionIndex = 30616;

	class MENEHKHKFOI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MENEHKHKFOI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MENEHKHKFOI*>**)UnitySDK::FromName("", "MENEHKHKFOI")->GetStaticField(0x52390);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENEHKHKFOI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MENEHKHKFOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MENEHKHKFOI*))((::PBYTE)hIl2Cpp + MENEHKHKFOI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MENEHKHKFOI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MENEHKHKFOI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MENEHKHKFOI*>*(*)())((::PBYTE)hIl2Cpp + MENEHKHKFOI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENEHKHKFOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MENEHKHKFOI* Clone()
		{
			return ((::MENEHKHKFOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENEHKHKFOI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MENEHKHKFOI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MENEHKHKFOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MENEHKHKFOI*))((::PBYTE)hIl2Cpp + MENEHKHKFOI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MENEHKHKFOI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENEHKHKFOI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MENEHKHKFOI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MENEHKHKFOI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MENEHKHKFOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MENEHKHKFOI*))((::PBYTE)hIl2Cpp + MENEHKHKFOI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MENEHKHKFOI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
