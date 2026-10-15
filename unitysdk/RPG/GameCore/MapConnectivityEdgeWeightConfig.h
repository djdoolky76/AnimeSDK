#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MapConnectivityEdgeType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapConnectivityEdgeWeightConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAPCONNECTIVITYEDGEWEIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FBF70)
#define RPG_GAMECORE_MAPCONNECTIVITYEDGEWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7FBE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapConnectivityEdgeWeightConfig_TypeDefinitionIndex = 17380;

	class MapConnectivityEdgeWeightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MapConnectivityEdgeType, ::System::Single>* EdgeTypeWeights; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPCONNECTIVITYEDGEWEIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapConnectivityEdgeWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapConnectivityEdgeWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPCONNECTIVITYEDGEWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
