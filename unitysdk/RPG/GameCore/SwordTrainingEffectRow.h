#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwordTrainingEffectType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define RPG_GAMECORE_SWORDTRAININGEFFECTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB49410)
#define RPG_GAMECORE_SWORDTRAININGEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB491B0)

namespace RPG::GameCore
{
	class SwordTrainingEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::Il2CppArray<::System::UInt32>* EnhanceActionList; // 0x18
		::System::UInt32 Condition; // 0x20
		::System::UInt32 Count; // 0x24
		::System::UInt32 ID; // 0x28
		::RPG::GameCore::SwordTrainingEffectType EffectType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEFFECTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingEffectRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
