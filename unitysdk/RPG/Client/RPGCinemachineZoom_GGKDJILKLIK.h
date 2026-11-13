#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RPGCINEMACHINEZOOM_GGKDJILKLIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1905D370)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGCinemachineZoom_GGKDJILKLIK_TypeDefinitionIndex = 71667;

	class RPGCinemachineZoom_GGKDJILKLIK : public ::System::Object
	{
	public:
		::System::Single KPFEBGGMFPA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_GGKDJILKLIK_CTOR_OFFSET))(this);
		}

	};
}
