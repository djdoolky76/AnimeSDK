#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf { class JsonFormatter_Settings; }
namespace MiHoYo::SDK::Protobuf::Reflection { class TypeRegistry; }

#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBCCA20)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BBCCC10)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCCA70)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1BBCC9C0)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_GET_FORMATDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x1BBCCBF0)
#define MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_GET_TYPEREGISTRY_OFFSET UNITYSDK_OFFSET(0x1BBCCC00)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int JsonFormatter_Settings_TypeDefinitionIndex = 35726;

	class JsonFormatter_Settings : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry* _TypeRegistry_k__BackingField; // 0x10
		::System::Boolean _FormatDefaultValues_k__BackingField; // 0x18
		static ::MiHoYo::SDK::Protobuf::JsonFormatter_Settings** StaticGet__Default_k__BackingField()
		{
			return (::MiHoYo::SDK::Protobuf::JsonFormatter_Settings**)UnitySDK::FromName("MiHoYo.SDK.Protobuf", "Settings")->GetStaticField(0x5D140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Boolean a1, ::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::MiHoYo::SDK::Protobuf::JsonFormatter_Settings* get_Default()
		{
			return ((::MiHoYo::SDK::Protobuf::JsonFormatter_Settings*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_GET_DEFAULT_OFFSET))();
		}

		::System::Boolean get_FormatDefaultValues()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_GET_FORMATDEFAULTVALUES_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry* get_TypeRegistry()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::TypeRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_JSONFORMATTER_SETTINGS_GET_TYPEREGISTRY_OFFSET))(this);
		}

	};
}
