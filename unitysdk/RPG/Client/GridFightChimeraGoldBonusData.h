#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTCHIMERAGOLDBONUSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58DB20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightChimeraGoldBonusData_TypeDefinitionIndex = 67155;

	class GridFightChimeraGoldBonusData : public ::System::Object
	{
	public:
		::System::UInt32 ChimeraID; // 0x10
		::System::Int32 Coin; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERAGOLDBONUSDATA_CTOR_OFFSET))(this);
		}

	};
}
