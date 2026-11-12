#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertDeviceHintTimingConfig; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEHINTTIMINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDE82570)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEHINTTIMINGCONFIG_GET_MOMENTARYHOLDSECONDS_OFFSET UNITYSDK_OFFSET(0xDE82560)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEHINTTIMINGCONFIG_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xDE824C0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertDeviceHintTimingConfig_TypeDefinitionIndex = 79744;

	class ComicDessertDeviceHintTimingConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Single _MomentaryHoldSeconds; // 0x18
		// static const ::System::String* ResourcePath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEHINTTIMINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceHintTimingConfig* HKEPJLDBGIG()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceHintTimingConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEHINTTIMINGCONFIG_HKEPJLDBGIG_OFFSET))();
		}

		::System::Single get_MomentaryHoldSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEHINTTIMINGCONFIG_GET_MOMENTARYHOLDSECONDS_OFFSET))(this);
		}

	};
}
