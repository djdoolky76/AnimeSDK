#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KINFINGMICK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KINFINGMICK_AAPDNNOGAJF_OFFSET UNITYSDK_OFFSET(0x1E863E40)
#define KINFINGMICK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E864180)
#define KINFINGMICK_CCFFHLEFKDO_OFFSET UNITYSDK_OFFSET(0x1E863E30)
#define KINFINGMICK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E864450)
#define KINFINGMICK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E863DD0)
#define KINFINGMICK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E863DA0)
#define KINFINGMICK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E863D90)
#define KINFINGMICK_EMJOCDGPDGE_OFFSET UNITYSDK_OFFSET(0x1E863E50)
#define KINFINGMICK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E863F40)
#define KINFINGMICK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E863E60)
#define KINFINGMICK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E864010)
#define KINFINGMICK_HMOMIBLFOFL_OFFSET UNITYSDK_OFFSET(0x1E863E20)
#define KINFINGMICK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E863D50)
#define KINFINGMICK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8642D0)
#define KINFINGMICK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E864290)
#define KINFINGMICK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E863D80)
#define KINFINGMICK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E864040)
#define KINFINGMICK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8640A0)

inline static constexpr unsigned int KINFINGMICK_TypeDefinitionIndex = 28764;

	class KINFINGMICK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NKFNGEMOKPF; // 0x18
		::System::UInt32 HCKGCHBAPPO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KINFINGMICK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KINFINGMICK*>**)UnitySDK::FromName("", "KINFINGMICK")->GetStaticField(0x1B700);
		}

		// static const ::System::Object BOAEDHCIEHN; // 0x0
		// static const ::System::Object KCFPOKBCCDK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINFINGMICK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KINFINGMICK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KINFINGMICK*))((::PBYTE)hIl2Cpp + KINFINGMICK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KINFINGMICK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KINFINGMICK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KINFINGMICK*>*(*)())((::PBYTE)hIl2Cpp + KINFINGMICK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KINFINGMICK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KINFINGMICK* Clone()
		{
			return ((::KINFINGMICK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KINFINGMICK_CLONE_OFFSET))(this);
		}

		::System::UInt32 HMOMIBLFOFL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KINFINGMICK_HMOMIBLFOFL_OFFSET))(this);
		}

		::System::Void CCFFHLEFKDO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KINFINGMICK_CCFFHLEFKDO_OFFSET))(this, a1);
		}

		::System::UInt32 AAPDNNOGAJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KINFINGMICK_AAPDNNOGAJF_OFFSET))(this);
		}

		::System::Void EMJOCDGPDGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KINFINGMICK_EMJOCDGPDGE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KINFINGMICK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KINFINGMICK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KINFINGMICK*))((::PBYTE)hIl2Cpp + KINFINGMICK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KINFINGMICK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KINFINGMICK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KINFINGMICK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KINFINGMICK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KINFINGMICK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KINFINGMICK*))((::PBYTE)hIl2Cpp + KINFINGMICK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KINFINGMICK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
