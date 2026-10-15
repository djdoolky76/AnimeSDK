#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeAsset.h"
class NGLFOJKOKBH;

#define RPG_CLIENT_TRAVELSHIPLEVELCONFIGASSET_CTOR_OFFSET UNITYSDK_OFFSET(0xE316FF0)
#define RPG_CLIENT_TRAVELSHIPLEVELCONFIGASSET_MBFLFPIPDLA_OFFSET UNITYSDK_OFFSET(0xE316F60)

namespace RPG::Client
{
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
