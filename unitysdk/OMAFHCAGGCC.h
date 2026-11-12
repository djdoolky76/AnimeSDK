#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMAFHCAGGCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMAFHCAGGCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F157220)
#define OMAFHCAGGCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1572C0)
#define OMAFHCAGGCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F156F10)
#define OMAFHCAGGCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F156EE0)
#define OMAFHCAGGCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F156ED0)
#define OMAFHCAGGCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F157020)
#define OMAFHCAGGCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F156F50)
#define OMAFHCAGGCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F157180)
#define OMAFHCAGGCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F156E90)
#define OMAFHCAGGCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F157270)
#define OMAFHCAGGCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F157240)
#define OMAFHCAGGCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F156EC0)
#define OMAFHCAGGCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1571B0)
#define OMAFHCAGGCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F157210)

inline static constexpr unsigned int OMAFHCAGGCC_TypeDefinitionIndex = 35866;

	class OMAFHCAGGCC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::OMAFHCAGGCC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OMAFHCAGGCC*>**)UnitySDK::FromName("", "OMAFHCAGGCC")->GetStaticField(0x20040);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAFHCAGGCC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMAFHCAGGCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMAFHCAGGCC*))((::PBYTE)hIl2Cpp + OMAFHCAGGCC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMAFHCAGGCC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OMAFHCAGGCC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OMAFHCAGGCC*>*(*)())((::PBYTE)hIl2Cpp + OMAFHCAGGCC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAFHCAGGCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMAFHCAGGCC* Clone()
		{
			return ((::OMAFHCAGGCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAFHCAGGCC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMAFHCAGGCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMAFHCAGGCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMAFHCAGGCC*))((::PBYTE)hIl2Cpp + OMAFHCAGGCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAFHCAGGCC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAFHCAGGCC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMAFHCAGGCC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAFHCAGGCC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMAFHCAGGCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMAFHCAGGCC*))((::PBYTE)hIl2Cpp + OMAFHCAGGCC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMAFHCAGGCC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
