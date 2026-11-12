#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGPROXYBREATHING_BEGIN_OFFSET UNITYSDK_OFFSET(0xDE850C0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGPROXYBREATHING_CTOR_OFFSET UNITYSDK_OFFSET(0xDE85330)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGPROXYBREATHING_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDE851E0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGPROXYBREATHING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDE852B0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGPROXYBREATHING_STOP_OFFSET UNITYSDK_OFFSET(0xDE85160)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertDragProxyBreathing_TypeDefinitionIndex = 79884;

	class ComicDessertDragProxyBreathing : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean MHHBCJFMEMF; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 NCOMJHHOINH; // 0x1C
		::System::Single PBLGHIGPEIP; // 0x28
		// static const ::System::Object CDMHOONAHMH; // 0x0
		// static const ::System::Object NCKBHGFNEHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGPROXYBREATHING_CTOR_OFFSET))(this);
		}

		::System::Void Begin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGPROXYBREATHING_BEGIN_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGPROXYBREATHING_STOP_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGPROXYBREATHING_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGPROXYBREATHING_ONDISABLE_OFFSET))(this);
		}

	};
}
