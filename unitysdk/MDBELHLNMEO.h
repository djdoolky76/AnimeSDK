#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDBELHLNMEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MDBELHLNMEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD46CE0)
#define MDBELHLNMEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD46F00)
#define MDBELHLNMEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD468D0)
#define MDBELHLNMEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD468A0)
#define MDBELHLNMEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD46890)
#define MDBELHLNMEO_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1FD46950)
#define MDBELHLNMEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD46A60)
#define MDBELHLNMEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD46960)
#define MDBELHLNMEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD46BD0)
#define MDBELHLNMEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD46820)
#define MDBELHLNMEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD46DA0)
#define MDBELHLNMEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD46D70)
#define MDBELHLNMEO_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1FD46940)
#define MDBELHLNMEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD46880)
#define MDBELHLNMEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD46C00)
#define MDBELHLNMEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD46C60)

inline static constexpr unsigned int MDBELHLNMEO_TypeDefinitionIndex = 29987;

	class MDBELHLNMEO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MJIMFDKFGDE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MDBELHLNMEO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MDBELHLNMEO*>**)UnitySDK::FromName("", "MDBELHLNMEO")->GetStaticField(0x4A1A0);
		}

		// static const ::System::Object MJJGNBCFCOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBELHLNMEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MDBELHLNMEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDBELHLNMEO*))((::PBYTE)hIl2Cpp + MDBELHLNMEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDBELHLNMEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MDBELHLNMEO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MDBELHLNMEO*>*(*)())((::PBYTE)hIl2Cpp + MDBELHLNMEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBELHLNMEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MDBELHLNMEO* Clone()
		{
			return ((::MDBELHLNMEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBELHLNMEO_CLONE_OFFSET))(this);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBELHLNMEO_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDBELHLNMEO_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDBELHLNMEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MDBELHLNMEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MDBELHLNMEO*))((::PBYTE)hIl2Cpp + MDBELHLNMEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBELHLNMEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBELHLNMEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MDBELHLNMEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBELHLNMEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MDBELHLNMEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDBELHLNMEO*))((::PBYTE)hIl2Cpp + MDBELHLNMEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MDBELHLNMEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
