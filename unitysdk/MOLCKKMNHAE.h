#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOLCKKMNHAE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOLCKKMNHAE_BGFKPBAOIJJ_OFFSET UNITYSDK_OFFSET(0x1EA80E10)
#define MOLCKKMNHAE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA811A0)
#define MOLCKKMNHAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA813C0)
#define MOLCKKMNHAE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA80D90)
#define MOLCKKMNHAE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA80D60)
#define MOLCKKMNHAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA80D50)
#define MOLCKKMNHAE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA80F20)
#define MOLCKKMNHAE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA80E20)
#define MOLCKKMNHAE_FPEMHBJBFBB_OFFSET UNITYSDK_OFFSET(0x1EA80E00)
#define MOLCKKMNHAE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA81090)
#define MOLCKKMNHAE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA80CE0)
#define MOLCKKMNHAE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA81260)
#define MOLCKKMNHAE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA81230)
#define MOLCKKMNHAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA80D40)
#define MOLCKKMNHAE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA810C0)
#define MOLCKKMNHAE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA81120)

inline static constexpr unsigned int MOLCKKMNHAE_TypeDefinitionIndex = 32694;

	class MOLCKKMNHAE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EFAHFIBAOJP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MOLCKKMNHAE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MOLCKKMNHAE*>**)UnitySDK::FromName("", "MOLCKKMNHAE")->GetStaticField(0x5ADF0);
		}

		// static const ::System::Object GCPLFCAECDJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLCKKMNHAE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOLCKKMNHAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOLCKKMNHAE*))((::PBYTE)hIl2Cpp + MOLCKKMNHAE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLCKKMNHAE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MOLCKKMNHAE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MOLCKKMNHAE*>*(*)())((::PBYTE)hIl2Cpp + MOLCKKMNHAE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLCKKMNHAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOLCKKMNHAE* Clone()
		{
			return ((::MOLCKKMNHAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLCKKMNHAE_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPEMHBJBFBB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLCKKMNHAE_FPEMHBJBFBB_OFFSET))(this);
		}

		::System::Void BGFKPBAOIJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLCKKMNHAE_BGFKPBAOIJJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLCKKMNHAE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOLCKKMNHAE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOLCKKMNHAE*))((::PBYTE)hIl2Cpp + MOLCKKMNHAE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLCKKMNHAE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLCKKMNHAE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOLCKKMNHAE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLCKKMNHAE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOLCKKMNHAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOLCKKMNHAE*))((::PBYTE)hIl2Cpp + MOLCKKMNHAE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOLCKKMNHAE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
