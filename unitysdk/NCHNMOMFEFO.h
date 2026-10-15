#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCHNMOMFEFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCHNMOMFEFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAB1D60)
#define NCHNMOMFEFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB1E00)
#define NCHNMOMFEFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAB1A50)
#define NCHNMOMFEFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAB1A20)
#define NCHNMOMFEFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB1A10)
#define NCHNMOMFEFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAB1B60)
#define NCHNMOMFEFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAB1A90)
#define NCHNMOMFEFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAB1CC0)
#define NCHNMOMFEFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAB19D0)
#define NCHNMOMFEFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAB1DB0)
#define NCHNMOMFEFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAB1D80)
#define NCHNMOMFEFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAB1A00)
#define NCHNMOMFEFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAB1CF0)
#define NCHNMOMFEFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAB1D50)

inline static constexpr unsigned int NCHNMOMFEFO_TypeDefinitionIndex = 31458;

	class NCHNMOMFEFO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NCHNMOMFEFO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NCHNMOMFEFO*>**)UnitySDK::FromName("", "NCHNMOMFEFO")->GetStaticField(0x5EF70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHNMOMFEFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCHNMOMFEFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCHNMOMFEFO*))((::PBYTE)hIl2Cpp + NCHNMOMFEFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCHNMOMFEFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NCHNMOMFEFO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NCHNMOMFEFO*>*(*)())((::PBYTE)hIl2Cpp + NCHNMOMFEFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHNMOMFEFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCHNMOMFEFO* Clone()
		{
			return ((::NCHNMOMFEFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHNMOMFEFO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCHNMOMFEFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCHNMOMFEFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCHNMOMFEFO*))((::PBYTE)hIl2Cpp + NCHNMOMFEFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHNMOMFEFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHNMOMFEFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCHNMOMFEFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHNMOMFEFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCHNMOMFEFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCHNMOMFEFO*))((::PBYTE)hIl2Cpp + NCHNMOMFEFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCHNMOMFEFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
