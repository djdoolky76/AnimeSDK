#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCGDBKBGDDD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCGDBKBGDDD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAAE400)
#define NCGDBKBGDDD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAAE4A0)
#define NCGDBKBGDDD_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAAE0F0)
#define NCGDBKBGDDD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAAE0C0)
#define NCGDBKBGDDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAAE0B0)
#define NCGDBKBGDDD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAAE200)
#define NCGDBKBGDDD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAAE130)
#define NCGDBKBGDDD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAAE360)
#define NCGDBKBGDDD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAAE070)
#define NCGDBKBGDDD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAAE450)
#define NCGDBKBGDDD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAAE420)
#define NCGDBKBGDDD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAAE0A0)
#define NCGDBKBGDDD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAAE390)
#define NCGDBKBGDDD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAAE3F0)

inline static constexpr unsigned int NCGDBKBGDDD_TypeDefinitionIndex = 25930;

	class NCGDBKBGDDD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NCGDBKBGDDD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NCGDBKBGDDD*>**)UnitySDK::FromName("", "NCGDBKBGDDD")->GetStaticField(0x5EBB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGDBKBGDDD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCGDBKBGDDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCGDBKBGDDD*))((::PBYTE)hIl2Cpp + NCGDBKBGDDD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCGDBKBGDDD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NCGDBKBGDDD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NCGDBKBGDDD*>*(*)())((::PBYTE)hIl2Cpp + NCGDBKBGDDD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGDBKBGDDD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCGDBKBGDDD* Clone()
		{
			return ((::NCGDBKBGDDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGDBKBGDDD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCGDBKBGDDD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCGDBKBGDDD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCGDBKBGDDD*))((::PBYTE)hIl2Cpp + NCGDBKBGDDD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGDBKBGDDD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGDBKBGDDD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCGDBKBGDDD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGDBKBGDDD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCGDBKBGDDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCGDBKBGDDD*))((::PBYTE)hIl2Cpp + NCGDBKBGDDD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCGDBKBGDDD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
