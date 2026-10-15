#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GANGPOOHAKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GANGPOOHAKI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E425160)
#define GANGPOOHAKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E425380)
#define GANGPOOHAKI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E424D50)
#define GANGPOOHAKI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E424D20)
#define GANGPOOHAKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E424D10)
#define GANGPOOHAKI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E424EE0)
#define GANGPOOHAKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E424DE0)
#define GANGPOOHAKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E425050)
#define GANGPOOHAKI_IKDPGIGDDDC_OFFSET UNITYSDK_OFFSET(0x1E424DC0)
#define GANGPOOHAKI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E424CA0)
#define GANGPOOHAKI_KLCGEBLIANF_OFFSET UNITYSDK_OFFSET(0x1E424DD0)
#define GANGPOOHAKI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E425220)
#define GANGPOOHAKI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4251F0)
#define GANGPOOHAKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E424D00)
#define GANGPOOHAKI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E425080)
#define GANGPOOHAKI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4250E0)

inline static constexpr unsigned int GANGPOOHAKI_TypeDefinitionIndex = 31710;

	class GANGPOOHAKI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BJCGANEHKEO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GANGPOOHAKI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GANGPOOHAKI*>**)UnitySDK::FromName("", "GANGPOOHAKI")->GetStaticField(0xC820);
		}

		// static const ::System::Object AFKPGOJFAFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPOOHAKI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GANGPOOHAKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GANGPOOHAKI*))((::PBYTE)hIl2Cpp + GANGPOOHAKI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GANGPOOHAKI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GANGPOOHAKI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GANGPOOHAKI*>*(*)())((::PBYTE)hIl2Cpp + GANGPOOHAKI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPOOHAKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GANGPOOHAKI* Clone()
		{
			return ((::GANGPOOHAKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPOOHAKI_CLONE_OFFSET))(this);
		}

		::System::UInt32 IKDPGIGDDDC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPOOHAKI_IKDPGIGDDDC_OFFSET))(this);
		}

		::System::Void KLCGEBLIANF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GANGPOOHAKI_KLCGEBLIANF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GANGPOOHAKI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GANGPOOHAKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GANGPOOHAKI*))((::PBYTE)hIl2Cpp + GANGPOOHAKI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPOOHAKI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPOOHAKI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GANGPOOHAKI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPOOHAKI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GANGPOOHAKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GANGPOOHAKI*))((::PBYTE)hIl2Cpp + GANGPOOHAKI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GANGPOOHAKI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
