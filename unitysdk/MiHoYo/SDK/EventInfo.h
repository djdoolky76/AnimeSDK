#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ActionType.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class EventInfo; }
namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_EVENTINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0xAF78EC0)
#define MIHOYO_SDK_EVENTINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0xAF798E0)
#define MIHOYO_SDK_EVENTINFO_CLONE_OFFSET UNITYSDK_OFFSET(0xAF782C0)
#define MIHOYO_SDK_EVENTINFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0xAF781B0)
#define MIHOYO_SDK_EVENTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xAF78120)
#define MIHOYO_SDK_EVENTINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xAF78710)
#define MIHOYO_SDK_EVENTINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF786B0)
#define MIHOYO_SDK_EVENTINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAF78870)
#define MIHOYO_SDK_EVENTINFO_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xAF783C0)
#define MIHOYO_SDK_EVENTINFO_GET_BTNNAME_OFFSET UNITYSDK_OFFSET(0xAF783E0)
#define MIHOYO_SDK_EVENTINFO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xAF77EE0)
#define MIHOYO_SDK_EVENTINFO_GET_EXTRAINFO_OFFSET UNITYSDK_OFFSET(0xAF786A0)
#define MIHOYO_SDK_EVENTINFO_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xAF785F0)
#define MIHOYO_SDK_EVENTINFO_GET_MODULEID_OFFSET UNITYSDK_OFFSET(0xAF78490)
#define MIHOYO_SDK_EVENTINFO_GET_MODULENAME_OFFSET UNITYSDK_OFFSET(0xAF78540)
#define MIHOYO_SDK_EVENTINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0xAF77E80)
#define MIHOYO_SDK_EVENTINFO_GET_TIME_OFFSET UNITYSDK_OFFSET(0xAF78310)
#define MIHOYO_SDK_EVENTINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0xAF79460)
#define MIHOYO_SDK_EVENTINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0xAF791D0)
#define MIHOYO_SDK_EVENTINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xAF780C0)
#define MIHOYO_SDK_EVENTINFO_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xAF783D0)
#define MIHOYO_SDK_EVENTINFO_SET_BTNNAME_OFFSET UNITYSDK_OFFSET(0xAF783F0)
#define MIHOYO_SDK_EVENTINFO_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xAF78600)
#define MIHOYO_SDK_EVENTINFO_SET_MODULEID_OFFSET UNITYSDK_OFFSET(0xAF784A0)
#define MIHOYO_SDK_EVENTINFO_SET_MODULENAME_OFFSET UNITYSDK_OFFSET(0xAF78550)
#define MIHOYO_SDK_EVENTINFO_SET_TIME_OFFSET UNITYSDK_OFFSET(0xAF78320)
#define MIHOYO_SDK_EVENTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAF78B40)
#define MIHOYO_SDK_EVENTINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0xAF78BA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EventInfo_TypeDefinitionIndex = 46368;

	class EventInfo : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>* extraInfo_; // 0x10
		::System::String* moduleId_; // 0x18
		::System::String* index_; // 0x20
		::System::String* moduleName_; // 0x28
		::System::String* btnName_; // 0x30
		::System::String* time_; // 0x38
		::MiHoYo::SDK::ActionType actionId_; // 0x40
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::EventInfo*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::EventInfo*>**)UnitySDK::FromName("MiHoYo.SDK", "EventInfo")->GetStaticField(0x214B0);
		}

		static ::System::Object** StaticGet__map_extraInfo_codec()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "EventInfo")->GetStaticField(0x214B8);
		}

		// static const ::System::Object TimeFieldNumber; // 0x0
		// static const ::System::Object ActionIdFieldNumber; // 0x0
		// static const ::System::Object BtnNameFieldNumber; // 0x0
		// static const ::System::Object ModuleIdFieldNumber; // 0x0
		// static const ::System::Object ModuleNameFieldNumber; // 0x0
		// static const ::System::Object IndexFieldNumber; // 0x0
		// static const ::System::Object ExtraInfoFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::EventInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::EventInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::EventInfo*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::EventInfo*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::EventInfo* Clone()
		{
			return ((::MiHoYo::SDK::EventInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_CLONE_OFFSET))(this);
		}

		::System::String* get_Time()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_SET_TIME_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ActionType get_ActionId()
		{
			return ((::MiHoYo::SDK::ActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionId(::MiHoYo::SDK::ActionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ActionType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_SET_ACTIONID_OFFSET))(this, a1);
		}

		::System::String* get_BtnName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_BTNNAME_OFFSET))(this);
		}

		::System::Void set_BtnName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_SET_BTNNAME_OFFSET))(this, a1);
		}

		::System::String* get_ModuleId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_MODULEID_OFFSET))(this);
		}

		::System::Void set_ModuleId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_SET_MODULEID_OFFSET))(this, a1);
		}

		::System::String* get_ModuleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_MODULENAME_OFFSET))(this);
		}

		::System::Void set_ModuleName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_SET_MODULENAME_OFFSET))(this, a1);
		}

		::System::String* get_Index()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_SET_INDEX_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>* get_ExtraInfo()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_EXTRAINFO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::EventInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::EventInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::EventInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::EventInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
