#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMNAOBAFFOM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMNAOBAFFOM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F183D90)
#define OMNAOBAFFOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F183E30)
#define OMNAOBAFFOM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F183A80)
#define OMNAOBAFFOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F183A50)
#define OMNAOBAFFOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F183A40)
#define OMNAOBAFFOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F183B90)
#define OMNAOBAFFOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F183AC0)
#define OMNAOBAFFOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F183CF0)
#define OMNAOBAFFOM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F183A00)
#define OMNAOBAFFOM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F183DE0)
#define OMNAOBAFFOM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F183DB0)
#define OMNAOBAFFOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F183A30)
#define OMNAOBAFFOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F183D20)
#define OMNAOBAFFOM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F183D80)

inline static constexpr unsigned int OMNAOBAFFOM_TypeDefinitionIndex = 27882;

	class OMNAOBAFFOM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::OMNAOBAFFOM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OMNAOBAFFOM*>**)UnitySDK::FromName("", "OMNAOBAFFOM")->GetStaticField(0x25240);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNAOBAFFOM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMNAOBAFFOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNAOBAFFOM*))((::PBYTE)hIl2Cpp + OMNAOBAFFOM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMNAOBAFFOM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OMNAOBAFFOM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OMNAOBAFFOM*>*(*)())((::PBYTE)hIl2Cpp + OMNAOBAFFOM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNAOBAFFOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMNAOBAFFOM* Clone()
		{
			return ((::OMNAOBAFFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNAOBAFFOM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMNAOBAFFOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMNAOBAFFOM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMNAOBAFFOM*))((::PBYTE)hIl2Cpp + OMNAOBAFFOM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNAOBAFFOM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNAOBAFFOM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMNAOBAFFOM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNAOBAFFOM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMNAOBAFFOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNAOBAFFOM*))((::PBYTE)hIl2Cpp + OMNAOBAFFOM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMNAOBAFFOM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
