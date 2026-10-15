#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDMEKAGOCND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PDMEKAGOCND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEE50E0)
#define PDMEKAGOCND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE5180)
#define PDMEKAGOCND_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEE4DD0)
#define PDMEKAGOCND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEE4DA0)
#define PDMEKAGOCND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE4D90)
#define PDMEKAGOCND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEE4EE0)
#define PDMEKAGOCND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEE4E10)
#define PDMEKAGOCND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEE5040)
#define PDMEKAGOCND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEE4D50)
#define PDMEKAGOCND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEE5130)
#define PDMEKAGOCND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEE5100)
#define PDMEKAGOCND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEE4D80)
#define PDMEKAGOCND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEE5070)
#define PDMEKAGOCND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEE50D0)

inline static constexpr unsigned int PDMEKAGOCND_TypeDefinitionIndex = 29958;

	class PDMEKAGOCND : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PDMEKAGOCND*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PDMEKAGOCND*>**)UnitySDK::FromName("", "PDMEKAGOCND")->GetStaticField(0x30660);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEKAGOCND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PDMEKAGOCND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDMEKAGOCND*))((::PBYTE)hIl2Cpp + PDMEKAGOCND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDMEKAGOCND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PDMEKAGOCND*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PDMEKAGOCND*>*(*)())((::PBYTE)hIl2Cpp + PDMEKAGOCND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEKAGOCND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PDMEKAGOCND* Clone()
		{
			return ((::PDMEKAGOCND*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEKAGOCND_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDMEKAGOCND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PDMEKAGOCND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDMEKAGOCND*))((::PBYTE)hIl2Cpp + PDMEKAGOCND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEKAGOCND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEKAGOCND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PDMEKAGOCND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEKAGOCND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PDMEKAGOCND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDMEKAGOCND*))((::PBYTE)hIl2Cpp + PDMEKAGOCND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PDMEKAGOCND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
