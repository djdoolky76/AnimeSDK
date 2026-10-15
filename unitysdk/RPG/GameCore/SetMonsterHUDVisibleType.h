#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterHUDVisibleType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMonsterHUDVisibleType; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8E530)
#define RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8E540)
#define RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8E500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterHUDVisibleType_TypeDefinitionIndex = 22820;

	class SetMonsterHUDVisibleType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::MonsterHUDVisibleType ChildPanelVisibleType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterHUDVisibleType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterHUDVisibleType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterHUDVisibleType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterHUDVisibleType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
