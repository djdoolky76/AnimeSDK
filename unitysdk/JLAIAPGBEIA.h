#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLAIAPGBEIA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLAIAPGBEIA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FAA0C50)
#define JLAIAPGBEIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAA0CF0)
#define JLAIAPGBEIA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FAA0940)
#define JLAIAPGBEIA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAA0910)
#define JLAIAPGBEIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAA0900)
#define JLAIAPGBEIA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FAA0A50)
#define JLAIAPGBEIA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FAA0980)
#define JLAIAPGBEIA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FAA0BB0)
#define JLAIAPGBEIA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FAA08C0)
#define JLAIAPGBEIA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FAA0CA0)
#define JLAIAPGBEIA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FAA0C70)
#define JLAIAPGBEIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FAA08F0)
#define JLAIAPGBEIA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAA0BE0)
#define JLAIAPGBEIA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FAA0C40)

inline static constexpr unsigned int JLAIAPGBEIA_TypeDefinitionIndex = 28114;

	class JLAIAPGBEIA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JLAIAPGBEIA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JLAIAPGBEIA*>**)UnitySDK::FromName("", "JLAIAPGBEIA")->GetStaticField(0x51D30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAIAPGBEIA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLAIAPGBEIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLAIAPGBEIA*))((::PBYTE)hIl2Cpp + JLAIAPGBEIA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLAIAPGBEIA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JLAIAPGBEIA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JLAIAPGBEIA*>*(*)())((::PBYTE)hIl2Cpp + JLAIAPGBEIA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAIAPGBEIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLAIAPGBEIA* Clone()
		{
			return ((::JLAIAPGBEIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAIAPGBEIA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLAIAPGBEIA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLAIAPGBEIA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLAIAPGBEIA*))((::PBYTE)hIl2Cpp + JLAIAPGBEIA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAIAPGBEIA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAIAPGBEIA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLAIAPGBEIA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAIAPGBEIA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLAIAPGBEIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLAIAPGBEIA*))((::PBYTE)hIl2Cpp + JLAIAPGBEIA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLAIAPGBEIA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
