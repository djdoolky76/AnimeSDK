#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB66CF0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB66D30)

namespace RPG::Client::PixAir
{
	class PixAirPlaneStatusControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x2C330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL___C_CTOR_OFFSET))(this);
		}

	};
}
