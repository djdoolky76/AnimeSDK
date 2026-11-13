#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class Value; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2090BE70)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2090BEB0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE___C___CCTOR_B__55_0_OFFSET UNITYSDK_OFFSET(0x2090BEC0)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Value___c_TypeDefinitionIndex = 36679;

	class Value___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::Value* __cctor_b__55_0()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE___C___CCTOR_B__55_0_OFFSET))(this);
		}

	};
}
