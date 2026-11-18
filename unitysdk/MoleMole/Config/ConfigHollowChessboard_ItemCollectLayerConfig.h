#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A02FF30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ItemCollectLayerConfig_TypeDefinitionIndex = 46353;

	class ConfigHollowChessboard_ItemCollectLayerConfig : public ::System::Object
	{
	public:
		::System::Single CollectDuration; // 0x10
		::UnityEngine::Vector2 BurstDurationRange; // 0x14
		::System::Single AdvanceDisappearAmoutRatio; // 0x1C
		::System::Single Weight; // 0x20
		::System::Single BurstFrameCount; // 0x24
		::System::Single CollectFrameCount; // 0x28
		::UnityEngine::Vector2 BurstDistanceRatio; // 0x2C
		::UnityEngine::Vector2 AdvanceDisappearTimeRatioRange; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTLAYERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
