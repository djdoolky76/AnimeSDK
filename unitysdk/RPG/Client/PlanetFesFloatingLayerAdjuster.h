#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Canvas; }

#define RPG_CLIENT_PLANETFESFLOATINGLAYERADJUSTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xDB95250)
#define RPG_CLIENT_PLANETFESFLOATINGLAYERADJUSTER_CTOR_OFFSET UNITYSDK_OFFSET(0xDB95460)
#define RPG_CLIENT_PLANETFESFLOATINGLAYERADJUSTER_OECGPGCFJGL_OFFSET UNITYSDK_OFFSET(0xDB95350)

namespace RPG::Client
{
	class PlanetFesFloatingLayerAdjuster : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGLAYERADJUSTER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGLAYERADJUSTER_AWAKE_OFFSET))(this);
		}

		::UnityEngine::Canvas* OECGPGCFJGL()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGLAYERADJUSTER_OECGPGCFJGL_OFFSET))(this);
		}

	};
}
