#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class Duration; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC16FD0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC17010)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION___C___CCTOR_B__45_0_OFFSET UNITYSDK_OFFSET(0x1BC17020)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Duration___c_TypeDefinitionIndex = 35741;

	class Duration___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x8E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration* __cctor_b__45_0()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION___C___CCTOR_B__45_0_OFFSET))(this);
		}

	};
}
