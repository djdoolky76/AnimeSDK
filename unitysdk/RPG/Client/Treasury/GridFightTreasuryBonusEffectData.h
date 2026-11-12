#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusFlyEntries; }
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightBonusSrcInfo; }

#define RPG_CLIENT_TREASURY_GRIDFIGHTTREASURYBONUSEFFECTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xED9B140)

namespace RPG::Client::Treasury
{
	inline static constexpr unsigned int GridFightTreasuryBonusEffectData_TypeDefinitionIndex = 76897;

	class GridFightTreasuryBonusEffectData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusResultData* Bonus; // 0x10
		::RPG::Client::GridFightBonusFlyEntries* FlyEntries; // 0x18
		::RPG::Client::GridFightBonusSrcInfo* SrcInfo; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURY_GRIDFIGHTTREASURYBONUSEFFECTDATA_CTOR_OFFSET))(this);
		}

	};
}
