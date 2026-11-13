#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILFJIIDEEBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILFJIIDEEBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x206B2C30)
#define ILFJIIDEEBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x206B2CD0)
#define ILFJIIDEEBI_CLONE_OFFSET UNITYSDK_OFFSET(0x206B2920)
#define ILFJIIDEEBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x206B28F0)
#define ILFJIIDEEBI_CTOR_OFFSET UNITYSDK_OFFSET(0x206B28E0)
#define ILFJIIDEEBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x206B2A30)
#define ILFJIIDEEBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x206B2960)
#define ILFJIIDEEBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x206B2B90)
#define ILFJIIDEEBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x206B28A0)
#define ILFJIIDEEBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x206B2C80)
#define ILFJIIDEEBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x206B2C50)
#define ILFJIIDEEBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206B28D0)
#define ILFJIIDEEBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x206B2BC0)
#define ILFJIIDEEBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x206B2C20)

inline static constexpr unsigned int ILFJIIDEEBI_TypeDefinitionIndex = 27120;

	class ILFJIIDEEBI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::ILFJIIDEEBI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ILFJIIDEEBI*>**)UnitySDK::FromName("", "ILFJIIDEEBI")->GetStaticField(0x4C630);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILFJIIDEEBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILFJIIDEEBI*))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILFJIIDEEBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ILFJIIDEEBI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ILFJIIDEEBI*>*(*)())((::PBYTE)hIl2Cpp + ILFJIIDEEBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILFJIIDEEBI* Clone()
		{
			return ((::ILFJIIDEEBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILFJIIDEEBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILFJIIDEEBI*))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILFJIIDEEBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILFJIIDEEBI*))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
