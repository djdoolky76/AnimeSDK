#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOMPILNAEEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IOMPILNAEEO_AEACNOLJFLF_OFFSET UNITYSDK_OFFSET(0x1E6D9AE0)
#define IOMPILNAEEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6D9F40)
#define IOMPILNAEEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DA220)
#define IOMPILNAEEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6D9A00)
#define IOMPILNAEEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6D99C0)
#define IOMPILNAEEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D99B0)
#define IOMPILNAEEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6D9C20)
#define IOMPILNAEEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6D9AF0)
#define IOMPILNAEEO_FLMHGGCELJG_OFFSET UNITYSDK_OFFSET(0x1E6D9A70)
#define IOMPILNAEEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6D9D20)
#define IOMPILNAEEO_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1E6D9AD0)
#define IOMPILNAEEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6D9940)
#define IOMPILNAEEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6DA070)
#define IOMPILNAEEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6DA020)
#define IOMPILNAEEO_MGKDKOLBLCF_OFFSET UNITYSDK_OFFSET(0x1E6D9A80)
#define IOMPILNAEEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6D99A0)
#define IOMPILNAEEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6D9DF0)
#define IOMPILNAEEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6D9E50)

inline static constexpr unsigned int IOMPILNAEEO_TypeDefinitionIndex = 25673;

	class IOMPILNAEEO : public ::System::Object
	{
	public:
		::System::String* LIDAPDDKAHH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 BFOBOOGAHKB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IOMPILNAEEO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IOMPILNAEEO*>**)UnitySDK::FromName("", "IOMPILNAEEO")->GetStaticField(0x59F50);
		}

		// static const ::System::Object CJNPCKMKDMO; // 0x0
		// static const ::System::Object HOHDLIKKMBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMPILNAEEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IOMPILNAEEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOMPILNAEEO*))((::PBYTE)hIl2Cpp + IOMPILNAEEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOMPILNAEEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IOMPILNAEEO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IOMPILNAEEO*>*(*)())((::PBYTE)hIl2Cpp + IOMPILNAEEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMPILNAEEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IOMPILNAEEO* Clone()
		{
			return ((::IOMPILNAEEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMPILNAEEO_CLONE_OFFSET))(this);
		}

		::System::String* FLMHGGCELJG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMPILNAEEO_FLMHGGCELJG_OFFSET))(this);
		}

		::System::Void MGKDKOLBLCF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IOMPILNAEEO_MGKDKOLBLCF_OFFSET))(this, a1);
		}

		::System::UInt32 HIDEJDELEEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMPILNAEEO_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Void AEACNOLJFLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IOMPILNAEEO_AEACNOLJFLF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IOMPILNAEEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IOMPILNAEEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOMPILNAEEO*))((::PBYTE)hIl2Cpp + IOMPILNAEEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMPILNAEEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMPILNAEEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IOMPILNAEEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMPILNAEEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IOMPILNAEEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOMPILNAEEO*))((::PBYTE)hIl2Cpp + IOMPILNAEEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IOMPILNAEEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
