#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOLDBONUSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58EC40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightChimeraSelectGoldBonusData_TypeDefinitionIndex = 67154;

	class GridFightChimeraSelectGoldBonusData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 StartPos; // 0x10
		::System::Int32 Coin; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOLDBONUSDATA_CTOR_OFFSET))(this);
		}

	};
}
