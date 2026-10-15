#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ResistanceItem; }

#define RPG_GAMECORE_RESISTANCEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98D270)
#define RPG_GAMECORE_RESISTANCEITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98D110)

namespace RPG::GameCore
{
	class ResistanceItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AttackDamageType DamageType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESISTANCEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResistanceItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResistanceItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESISTANCEITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
