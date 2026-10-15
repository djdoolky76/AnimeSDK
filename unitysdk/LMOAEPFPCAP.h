#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMOAEPFPCAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LMOAEPFPCAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9ACF20)
#define LMOAEPFPCAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9AD140)
#define LMOAEPFPCAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9ACB70)
#define LMOAEPFPCAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9ACB40)
#define LMOAEPFPCAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9ACB30)
#define LMOAEPFPCAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9ACCA0)
#define LMOAEPFPCAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9ACBD0)
#define LMOAEPFPCAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9ACE10)
#define LMOAEPFPCAP_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E9ACBC0)
#define LMOAEPFPCAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9ACAF0)
#define LMOAEPFPCAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9ACFE0)
#define LMOAEPFPCAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9ACFB0)
#define LMOAEPFPCAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9ACB20)
#define LMOAEPFPCAP_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E9ACBB0)
#define LMOAEPFPCAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9ACE40)
#define LMOAEPFPCAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9ACEA0)

inline static constexpr unsigned int LMOAEPFPCAP_TypeDefinitionIndex = 27659;

	class LMOAEPFPCAP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CMCCOIIMHMC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LMOAEPFPCAP")->GetStaticField(0x4DE80);
		}

		// static const ::System::Object NLAPNDADCIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOAEPFPCAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMOAEPFPCAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMOAEPFPCAP*))((::PBYTE)hIl2Cpp + LMOAEPFPCAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMOAEPFPCAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LMOAEPFPCAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOAEPFPCAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LMOAEPFPCAP* Clone()
		{
			return ((::LMOAEPFPCAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOAEPFPCAP_CLONE_OFFSET))(this);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOAEPFPCAP_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMOAEPFPCAP_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMOAEPFPCAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LMOAEPFPCAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMOAEPFPCAP*))((::PBYTE)hIl2Cpp + LMOAEPFPCAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOAEPFPCAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOAEPFPCAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LMOAEPFPCAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOAEPFPCAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LMOAEPFPCAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMOAEPFPCAP*))((::PBYTE)hIl2Cpp + LMOAEPFPCAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LMOAEPFPCAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
