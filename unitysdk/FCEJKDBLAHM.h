#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCEJKDBLAHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCEJKDBLAHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F62BA00)
#define FCEJKDBLAHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F62BC20)
#define FCEJKDBLAHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F62B650)
#define FCEJKDBLAHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F62B620)
#define FCEJKDBLAHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F62B610)
#define FCEJKDBLAHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F62B780)
#define FCEJKDBLAHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F62B6B0)
#define FCEJKDBLAHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F62B8F0)
#define FCEJKDBLAHM_IKDPGIGDDDC_OFFSET UNITYSDK_OFFSET(0x1F62B690)
#define FCEJKDBLAHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F62B5D0)
#define FCEJKDBLAHM_KLCGEBLIANF_OFFSET UNITYSDK_OFFSET(0x1F62B6A0)
#define FCEJKDBLAHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F62BAC0)
#define FCEJKDBLAHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F62BA90)
#define FCEJKDBLAHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F62B600)
#define FCEJKDBLAHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F62B920)
#define FCEJKDBLAHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F62B980)

inline static constexpr unsigned int FCEJKDBLAHM_TypeDefinitionIndex = 30397;

	class FCEJKDBLAHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BJCGANEHKEO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FCEJKDBLAHM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FCEJKDBLAHM*>**)UnitySDK::FromName("", "FCEJKDBLAHM")->GetStaticField(0x58400);
		}

		// static const ::System::Object AFKPGOJFAFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJKDBLAHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCEJKDBLAHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCEJKDBLAHM*))((::PBYTE)hIl2Cpp + FCEJKDBLAHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCEJKDBLAHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FCEJKDBLAHM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FCEJKDBLAHM*>*(*)())((::PBYTE)hIl2Cpp + FCEJKDBLAHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJKDBLAHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCEJKDBLAHM* Clone()
		{
			return ((::FCEJKDBLAHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJKDBLAHM_CLONE_OFFSET))(this);
		}

		::System::UInt32 IKDPGIGDDDC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJKDBLAHM_IKDPGIGDDDC_OFFSET))(this);
		}

		::System::Void KLCGEBLIANF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCEJKDBLAHM_KLCGEBLIANF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCEJKDBLAHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCEJKDBLAHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCEJKDBLAHM*))((::PBYTE)hIl2Cpp + FCEJKDBLAHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJKDBLAHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJKDBLAHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCEJKDBLAHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJKDBLAHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCEJKDBLAHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCEJKDBLAHM*))((::PBYTE)hIl2Cpp + FCEJKDBLAHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCEJKDBLAHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
