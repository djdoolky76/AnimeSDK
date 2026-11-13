#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF28070)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_MBHLHLDLFGC_OFFSET UNITYSDK_OFFSET(0x1BF27B10)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_MFOPILGNIOD_OFFSET UNITYSDK_OFFSET(0x1BF27FE0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BF27980)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BF278B0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_SETUPDURATION_OFFSET UNITYSDK_OFFSET(0x1BF27A60)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BF27F30)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourFullScreenBuff_TypeDefinitionIndex = 76286;

	class MonoParkourFullScreenBuff : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* BuffPanel; // 0x18
		::System::Single MFIFOONNJPE; // 0x20
		::System::Single HBDJCFFDGDD; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetupDuration(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_SETUPDURATION_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_UPDATE_OFFSET))(this);
		}

		::System::Void MBHLHLDLFGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_MBHLHLDLFGC_OFFSET))(this);
		}

		::System::Single MFOPILGNIOD(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURFULLSCREENBUFF_MFOPILGNIOD_OFFSET))(this, a1);
		}

	};
}
