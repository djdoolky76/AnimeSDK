#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class Any; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC15A90)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC15AD0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY___C___CCTOR_B__35_0_OFFSET UNITYSDK_OFFSET(0x1BC15AE0)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Any___c_TypeDefinitionIndex = 35738;

	class Any___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x8B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::Any* __cctor_b__35_0()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::Any*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY___C___CCTOR_B__35_0_OFFSET))(this);
		}

	};
}
