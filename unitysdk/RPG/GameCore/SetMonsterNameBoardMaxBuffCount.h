#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMonsterNameBoardMaxBuffCount; }

#define RPG_GAMECORE_SETMONSTERNAMEBOARDMAXBUFFCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8E9F0)
#define RPG_GAMECORE_SETMONSTERNAMEBOARDMAXBUFFCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8EA00)
#define RPG_GAMECORE_SETMONSTERNAMEBOARDMAXBUFFCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8E9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterNameBoardMaxBuffCount_TypeDefinitionIndex = 23460;

	class SetMonsterNameBoardMaxBuffCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MaxBuffCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERNAMEBOARDMAXBUFFCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterNameBoardMaxBuffCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterNameBoardMaxBuffCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERNAMEBOARDMAXBUFFCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMonsterNameBoardMaxBuffCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMonsterNameBoardMaxBuffCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERNAMEBOARDMAXBUFFCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
