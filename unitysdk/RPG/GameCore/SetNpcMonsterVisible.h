#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetNpcMonsterVisible; }

#define RPG_GAMECORE_SETNPCMONSTERVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA908B0)
#define RPG_GAMECORE_SETNPCMONSTERVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA908C0)
#define RPG_GAMECORE_SETNPCMONSTERVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA90880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNpcMonsterVisible_TypeDefinitionIndex = 22070;

	class SetNpcMonsterVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCMONSTERVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetNpcMonsterVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetNpcMonsterVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCMONSTERVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetNpcMonsterVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetNpcMonsterVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCMONSTERVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
