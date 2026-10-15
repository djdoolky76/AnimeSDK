#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingSoldierLevelRow; }

#define RPG_GAMECORE_CHENLINGSOLDIERLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5666F0)
#define RPG_GAMECORE_CHENLINGSOLDIERLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D566470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingSoldierLevelRow_TypeDefinitionIndex = 11057;

	class ChenLingSoldierLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnitIDList; // 0x10
		::System::UInt32 FormationType; // 0x18
		::System::UInt32 EffectID; // 0x1C
		::RPG::GameCore::FixPoint BattleScoreFix; // 0x20
		::System::UInt32 Level; // 0x28
		::System::UInt32 SoldierID; // 0x2C
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
