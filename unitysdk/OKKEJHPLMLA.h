#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKKEJHPLMLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKKEJHPLMLA_AEEKKDHOFCF_OFFSET UNITYSDK_OFFSET(0x1F144B40)
#define OKKEJHPLMLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F144EF0)
#define OKKEJHPLMLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F145150)
#define OKKEJHPLMLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F144AA0)
#define OKKEJHPLMLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F144A60)
#define OKKEJHPLMLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F144A50)
#define OKKEJHPLMLA_DJLCABACLKF_OFFSET UNITYSDK_OFFSET(0x1F144B50)
#define OKKEJHPLMLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F144C70)
#define OKKEJHPLMLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F144B60)
#define OKKEJHPLMLA_FCIACLFENJO_OFFSET UNITYSDK_OFFSET(0x1F144B20)
#define OKKEJHPLMLA_FEBHCCBIDOA_OFFSET UNITYSDK_OFFSET(0x1F144B30)
#define OKKEJHPLMLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F144D50)
#define OKKEJHPLMLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F1449E0)
#define OKKEJHPLMLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F144FD0)
#define OKKEJHPLMLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F144F90)
#define OKKEJHPLMLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F144A40)
#define OKKEJHPLMLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F144D80)
#define OKKEJHPLMLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F144DE0)

inline static constexpr unsigned int OKKEJHPLMLA_TypeDefinitionIndex = 27103;

	class OKKEJHPLMLA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean HONCCGDMBBL; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GKOHBFHOFKN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OKKEJHPLMLA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OKKEJHPLMLA*>**)UnitySDK::FromName("", "OKKEJHPLMLA")->GetStaticField(0x1E690);
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

		static ::Google::Protobuf::MessageParser_1<::OKKEJHPLMLA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OKKEJHPLMLA*>*(*)())((::PBYTE)hIl2Cpp + OKKEJHPLMLA_JJGHOBBFNJD_OFFSET))();
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
