#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_LIVEHOUSESCENEGAMEOBJECTDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x13EED990)

namespace MoleMole
{
	inline static constexpr unsigned int LiveHouseSceneGameObjectDataDic_TypeDefinitionIndex = 60734;

	class LiveHouseSceneGameObjectDataDic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIVEHOUSESCENEGAMEOBJECTDATADIC__CTOR_OFFSET))(this);
		}
	};
}
