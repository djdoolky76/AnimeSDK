#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightBonusSrcInfo; }
namespace RPG::Client { class GridFightShopSpecialGood; }

#define RPG_CLIENT_GRIDFIGHTSPECIALGOODBONUSEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15D840)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpecialGoodBonusEvent_TypeDefinitionIndex = 66926;

	class GridFightSpecialGoodBonusEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightShopSpecialGood* ShopGood; // 0x10
		::RPG::Client::GridFightBonusResultData* BonusData; // 0x18
		::RPG::Client::GridFightBonusSrcInfo* SrcInfo; // 0x20
		::System::UInt32 SourceRoleUID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPECIALGOODBONUSEVENT_CTOR_OFFSET))(this);
		}

	};
}
