#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingSoldierLevelRow; }

#define RPG_GAMECORE_CHENLINGSOLDIERLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D594140)
#define RPG_GAMECORE_CHENLINGSOLDIERLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D593EC0)

namespace RPG::GameCore
{
	class ChenLingSoldierLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnitIDList; // 0x10
		::RPG::GameCore::FixPoint BattleScoreFix; // 0x18
		::System::UInt32 Level; // 0x20
		::System::UInt32 SoldierID; // 0x24
		::System::UInt32 EffectID; // 0x28
		::System::UInt32 FormationType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingSoldierLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingSoldierLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
