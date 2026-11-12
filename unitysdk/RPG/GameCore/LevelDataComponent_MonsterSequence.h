#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_CTOR_OFFSET UNITYSDK_OFFSET(0xF1E84E0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF1EC4E0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET_MAXWAVECOUNT_OFFSET UNITYSDK_OFFSET(0xF1ED8C0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET_TOTALMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0xF1ED910)
#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET_TOTALPASSCOUNT_OFFSET UNITYSDK_OFFSET(0xF1EDE40)
#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET_TOTALSUMMONEDCOUNT_OFFSET UNITYSDK_OFFSET(0xF1EDB40)
#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET__OWNERREF_OFFSET UNITYSDK_OFFSET(0xF1ED860)
#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_ONCHARACTERCREATE_OFFSET UNITYSDK_OFFSET(0xF1ED060)
#define RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_ONMONSTERDIEORESCAPE_OFFSET UNITYSDK_OFFSET(0xF1ECBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDataComponent_MonsterSequence_TypeDefinitionIndex = 58822;

	class LevelDataComponent_MonsterSequence : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelDataComponent* _Cmpt; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* WaveList; // 0x18
		::System::Void _ctor(::RPG::GameCore::LevelDataComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelDataComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnCharacterCreate(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_ONCHARACTERCREATE_OFFSET))(this, a1);
		}

		::System::Void OnMonsterDieOrEscape(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_ONMONSTERDIEORESCAPE_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxWaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET_MAXWAVECOUNT_OFFSET))(this);
		}

		::System::Int32 get_TotalMonsterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET_TOTALMONSTERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_TotalSummonedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET_TOTALSUMMONEDCOUNT_OFFSET))(this);
		}

		::System::Int32 get_TotalPassCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET_TOTALPASSCOUNT_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get__OwnerRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_MONSTERSEQUENCE_GET__OWNERREF_OFFSET))(this);
		}

	};
}
