#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_LIVEHOUSESCENEANIMATORDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A90C5F0)

namespace MoleMole
{
	inline static constexpr unsigned int LiveHouseSceneAnimatorDataDic_TypeDefinitionIndex = 93023;

	class LiveHouseSceneAnimatorDataDic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIVEHOUSESCENEANIMATORDATADIC__CTOR_OFFSET))(this);
		}
	};
}
