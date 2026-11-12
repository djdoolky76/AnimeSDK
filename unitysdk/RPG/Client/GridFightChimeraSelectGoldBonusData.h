#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOLDBONUSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDA90190)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightChimeraSelectGoldBonusData_TypeDefinitionIndex = 67154;

	class GridFightChimeraSelectGoldBonusData : public ::System::Object
	{
	public:
		::System::Int32 Coin; // 0x10
		::UnityEngine::Vector3 StartPos; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTGOLDBONUSDATA_CTOR_OFFSET))(this);
		}

	};
}
