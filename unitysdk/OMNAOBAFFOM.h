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

#define OMNAOBAFFOM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE8E970)
#define OMNAOBAFFOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE8EA10)
#define OMNAOBAFFOM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE8E660)
#define OMNAOBAFFOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE8E630)
#define OMNAOBAFFOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8E620)
#define OMNAOBAFFOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE8E770)
#define OMNAOBAFFOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE8E6A0)
#define OMNAOBAFFOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE8E8D0)
#define OMNAOBAFFOM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE8E5E0)
#define OMNAOBAFFOM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE8E9C0)
#define OMNAOBAFFOM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE8E990)
#define OMNAOBAFFOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE8E610)
#define OMNAOBAFFOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE8E900)
#define OMNAOBAFFOM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE8E960)

inline static constexpr unsigned int OMNAOBAFFOM_TypeDefinitionIndex = 27351;

	class OMNAOBAFFOM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::OMNAOBAFFOM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OMNAOBAFFOM*>**)UnitySDK::FromName("", "OMNAOBAFFOM")->GetStaticField(0x23330);
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
