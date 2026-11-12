#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCPCAIGEBCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCPCAIGEBCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3435E0)
#define CCPCAIGEBCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F343800)
#define CCPCAIGEBCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F3431D0)
#define CCPCAIGEBCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3431A0)
#define CCPCAIGEBCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F343190)
#define CCPCAIGEBCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F343360)
#define CCPCAIGEBCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F343260)
#define CCPCAIGEBCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F3434D0)
#define CCPCAIGEBCB_IPMFBACCJNP_OFFSET UNITYSDK_OFFSET(0x1F343250)
#define CCPCAIGEBCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F343120)
#define CCPCAIGEBCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F3436A0)
#define CCPCAIGEBCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F343670)
#define CCPCAIGEBCB_ONABKMNBKBL_OFFSET UNITYSDK_OFFSET(0x1F343240)
#define CCPCAIGEBCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F343180)
#define CCPCAIGEBCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F343500)
#define CCPCAIGEBCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F343560)

inline static constexpr unsigned int CCPCAIGEBCB_TypeDefinitionIndex = 32625;

	class CCPCAIGEBCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OJNNHDEODJM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CCPCAIGEBCB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CCPCAIGEBCB*>**)UnitySDK::FromName("", "CCPCAIGEBCB")->GetStaticField(0x5BE00);
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

		static ::Google::Protobuf::MessageParser_1<::CCPCAIGEBCB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CCPCAIGEBCB*>*(*)())((::PBYTE)hIl2Cpp + CCPCAIGEBCB_JJGHOBBFNJD_OFFSET))();
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
