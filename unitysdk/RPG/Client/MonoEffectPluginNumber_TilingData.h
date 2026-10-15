#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER_TILINGDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD802BB0)

namespace RPG::Client
{
	class MonoEffectPluginNumber_TilingData : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 Tiling; // 0x10
		::UnityEngine::Vector2 Offset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER_TILINGDATA_CTOR_OFFSET))(this);
		}

	};
}
