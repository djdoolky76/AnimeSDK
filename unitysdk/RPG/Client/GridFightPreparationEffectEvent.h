#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPreparationEffectType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightPreparationEffectEvent; }
namespace RPG::Client { class GridFightPreparationEffectPayload; }

#define RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTEVENT_CREATEADDTRAITBONUSPROGRESS_OFFSET UNITYSDK_OFFSET(0xDC38970)
#define RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTEVENT_CREATEPETPALBONUS_OFFSET UNITYSDK_OFFSET(0xDC387C0)
#define RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTEVENT_CREATEROLECRAFTEQUIPAFTERBATTLE_OFFSET UNITYSDK_OFFSET(0xDC383C0)
#define RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xDC38790)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPreparationEffectEvent_TypeDefinitionIndex = 66026;

	class GridFightPreparationEffectEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPreparationEffectPayload* Payload; // 0x10
		::RPG::Client::GridFightPreparationEffectType EffectType; // 0x18
		// static const ::System::Object _MortenaxRoleID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTEVENT_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightPreparationEffectEvent* CreateRoleCraftEquipAfterBattle()
		{
			return ((::RPG::Client::GridFightPreparationEffectEvent*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTEVENT_CREATEROLECRAFTEQUIPAFTERBATTLE_OFFSET))();
		}

		static ::RPG::Client::GridFightPreparationEffectEvent* CreatePetPalBonus(::System::UInt32 a1, ::RPG::Client::GridFightBonusResultData* a2)
		{
			return ((::RPG::Client::GridFightPreparationEffectEvent*(*)(::System::UInt32, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTEVENT_CREATEPETPALBONUS_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightPreparationEffectEvent* CreateAddTraitBonusProgress(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::GridFightPreparationEffectEvent*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTEVENT_CREATEADDTRAITBONUSPROGRESS_OFFSET))(a1, a2, a3);
		}

	};
}
