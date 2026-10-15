#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IADPNINDFOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IADPNINDFOK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5D62D0)
#define IADPNINDFOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D6370)
#define IADPNINDFOK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5D5FC0)
#define IADPNINDFOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5D5F90)
#define IADPNINDFOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D5F80)
#define IADPNINDFOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5D60D0)
#define IADPNINDFOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5D6000)
#define IADPNINDFOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5D6230)
#define IADPNINDFOK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5D5F40)
#define IADPNINDFOK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5D6320)
#define IADPNINDFOK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5D62F0)
#define IADPNINDFOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5D5F70)
#define IADPNINDFOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5D6260)
#define IADPNINDFOK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5D62C0)

inline static constexpr unsigned int IADPNINDFOK_TypeDefinitionIndex = 34885;

	class IADPNINDFOK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::IADPNINDFOK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IADPNINDFOK*>**)UnitySDK::FromName("", "IADPNINDFOK")->GetStaticField(0x40690);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IADPNINDFOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IADPNINDFOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IADPNINDFOK*))((::PBYTE)hIl2Cpp + IADPNINDFOK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IADPNINDFOK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IADPNINDFOK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IADPNINDFOK*>*(*)())((::PBYTE)hIl2Cpp + IADPNINDFOK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IADPNINDFOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IADPNINDFOK* Clone()
		{
			return ((::IADPNINDFOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IADPNINDFOK_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IADPNINDFOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IADPNINDFOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IADPNINDFOK*))((::PBYTE)hIl2Cpp + IADPNINDFOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IADPNINDFOK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IADPNINDFOK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IADPNINDFOK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IADPNINDFOK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IADPNINDFOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IADPNINDFOK*))((::PBYTE)hIl2Cpp + IADPNINDFOK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IADPNINDFOK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
