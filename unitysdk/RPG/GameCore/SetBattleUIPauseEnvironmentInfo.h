#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePauseEnvironmentData; }
namespace RPG::GameCore { class SetBattleUIPauseEnvironmentInfo; }

#define RPG_GAMECORE_SETBATTLEUIPAUSEENVIRONMENTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6AA10)
#define RPG_GAMECORE_SETBATTLEUIPAUSEENVIRONMENTINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6AA20)
#define RPG_GAMECORE_SETBATTLEUIPAUSEENVIRONMENTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6A9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleUIPauseEnvironmentInfo_TypeDefinitionIndex = 22800;

	class SetBattleUIPauseEnvironmentInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::BattlePauseEnvironmentData*>* EnvironmentInfos; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPAUSEENVIRONMENTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleUIPauseEnvironmentInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleUIPauseEnvironmentInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPAUSEENVIRONMENTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleUIPauseEnvironmentInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleUIPauseEnvironmentInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPAUSEENVIRONMENTINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
