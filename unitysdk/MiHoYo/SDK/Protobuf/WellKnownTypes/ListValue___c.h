#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class ListValue; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC191A0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC191E0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C___CCTOR_B__24_0_OFFSET UNITYSDK_OFFSET(0x1BC191F0)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	class ListValue___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.WellKnownTypes", "<>c")->GetStaticField(0x940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue* __cctor_b__24_0()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C___CCTOR_B__24_0_OFFSET))(this);
		}

	};
}
