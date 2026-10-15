#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RandomSelectMonsterIDFromPool; }
namespace System { class String; }

#define RPG_GAMECORE_RANDOMSELECTMONSTERIDFROMPOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96C3A0)
#define RPG_GAMECORE_RANDOMSELECTMONSTERIDFROMPOOL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96C3B0)
#define RPG_GAMECORE_RANDOMSELECTMONSTERIDFROMPOOL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96C370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelectMonsterIDFromPool_TypeDefinitionIndex = 23275;

	class RandomSelectMonsterIDFromPool : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RandomPoolID; // 0x18
		::Il2CppArray<::RPG::GameCore::MonsterRank>* PoolFilter; // 0x20
		::System::String* MonsterIDKey; // 0x28
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTMONSTERIDFROMPOOL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomSelectMonsterIDFromPool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomSelectMonsterIDFromPool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTMONSTERIDFROMPOOL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomSelectMonsterIDFromPool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomSelectMonsterIDFromPool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTMONSTERIDFROMPOOL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
