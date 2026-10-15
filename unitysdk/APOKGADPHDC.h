#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APOKGADPHDC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define APOKGADPHDC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E67B7F0)
#define APOKGADPHDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67B890)
#define APOKGADPHDC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E67B490)
#define APOKGADPHDC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E67B460)
#define APOKGADPHDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E67B450)
#define APOKGADPHDC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E67B5F0)
#define APOKGADPHDC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E67B500)
#define APOKGADPHDC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E67B750)
#define APOKGADPHDC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E67B3E0)
#define APOKGADPHDC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E67B840)
#define APOKGADPHDC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E67B810)
#define APOKGADPHDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E67B440)
#define APOKGADPHDC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E67B780)
#define APOKGADPHDC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E67B7E0)

inline static constexpr unsigned int APOKGADPHDC_TypeDefinitionIndex = 33128;

	class APOKGADPHDC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "APOKGADPHDC")->GetStaticField(0x428E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOKGADPHDC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::APOKGADPHDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APOKGADPHDC*))((::PBYTE)hIl2Cpp + APOKGADPHDC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APOKGADPHDC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + APOKGADPHDC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + APOKGADPHDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::APOKGADPHDC* Clone()
		{
			return ((::APOKGADPHDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + APOKGADPHDC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APOKGADPHDC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::APOKGADPHDC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APOKGADPHDC*))((::PBYTE)hIl2Cpp + APOKGADPHDC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APOKGADPHDC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APOKGADPHDC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + APOKGADPHDC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APOKGADPHDC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::APOKGADPHDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APOKGADPHDC*))((::PBYTE)hIl2Cpp + APOKGADPHDC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + APOKGADPHDC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
