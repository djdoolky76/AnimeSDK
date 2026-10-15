#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckMonsterStance; }
namespace System { class String; }

#define RPG_GAMECORE_CHECKMONSTERSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57C1B0)
#define RPG_GAMECORE_CHECKMONSTERSTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57C1C0)
#define RPG_GAMECORE_CHECKMONSTERSTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57C170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckMonsterStance_TypeDefinitionIndex = 22969;

	class CheckMonsterStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* MonsterTag; // 0x18
		::System::Boolean IsEmpty; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKMONSTERSTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckMonsterStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckMonsterStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKMONSTERSTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckMonsterStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckMonsterStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKMONSTERSTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
