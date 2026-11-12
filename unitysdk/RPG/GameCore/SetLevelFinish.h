#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetLevelFinish; }

#define RPG_GAMECORE_SETLEVELFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECC9FF0)
#define RPG_GAMECORE_SETLEVELFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECCA000)
#define RPG_GAMECORE_SETLEVELFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECC9F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLevelFinish_TypeDefinitionIndex = 23875;

	class SetLevelFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVELFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLevelFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLevelFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVELFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLevelFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLevelFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVELFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
