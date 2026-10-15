#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BILENDACAMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BILENDACAMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE04FF0)
#define BILENDACAMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE05090)
#define BILENDACAMP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE04CE0)
#define BILENDACAMP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE04CB0)
#define BILENDACAMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE04CA0)
#define BILENDACAMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE04DF0)
#define BILENDACAMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE04D20)
#define BILENDACAMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE04F50)
#define BILENDACAMP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE04C60)
#define BILENDACAMP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE05040)
#define BILENDACAMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE05010)
#define BILENDACAMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE04C90)
#define BILENDACAMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE04F80)
#define BILENDACAMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE04FE0)

inline static constexpr unsigned int BILENDACAMP_TypeDefinitionIndex = 27512;

	class BILENDACAMP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BILENDACAMP")->GetStaticField(0x48890);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILENDACAMP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BILENDACAMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BILENDACAMP*))((::PBYTE)hIl2Cpp + BILENDACAMP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BILENDACAMP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BILENDACAMP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BILENDACAMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BILENDACAMP* Clone()
		{
			return ((::BILENDACAMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BILENDACAMP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BILENDACAMP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BILENDACAMP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BILENDACAMP*))((::PBYTE)hIl2Cpp + BILENDACAMP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BILENDACAMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BILENDACAMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BILENDACAMP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BILENDACAMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BILENDACAMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BILENDACAMP*))((::PBYTE)hIl2Cpp + BILENDACAMP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BILENDACAMP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
