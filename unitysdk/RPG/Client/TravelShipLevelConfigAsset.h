#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeAsset.h"
class NGLFOJKOKBH;

#define RPG_CLIENT_TRAVELSHIPLEVELCONFIGASSET_CTOR_OFFSET UNITYSDK_OFFSET(0xED82120)
#define RPG_CLIENT_TRAVELSHIPLEVELCONFIGASSET_MBFLFPIPDLA_OFFSET UNITYSDK_OFFSET(0xED82090)

namespace RPG::Client
{
	inline static constexpr unsigned int TravelShipLevelConfigAsset_TypeDefinitionIndex = 70752;

	class TravelShipLevelConfigAsset : public ::RPGTools::Octree::Generation::OctreeAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPLEVELCONFIGASSET_CTOR_OFFSET))(this);
		}

		::NGLFOJKOKBH* MBFLFPIPDLA()
		{
			return ((::NGLFOJKOKBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPLEVELCONFIGASSET_MBFLFPIPDLA_OFFSET))(this);
		}

	};
}
