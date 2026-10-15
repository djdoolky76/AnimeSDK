#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class LODHEADAKJE;
namespace RPG::GameCore { class ByCheckMonsterDie; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMONSTERDIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4672E0)
#define RPG_GAMECORE_BYCHECKMONSTERDIE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D467490)
#define RPG_GAMECORE_BYCHECKMONSTERDIE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D467460)
#define RPG_GAMECORE_BYCHECKMONSTERDIE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4672F0)
#define RPG_GAMECORE_BYCHECKMONSTERDIE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4672B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckMonsterDie_TypeDefinitionIndex = 23437;

	class ByCheckMonsterDie : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MonsterID; // 0x20
		::System::Byte _padding0[0x4];
		::LODHEADAKJE* OverrideConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckMonsterDie* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckMonsterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckMonsterDie* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckMonsterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterDie* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterDie* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERDIE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
