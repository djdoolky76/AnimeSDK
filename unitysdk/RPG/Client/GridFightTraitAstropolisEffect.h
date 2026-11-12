#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
namespace RPG::Client { class GridFightBonusConsumableItemData; }
namespace RPG::Client { class GridFightTrait; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISEFFECT_ADDGETREWARDCONSUMABLECALLBACK_OFFSET UNITYSDK_OFFSET(0xDCC4EA0)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISEFFECT_CLEARCALLBACK_OFFSET UNITYSDK_OFFSET(0xDCC4EF0)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDCC4C90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitAstropolisEffect_TypeDefinitionIndex = 67228;

	class GridFightTraitAstropolisEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Action_1<::RPG::Client::GridFightBonusConsumableItemData*>* _OnGetRewardConsumable; // 0x30
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void AddGetRewardConsumableCallback(::System::Action_1<::RPG::Client::GridFightBonusConsumableItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightBonusConsumableItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISEFFECT_ADDGETREWARDCONSUMABLECALLBACK_OFFSET))(this, a1);
		}

		::System::Void ClearCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISEFFECT_CLEARCALLBACK_OFFSET))(this);
		}

	};
}
