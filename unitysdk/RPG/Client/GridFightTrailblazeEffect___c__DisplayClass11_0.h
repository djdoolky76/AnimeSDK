#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTrailblazeBoughtProperty; }
namespace RPG::GameCore { class GridFightTrailblazeGoodsConfigRow; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB96E0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT___C__DISPLAYCLASS11_0__SYNCBOUGHTGOODS_B__0_OFFSET UNITYSDK_OFFSET(0xDCBADF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazeEffect___c__DisplayClass11_0_TypeDefinitionIndex = 67276;

	class GridFightTrailblazeEffect___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTrailblazeGoodsConfigRow* config; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncBoughtGoods_b__0(::RPG::Client::GridFightTrailblazeBoughtProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrailblazeBoughtProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT___C__DISPLAYCLASS11_0__SYNCBOUGHTGOODS_B__0_OFFSET))(this, a1);
		}

	};
}
