#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MonsterExposedType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterSneakConst; }
namespace System { class String; }

#define RPG_GAMECORE_MONSTERSNEAKCONST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BA320)
#define RPG_GAMECORE_MONSTERSNEAKCONST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B9F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterSneakConst_TypeDefinitionIndex = 17122;

	class MonsterSneakConst : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single SpecialVisionAutoCloseInterval; // 0x10
		::System::Single ExposedDistance; // 0x14
		::System::Single LockDistance; // 0x18
		::System::Single DelayExposedTime; // 0x1C
		::System::Single DissolveRate2CloseHitBox; // 0x20
		::RPG::GameCore::MonsterExposedType ExposedTiming; // 0x24
		::System::Single GuardDelayExposedTime; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* AddSpecialVisionCountEffectPath; // 0x30
		::Il2CppArray<::System::String*>* SneakEffects; // 0x38
		::Il2CppArray<::System::String*>* AddSneakEffects; // 0x40
		::System::String* DissolveEffect; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSNEAKCONST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterSneakConst* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterSneakConst*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSNEAKCONST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
