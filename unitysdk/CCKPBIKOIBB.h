#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCKPBIKOIBB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCKPBIKOIBB_AIJFCKCGLOA_OFFSET UNITYSDK_OFFSET(0x1E0781E0)
#define CCKPBIKOIBB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0784E0)
#define CCKPBIKOIBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E078700)
#define CCKPBIKOIBB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E078170)
#define CCKPBIKOIBB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E078140)
#define CCKPBIKOIBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E078130)
#define CCKPBIKOIBB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E078260)
#define CCKPBIKOIBB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E078200)
#define CCKPBIKOIBB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0783D0)
#define CCKPBIKOIBB_HNPOGHHMMJD_OFFSET UNITYSDK_OFFSET(0x1E0781F0)
#define CCKPBIKOIBB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0780C0)
#define CCKPBIKOIBB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0785A0)
#define CCKPBIKOIBB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E078570)
#define CCKPBIKOIBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E078120)
#define CCKPBIKOIBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E078400)
#define CCKPBIKOIBB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E078460)

inline static constexpr unsigned int CCKPBIKOIBB_TypeDefinitionIndex = 29192;

	class CCKPBIKOIBB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EEHIKMEPCKK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CCKPBIKOIBB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CCKPBIKOIBB*>**)UnitySDK::FromName("", "CCKPBIKOIBB")->GetStaticField(0xDC50);
		}

		// static const ::System::Object LDDDKGJPHBL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKPBIKOIBB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCKPBIKOIBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCKPBIKOIBB*))((::PBYTE)hIl2Cpp + CCKPBIKOIBB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCKPBIKOIBB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CCKPBIKOIBB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CCKPBIKOIBB*>*(*)())((::PBYTE)hIl2Cpp + CCKPBIKOIBB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKPBIKOIBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCKPBIKOIBB* Clone()
		{
			return ((::CCKPBIKOIBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKPBIKOIBB_CLONE_OFFSET))(this);
		}

		::System::UInt32 AIJFCKCGLOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKPBIKOIBB_AIJFCKCGLOA_OFFSET))(this);
		}

		::System::Void HNPOGHHMMJD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCKPBIKOIBB_HNPOGHHMMJD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCKPBIKOIBB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCKPBIKOIBB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCKPBIKOIBB*))((::PBYTE)hIl2Cpp + CCKPBIKOIBB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKPBIKOIBB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKPBIKOIBB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCKPBIKOIBB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKPBIKOIBB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCKPBIKOIBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCKPBIKOIBB*))((::PBYTE)hIl2Cpp + CCKPBIKOIBB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCKPBIKOIBB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
