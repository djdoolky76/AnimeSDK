#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMAFHCAGGCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMAFHCAGGCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEAEF90)
#define OMAFHCAGGCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEAF030)
#define OMAFHCAGGCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEAEC80)
#define OMAFHCAGGCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEAEC50)
#define OMAFHCAGGCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAEC40)
#define OMAFHCAGGCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEAED90)
#define OMAFHCAGGCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEAECC0)
#define OMAFHCAGGCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEAEEF0)
#define OMAFHCAGGCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEAEC00)
#define OMAFHCAGGCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEAEFE0)
#define OMAFHCAGGCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEAEFB0)
#define OMAFHCAGGCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEAEC30)
#define OMAFHCAGGCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEAEF20)
#define OMAFHCAGGCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEAEF80)

inline static constexpr unsigned int OMAFHCAGGCC_TypeDefinitionIndex = 34938;

	class OMAFHCAGGCC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OMAFHCAGGCC")->GetStaticField(0x246A0);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OMAFHCAGGCC_JJGHOBBFNJD_OFFSET))();
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
