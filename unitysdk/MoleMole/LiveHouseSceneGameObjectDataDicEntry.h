#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_LIVEHOUSESCENEGAMEOBJECTDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13EED9D0)

namespace MoleMole
{
	inline static constexpr unsigned int LiveHouseSceneGameObjectDataDicEntry_TypeDefinitionIndex = 74712;

	class LiveHouseSceneGameObjectDataDicEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIVEHOUSESCENEGAMEOBJECTDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
