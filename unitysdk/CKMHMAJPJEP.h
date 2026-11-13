#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKMHMAJPJEP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKMHMAJPJEP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20599B80)
#define CKMHMAJPJEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x20599C20)
#define CKMHMAJPJEP_CLONE_OFFSET UNITYSDK_OFFSET(0x20599870)
#define CKMHMAJPJEP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20599840)
#define CKMHMAJPJEP_CTOR_OFFSET UNITYSDK_OFFSET(0x20599830)
#define CKMHMAJPJEP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20599980)
#define CKMHMAJPJEP_EQUALS_OFFSET UNITYSDK_OFFSET(0x205998B0)
#define CKMHMAJPJEP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20599AE0)
#define CKMHMAJPJEP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205997F0)
#define CKMHMAJPJEP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20599BD0)
#define CKMHMAJPJEP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20599BA0)
#define CKMHMAJPJEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20599820)
#define CKMHMAJPJEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20599B10)
#define CKMHMAJPJEP_WRITETO_OFFSET UNITYSDK_OFFSET(0x20599B70)

inline static constexpr unsigned int CKMHMAJPJEP_TypeDefinitionIndex = 26514;

	class CKMHMAJPJEP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CKMHMAJPJEP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKMHMAJPJEP*>**)UnitySDK::FromName("", "CKMHMAJPJEP")->GetStaticField(0x12C00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHMAJPJEP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKMHMAJPJEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKMHMAJPJEP*))((::PBYTE)hIl2Cpp + CKMHMAJPJEP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKMHMAJPJEP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKMHMAJPJEP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKMHMAJPJEP*>*(*)())((::PBYTE)hIl2Cpp + CKMHMAJPJEP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHMAJPJEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKMHMAJPJEP* Clone()
		{
			return ((::CKMHMAJPJEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHMAJPJEP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKMHMAJPJEP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKMHMAJPJEP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKMHMAJPJEP*))((::PBYTE)hIl2Cpp + CKMHMAJPJEP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHMAJPJEP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHMAJPJEP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKMHMAJPJEP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHMAJPJEP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKMHMAJPJEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKMHMAJPJEP*))((::PBYTE)hIl2Cpp + CKMHMAJPJEP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKMHMAJPJEP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
