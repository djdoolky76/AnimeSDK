#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCCHABOPEFJ;
class MOFKNBAKKDI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MCCHABOPEFJ_APDCLEMNBGJ_OFFSET UNITYSDK_OFFSET(0x1E9C3760)
#define MCCHABOPEFJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9C3D30)
#define MCCHABOPEFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C4070)
#define MCCHABOPEFJ_CJLPBCPNKMB_OFFSET UNITYSDK_OFFSET(0x1E9C3770)
#define MCCHABOPEFJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9C3690)
#define MCCHABOPEFJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9C3600)
#define MCCHABOPEFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C35F0)
#define MCCHABOPEFJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9C3920)
#define MCCHABOPEFJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9C3780)
#define MCCHABOPEFJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9C3BF0)
#define MCCHABOPEFJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9C3580)
#define MCCHABOPEFJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9C3E80)
#define MCCHABOPEFJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9C3D90)
#define MCCHABOPEFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9C35E0)
#define MCCHABOPEFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9C3C40)
#define MCCHABOPEFJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9C3CA0)

inline static constexpr unsigned int MCCHABOPEFJ_TypeDefinitionIndex = 31804;

	class MCCHABOPEFJ : public ::System::Object
	{
	public:
		::MOFKNBAKKDI* OOEJFHJPOPM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MCCHABOPEFJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MCCHABOPEFJ*>**)UnitySDK::FromName("", "MCCHABOPEFJ")->GetStaticField(0x49050);
		}

		// static const ::System::Object MCPENGJJEFA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCHABOPEFJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MCCHABOPEFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCCHABOPEFJ*))((::PBYTE)hIl2Cpp + MCCHABOPEFJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCCHABOPEFJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MCCHABOPEFJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MCCHABOPEFJ*>*(*)())((::PBYTE)hIl2Cpp + MCCHABOPEFJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCHABOPEFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MCCHABOPEFJ* Clone()
		{
			return ((::MCCHABOPEFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCHABOPEFJ_CLONE_OFFSET))(this);
		}

		::MOFKNBAKKDI* APDCLEMNBGJ()
		{
			return ((::MOFKNBAKKDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCHABOPEFJ_APDCLEMNBGJ_OFFSET))(this);
		}

		::System::Void CJLPBCPNKMB(::MOFKNBAKKDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOFKNBAKKDI*))((::PBYTE)hIl2Cpp + MCCHABOPEFJ_CJLPBCPNKMB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MCCHABOPEFJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MCCHABOPEFJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCCHABOPEFJ*))((::PBYTE)hIl2Cpp + MCCHABOPEFJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCHABOPEFJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCHABOPEFJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MCCHABOPEFJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCHABOPEFJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MCCHABOPEFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCCHABOPEFJ*))((::PBYTE)hIl2Cpp + MCCHABOPEFJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MCCHABOPEFJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
