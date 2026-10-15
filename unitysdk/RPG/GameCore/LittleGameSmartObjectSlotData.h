#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectSlotGroup.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSmartObjectSlotData; }

#define RPG_GAMECORE_LITTLEGAMESMARTOBJECTSLOTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E65E0)
#define RPG_GAMECORE_LITTLEGAMESMARTOBJECTSLOTDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E6310)

namespace RPG::GameCore
{
	class LittleGameSmartObjectSlotData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameEntityType UserTag; // 0x10
		::RPG::GameCore::LittleGameSmartObjectSlotGroup Group; // 0x14
		::RPG::MVector3 LocalPosition; // 0x18
		::RPG::MVector3 LocalRotation; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESMARTOBJECTSLOTDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSmartObjectSlotData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSmartObjectSlotData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESMARTOBJECTSLOTDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
