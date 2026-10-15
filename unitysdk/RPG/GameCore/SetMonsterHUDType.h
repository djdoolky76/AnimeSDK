#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterHUDType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMonsterHUDType; }

#define RPG_GAMECORE_SETMONSTERHUDTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8E3A0)
#define RPG_GAMECORE_SETMONSTERHUDTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8E3B0)
#define RPG_GAMECORE_SETMONSTERHUDTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8E370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterHUDType_TypeDefinitionIndex = 22765;

	class SetMonsterHUDType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::MonsterHUDType HUDType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterHUDType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterHUDType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterHUDType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterHUDType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
