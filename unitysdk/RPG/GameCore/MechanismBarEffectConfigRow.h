#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MechanismBarEffectConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MECHANISMBAREFFECTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8C630)
#define RPG_GAMECORE_MECHANISMBAREFFECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA8C380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MechanismBarEffectConfigRow_TypeDefinitionIndex = 14280;

	class MechanismBarEffectConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MazeBuffList; // 0x10
		::System::String* MazeLevelGraph; // 0x18
		::Il2CppArray<::System::String*>* BattlePlayerAbilityList; // 0x20
		::Il2CppArray<::System::String*>* BattleEnemyAbilityList; // 0x28
		::System::UInt32 Phase; // 0x30
		::System::UInt32 ValueThresh; // 0x34
		::System::UInt32 ID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MECHANISMBAREFFECTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MechanismBarEffectConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MechanismBarEffectConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MECHANISMBAREFFECTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
