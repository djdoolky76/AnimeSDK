#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB5DA20)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB5DA60)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirPlaneStatusControl___c_TypeDefinitionIndex = 79246;

	class PixAirPlaneStatusControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x21B80);
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
