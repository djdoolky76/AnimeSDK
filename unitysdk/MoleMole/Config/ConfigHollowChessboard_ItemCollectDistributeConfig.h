#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTDISTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x131E6290)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ItemCollectDistributeConfig_TypeDefinitionIndex = 46315;

	class ConfigHollowChessboard_ItemCollectDistributeConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 BurstDistanceRatio; // 0x10
		::System::Int32 Weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ITEMCOLLECTDISTRIBUTECONFIG__CTOR_OFFSET))(this);
		}
	};
}
