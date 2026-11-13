#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLEHEHAMKLC;
class OHJJMCMJEHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLEHEHAMKLC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDB8060)
#define KLEHEHAMKLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDB8390)
#define KLEHEHAMKLC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDB7A40)
#define KLEHEHAMKLC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDB79D0)
#define KLEHEHAMKLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDB79C0)
#define KLEHEHAMKLC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDB7C50)
#define KLEHEHAMKLC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDB7AE0)
#define KLEHEHAMKLC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDB7F20)
#define KLEHEHAMKLC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDB7980)
#define KLEHEHAMKLC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDB81C0)
#define KLEHEHAMKLC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDB80C0)
#define KLEHEHAMKLC_NKINKCMJNGH_OFFSET UNITYSDK_OFFSET(0x1FDB7AC0)
#define KLEHEHAMKLC_OLFPHOONBJK_OFFSET UNITYSDK_OFFSET(0x1FDB7AD0)
#define KLEHEHAMKLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDB79B0)
#define KLEHEHAMKLC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDB7F70)
#define KLEHEHAMKLC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDB7FD0)

inline static constexpr unsigned int KLEHEHAMKLC_TypeDefinitionIndex = 34077;

	class KLEHEHAMKLC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OHJJMCMJEHL* AADIKPJMOFE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KLEHEHAMKLC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KLEHEHAMKLC*>**)UnitySDK::FromName("", "KLEHEHAMKLC")->GetStaticField(0x1B9D0);
		}

		// static const ::System::Object BCBAKDNFHCJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEHEHAMKLC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLEHEHAMKLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEHEHAMKLC*))((::PBYTE)hIl2Cpp + KLEHEHAMKLC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLEHEHAMKLC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KLEHEHAMKLC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KLEHEHAMKLC*>*(*)())((::PBYTE)hIl2Cpp + KLEHEHAMKLC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEHEHAMKLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLEHEHAMKLC* Clone()
		{
			return ((::KLEHEHAMKLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEHEHAMKLC_CLONE_OFFSET))(this);
		}

		::OHJJMCMJEHL* NKINKCMJNGH()
		{
			return ((::OHJJMCMJEHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEHEHAMKLC_NKINKCMJNGH_OFFSET))(this);
		}

		::System::Void OLFPHOONBJK(::OHJJMCMJEHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHJJMCMJEHL*))((::PBYTE)hIl2Cpp + KLEHEHAMKLC_OLFPHOONBJK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLEHEHAMKLC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLEHEHAMKLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLEHEHAMKLC*))((::PBYTE)hIl2Cpp + KLEHEHAMKLC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEHEHAMKLC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEHEHAMKLC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLEHEHAMKLC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEHEHAMKLC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLEHEHAMKLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEHEHAMKLC*))((::PBYTE)hIl2Cpp + KLEHEHAMKLC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLEHEHAMKLC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
