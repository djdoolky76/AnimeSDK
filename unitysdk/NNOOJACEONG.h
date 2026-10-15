#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SummonBattleEventMonster; }
namespace RPG::GameCore { class SummonMonsterData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NNOOJACEONG_BHMNLCKEEIJ_OFFSET UNITYSDK_OFFSET(0xBCD7CE0)
#define NNOOJACEONG_CTOR_OFFSET UNITYSDK_OFFSET(0xBCD7820)
#define NNOOJACEONG_EKHEIAEIKGE_OFFSET UNITYSDK_OFFSET(0xBCD78F0)
#define NNOOJACEONG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCD7870)

inline static constexpr unsigned int NNOOJACEONG_TypeDefinitionIndex = 55670;

	class NNOOJACEONG
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* JHGPNDOGOKJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SummonBattleEventMonster* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SummonBattleEventMonster*))((::PBYTE)hIl2Cpp + NNOOJACEONG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOOJACEONG_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* EKHEIAEIKGE(::RPG::GameCore::SummonMonsterData* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::SummonMonsterData*))((::PBYTE)hIl2Cpp + NNOOJACEONG_EKHEIAEIKGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* BHMNLCKEEIJ()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOOJACEONG_BHMNLCKEEIJ_OFFSET))(this);
		}

	};
