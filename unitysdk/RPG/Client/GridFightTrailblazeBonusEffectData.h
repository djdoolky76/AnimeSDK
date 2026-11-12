#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightBonusSrcInfo; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBONUSEFFECTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB6A50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazeBonusEffectData_TypeDefinitionIndex = 67271;

	class GridFightTrailblazeBonusEffectData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusSrcInfo* SrcInfo; // 0x10
		::RPG::Client::GridFightBonusResultData* Bonus; // 0x18
		::System::UInt32 TraitEffectID; // 0x20
		::System::Int32 BuyIndex; // 0x24
		::System::UInt32 TraitID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBONUSEFFECTDATA_CTOR_OFFSET))(this);
		}

	};
}
