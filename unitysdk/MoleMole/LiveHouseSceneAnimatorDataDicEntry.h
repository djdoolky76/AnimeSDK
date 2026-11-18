#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_LIVEHOUSESCENEANIMATORDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1192CCC0)

namespace MoleMole
{
	inline static constexpr unsigned int LiveHouseSceneAnimatorDataDicEntry_TypeDefinitionIndex = 79771;

	class LiveHouseSceneAnimatorDataDicEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIVEHOUSESCENEANIMATORDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
