#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAEAEFEECCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FAEAEFEECCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6036F0)
#define FAEAEFEECCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F603790)
#define FAEAEFEECCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F603390)
#define FAEAEFEECCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F603360)
#define FAEAEFEECCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F603350)
#define FAEAEFEECCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6034F0)
#define FAEAEFEECCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F603400)
#define FAEAEFEECCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F603650)
#define FAEAEFEECCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6032E0)
#define FAEAEFEECCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F603740)
#define FAEAEFEECCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F603710)
#define FAEAEFEECCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F603340)
#define FAEAEFEECCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F603680)
#define FAEAEFEECCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6036E0)

inline static constexpr unsigned int FAEAEFEECCA_TypeDefinitionIndex = 29838;

	class FAEAEFEECCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FAEAEFEECCA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FAEAEFEECCA*>**)UnitySDK::FromName("", "FAEAEFEECCA")->GetStaticField(0x54FF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEAEFEECCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FAEAEFEECCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAEAEFEECCA*))((::PBYTE)hIl2Cpp + FAEAEFEECCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAEAEFEECCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FAEAEFEECCA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FAEAEFEECCA*>*(*)())((::PBYTE)hIl2Cpp + FAEAEFEECCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEAEFEECCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FAEAEFEECCA* Clone()
		{
			return ((::FAEAEFEECCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEAEFEECCA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAEAEFEECCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FAEAEFEECCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAEAEFEECCA*))((::PBYTE)hIl2Cpp + FAEAEFEECCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEAEFEECCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEAEFEECCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FAEAEFEECCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEAEFEECCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FAEAEFEECCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAEAEFEECCA*))((::PBYTE)hIl2Cpp + FAEAEFEECCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FAEAEFEECCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
