#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_MONOEFFECTPLUGINCHARABREAK_CTOR_OFFSET UNITYSDK_OFFSET(0xD7C6470)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARABREAK_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0xD7C6320)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaBreak_TypeDefinitionIndex = 69936;

	class MonoEffectPluginCharaBreak : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::UnityEngine::Vector4 MainSpeed; // 0x220
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARABREAK_CTOR_OFFSET))(this);
		}

		::System::Void IFOEAAAKONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARABREAK_IFOEAAAKONL_OFFSET))(this);
		}

	};
}
