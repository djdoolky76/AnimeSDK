#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAMOVERLAY_CTOR_OFFSET UNITYSDK_OFFSET(0xE2523F0)
#define RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAMOVERLAY_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0xE2520D0)
#define RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAMOVERLAY_IJICJDNHKHN_OFFSET UNITYSDK_OFFSET(0xE2522A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginHologramOverlay_TypeDefinitionIndex = 71969;

	class MonoEffectPluginHologramOverlay : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::System::Boolean FollowScale; // 0x220
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 KABMCJNCNFE; // 0x224
		::UnityEngine::Vector4 DJOJMMKJGIJ; // 0x230
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAMOVERLAY_CTOR_OFFSET))(this);
		}

		::System::Void IFOEAAAKONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAMOVERLAY_IFOEAAAKONL_OFFSET))(this);
		}

		::System::Void IJICJDNHKHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAMOVERLAY_IJICJDNHKHN_OFFSET))(this);
		}

	};
}
