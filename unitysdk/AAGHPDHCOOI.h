#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAGHPDHCOOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AAGHPDHCOOI_AIJFCKCGLOA_OFFSET UNITYSDK_OFFSET(0x1DDB9B00)
#define AAGHPDHCOOI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDB9E70)
#define AAGHPDHCOOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDBA090)
#define AAGHPDHCOOI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDB9AC0)
#define AAGHPDHCOOI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDB9A90)
#define AAGHPDHCOOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB9A80)
#define AAGHPDHCOOI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDB9BF0)
#define AAGHPDHCOOI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDB9B20)
#define AAGHPDHCOOI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDB9D60)
#define AAGHPDHCOOI_HNPOGHHMMJD_OFFSET UNITYSDK_OFFSET(0x1DDB9B10)
#define AAGHPDHCOOI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDB9A40)
#define AAGHPDHCOOI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDB9F30)
#define AAGHPDHCOOI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDB9F00)
#define AAGHPDHCOOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDB9A70)
#define AAGHPDHCOOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDB9D90)
#define AAGHPDHCOOI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDB9DF0)

	class AAGHPDHCOOI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EEHIKMEPCKK; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AAGHPDHCOOI")->GetStaticField(0x36C00);
		}

		// static const ::System::Object LDDDKGJPHBL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGHPDHCOOI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AAGHPDHCOOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAGHPDHCOOI*))((::PBYTE)hIl2Cpp + AAGHPDHCOOI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAGHPDHCOOI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AAGHPDHCOOI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGHPDHCOOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AAGHPDHCOOI* Clone()
		{
			return ((::AAGHPDHCOOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGHPDHCOOI_CLONE_OFFSET))(this);
		}

		::System::UInt32 AIJFCKCGLOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGHPDHCOOI_AIJFCKCGLOA_OFFSET))(this);
		}

		::System::Void HNPOGHHMMJD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAGHPDHCOOI_HNPOGHHMMJD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAGHPDHCOOI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AAGHPDHCOOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AAGHPDHCOOI*))((::PBYTE)hIl2Cpp + AAGHPDHCOOI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGHPDHCOOI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGHPDHCOOI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AAGHPDHCOOI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGHPDHCOOI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AAGHPDHCOOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAGHPDHCOOI*))((::PBYTE)hIl2Cpp + AAGHPDHCOOI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AAGHPDHCOOI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
