#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFHACDNMNAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFHACDNMNAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE47530)
#define OFHACDNMNAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE475D0)
#define OFHACDNMNAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE47220)
#define OFHACDNMNAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE471F0)
#define OFHACDNMNAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE471E0)
#define OFHACDNMNAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE47330)
#define OFHACDNMNAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE47260)
#define OFHACDNMNAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE47490)
#define OFHACDNMNAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE471A0)
#define OFHACDNMNAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE47580)
#define OFHACDNMNAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE47550)
#define OFHACDNMNAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE471D0)
#define OFHACDNMNAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE474C0)
#define OFHACDNMNAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE47520)

inline static constexpr unsigned int OFHACDNMNAL_TypeDefinitionIndex = 28109;

	class OFHACDNMNAL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::OFHACDNMNAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OFHACDNMNAL*>**)UnitySDK::FromName("", "OFHACDNMNAL")->GetStaticField(0x176B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHACDNMNAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFHACDNMNAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFHACDNMNAL*))((::PBYTE)hIl2Cpp + OFHACDNMNAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFHACDNMNAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OFHACDNMNAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OFHACDNMNAL*>*(*)())((::PBYTE)hIl2Cpp + OFHACDNMNAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHACDNMNAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFHACDNMNAL* Clone()
		{
			return ((::OFHACDNMNAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHACDNMNAL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFHACDNMNAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFHACDNMNAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFHACDNMNAL*))((::PBYTE)hIl2Cpp + OFHACDNMNAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHACDNMNAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHACDNMNAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFHACDNMNAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHACDNMNAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFHACDNMNAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFHACDNMNAL*))((::PBYTE)hIl2Cpp + OFHACDNMNAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFHACDNMNAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
