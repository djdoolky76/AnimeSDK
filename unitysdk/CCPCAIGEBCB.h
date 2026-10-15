#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCPCAIGEBCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCPCAIGEBCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E07EA10)
#define CCPCAIGEBCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E07EC30)
#define CCPCAIGEBCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E07E600)
#define CCPCAIGEBCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E07E5D0)
#define CCPCAIGEBCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E07E5C0)
#define CCPCAIGEBCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E07E790)
#define CCPCAIGEBCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E07E690)
#define CCPCAIGEBCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E07E900)
#define CCPCAIGEBCB_IPMFBACCJNP_OFFSET UNITYSDK_OFFSET(0x1E07E680)
#define CCPCAIGEBCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E07E550)
#define CCPCAIGEBCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E07EAD0)
#define CCPCAIGEBCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E07EAA0)
#define CCPCAIGEBCB_ONABKMNBKBL_OFFSET UNITYSDK_OFFSET(0x1E07E670)
#define CCPCAIGEBCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E07E5B0)
#define CCPCAIGEBCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E07E930)
#define CCPCAIGEBCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E07E990)

inline static constexpr unsigned int CCPCAIGEBCB_TypeDefinitionIndex = 31712;

	class CCPCAIGEBCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OJNNHDEODJM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CCPCAIGEBCB")->GetStaticField(0xE960);
		}

		// static const ::System::Object HBBDEBOANEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCAIGEBCB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCPCAIGEBCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCPCAIGEBCB*))((::PBYTE)hIl2Cpp + CCPCAIGEBCB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCPCAIGEBCB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CCPCAIGEBCB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCAIGEBCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCPCAIGEBCB* Clone()
		{
			return ((::CCPCAIGEBCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCAIGEBCB_CLONE_OFFSET))(this);
		}

		::System::UInt32 ONABKMNBKBL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCAIGEBCB_ONABKMNBKBL_OFFSET))(this);
		}

		::System::Void IPMFBACCJNP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCPCAIGEBCB_IPMFBACCJNP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCPCAIGEBCB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCPCAIGEBCB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCPCAIGEBCB*))((::PBYTE)hIl2Cpp + CCPCAIGEBCB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCAIGEBCB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCAIGEBCB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCPCAIGEBCB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCAIGEBCB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCPCAIGEBCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCPCAIGEBCB*))((::PBYTE)hIl2Cpp + CCPCAIGEBCB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCPCAIGEBCB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
