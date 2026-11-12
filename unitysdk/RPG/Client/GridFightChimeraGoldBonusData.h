#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTCHIMERAGOLDBONUSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDA8F070)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightChimeraGoldBonusData_TypeDefinitionIndex = 67155;

	class GridFightChimeraGoldBonusData : public ::System::Object
	{
	public:
		::System::Int32 Coin; // 0x10
		::System::UInt32 ChimeraID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERAGOLDBONUSDATA_CTOR_OFFSET))(this);
		}

	};
}
