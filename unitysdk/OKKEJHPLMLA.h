#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKKEJHPLMLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKKEJHPLMLA_AEEKKDHOFCF_OFFSET UNITYSDK_OFFSET(0x1DE9C840)
#define OKKEJHPLMLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE9CBF0)
#define OKKEJHPLMLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE9CE50)
#define OKKEJHPLMLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE9C7A0)
#define OKKEJHPLMLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE9C760)
#define OKKEJHPLMLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE9C750)
#define OKKEJHPLMLA_DJLCABACLKF_OFFSET UNITYSDK_OFFSET(0x1DE9C850)
#define OKKEJHPLMLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE9C970)
#define OKKEJHPLMLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE9C860)
#define OKKEJHPLMLA_FCIACLFENJO_OFFSET UNITYSDK_OFFSET(0x1DE9C820)
#define OKKEJHPLMLA_FEBHCCBIDOA_OFFSET UNITYSDK_OFFSET(0x1DE9C830)
#define OKKEJHPLMLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE9CA50)
#define OKKEJHPLMLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE9C6E0)
#define OKKEJHPLMLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE9CCD0)
#define OKKEJHPLMLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE9CC90)
#define OKKEJHPLMLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE9C740)
#define OKKEJHPLMLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE9CA80)
#define OKKEJHPLMLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE9CAE0)

inline static constexpr unsigned int OKKEJHPLMLA_TypeDefinitionIndex = 26572;

	class OKKEJHPLMLA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean HONCCGDMBBL; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GKOHBFHOFKN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OKKEJHPLMLA")->GetStaticField(0x22AF0);
		}

		// static const ::System::Object OOGFOPMFOHP; // 0x0
		// static const ::System::Object OMCPIPGCDIP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEJHPLMLA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKKEJHPLMLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKKEJHPLMLA*))((::PBYTE)hIl2Cpp + OKKEJHPLMLA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKKEJHPLMLA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OKKEJHPLMLA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEJHPLMLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKKEJHPLMLA* Clone()
		{
			return ((::OKKEJHPLMLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEJHPLMLA_CLONE_OFFSET))(this);
		}

		::System::UInt32 FCIACLFENJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEJHPLMLA_FCIACLFENJO_OFFSET))(this);
		}

		::System::Void FEBHCCBIDOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKKEJHPLMLA_FEBHCCBIDOA_OFFSET))(this, a1);
		}

		::System::Boolean AEEKKDHOFCF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEJHPLMLA_AEEKKDHOFCF_OFFSET))(this);
		}

		::System::Void DJLCABACLKF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OKKEJHPLMLA_DJLCABACLKF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKKEJHPLMLA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKKEJHPLMLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKKEJHPLMLA*))((::PBYTE)hIl2Cpp + OKKEJHPLMLA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEJHPLMLA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEJHPLMLA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKKEJHPLMLA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEJHPLMLA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKKEJHPLMLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKKEJHPLMLA*))((::PBYTE)hIl2Cpp + OKKEJHPLMLA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKKEJHPLMLA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
