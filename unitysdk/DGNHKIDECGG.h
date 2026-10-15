#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGNHKIDECGG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DGNHKIDECGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E183EA0)
#define DGNHKIDECGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E183F40)
#define DGNHKIDECGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E183B90)
#define DGNHKIDECGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E183B60)
#define DGNHKIDECGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E183B50)
#define DGNHKIDECGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E183CA0)
#define DGNHKIDECGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E183BD0)
#define DGNHKIDECGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E183E00)
#define DGNHKIDECGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E183B10)
#define DGNHKIDECGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E183EF0)
#define DGNHKIDECGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E183EC0)
#define DGNHKIDECGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E183B40)
#define DGNHKIDECGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E183E30)
#define DGNHKIDECGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E183E90)

inline static constexpr unsigned int DGNHKIDECGG_TypeDefinitionIndex = 27590;

	class DGNHKIDECGG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::DGNHKIDECGG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DGNHKIDECGG*>**)UnitySDK::FromName("", "DGNHKIDECGG")->GetStaticField(0x30560);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNHKIDECGG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DGNHKIDECGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGNHKIDECGG*))((::PBYTE)hIl2Cpp + DGNHKIDECGG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGNHKIDECGG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DGNHKIDECGG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DGNHKIDECGG*>*(*)())((::PBYTE)hIl2Cpp + DGNHKIDECGG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNHKIDECGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DGNHKIDECGG* Clone()
		{
			return ((::DGNHKIDECGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNHKIDECGG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGNHKIDECGG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DGNHKIDECGG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DGNHKIDECGG*))((::PBYTE)hIl2Cpp + DGNHKIDECGG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNHKIDECGG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNHKIDECGG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DGNHKIDECGG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNHKIDECGG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DGNHKIDECGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGNHKIDECGG*))((::PBYTE)hIl2Cpp + DGNHKIDECGG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DGNHKIDECGG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
