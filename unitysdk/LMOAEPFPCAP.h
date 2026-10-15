#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMOAEPFPCAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LMOAEPFPCAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E97F8D0)
#define LMOAEPFPCAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E97FAF0)
#define LMOAEPFPCAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E97F520)
#define LMOAEPFPCAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E97F4F0)
#define LMOAEPFPCAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E97F4E0)
#define LMOAEPFPCAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E97F650)
#define LMOAEPFPCAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E97F580)
#define LMOAEPFPCAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E97F7C0)
#define LMOAEPFPCAP_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E97F570)
#define LMOAEPFPCAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E97F4A0)
#define LMOAEPFPCAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E97F990)
#define LMOAEPFPCAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E97F960)
#define LMOAEPFPCAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E97F4D0)
#define LMOAEPFPCAP_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E97F560)
#define LMOAEPFPCAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E97F7F0)
#define LMOAEPFPCAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E97F850)

inline static constexpr unsigned int LMOAEPFPCAP_TypeDefinitionIndex = 27659;

	class LMOAEPFPCAP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CMCCOIIMHMC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LMOAEPFPCAP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LMOAEPFPCAP*>**)UnitySDK::FromName("", "LMOAEPFPCAP")->GetStaticField(0x3EE30);
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

		static ::Google::Protobuf::MessageParser_1<::LMOAEPFPCAP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LMOAEPFPCAP*>*(*)())((::PBYTE)hIl2Cpp + LMOAEPFPCAP_JJGHOBBFNJD_OFFSET))();
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
