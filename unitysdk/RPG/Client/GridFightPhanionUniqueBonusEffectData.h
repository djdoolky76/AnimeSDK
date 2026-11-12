#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightBonusSrcInfo; }

#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUEBONUSEFFECTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDC26560)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPhanionUniqueBonusEffectData_TypeDefinitionIndex = 67220;

	class GridFightPhanionUniqueBonusEffectData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusResultData* Bonus; // 0x10
		::RPG::Client::GridFightBonusSrcInfo* SrcInfo; // 0x18
		::System::UInt32 FirstMemberPosIndex; // 0x20
		::System::UInt32 TraitEffectID; // 0x24
		::System::UInt32 FirstMemberUID; // 0x28
		::System::UInt32 TraitID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUEBONUSEFFECTDATA_CTOR_OFFSET))(this);
		}

	};
}
