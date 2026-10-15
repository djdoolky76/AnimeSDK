#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDOJADMFGKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDOJADMFGKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E604D40)
#define IDOJADMFGKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E604F60)
#define IDOJADMFGKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E604930)
#define IDOJADMFGKF_COEONDABKIH_OFFSET UNITYSDK_OFFSET(0x1E6049A0)
#define IDOJADMFGKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E604900)
#define IDOJADMFGKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6048F0)
#define IDOJADMFGKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E604AC0)
#define IDOJADMFGKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6049C0)
#define IDOJADMFGKF_FOCIPHMHHEB_OFFSET UNITYSDK_OFFSET(0x1E6049B0)
#define IDOJADMFGKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E604C30)
#define IDOJADMFGKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E604880)
#define IDOJADMFGKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E604E00)
#define IDOJADMFGKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E604DD0)
#define IDOJADMFGKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6048E0)
#define IDOJADMFGKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E604C60)
#define IDOJADMFGKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E604CC0)

inline static constexpr unsigned int IDOJADMFGKF_TypeDefinitionIndex = 29527;

	class IDOJADMFGKF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OCCJEGBDDNG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IDOJADMFGKF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IDOJADMFGKF*>**)UnitySDK::FromName("", "IDOJADMFGKF")->GetStaticField(0x47170);
		}

		// static const ::System::Object LCEHCAOINBN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOJADMFGKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDOJADMFGKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOJADMFGKF*))((::PBYTE)hIl2Cpp + IDOJADMFGKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDOJADMFGKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IDOJADMFGKF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IDOJADMFGKF*>*(*)())((::PBYTE)hIl2Cpp + IDOJADMFGKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOJADMFGKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDOJADMFGKF* Clone()
		{
			return ((::IDOJADMFGKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOJADMFGKF_CLONE_OFFSET))(this);
		}

		::System::UInt32 COEONDABKIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOJADMFGKF_COEONDABKIH_OFFSET))(this);
		}

		::System::Void FOCIPHMHHEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDOJADMFGKF_FOCIPHMHHEB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDOJADMFGKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDOJADMFGKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDOJADMFGKF*))((::PBYTE)hIl2Cpp + IDOJADMFGKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOJADMFGKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOJADMFGKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDOJADMFGKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOJADMFGKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDOJADMFGKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOJADMFGKF*))((::PBYTE)hIl2Cpp + IDOJADMFGKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDOJADMFGKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
