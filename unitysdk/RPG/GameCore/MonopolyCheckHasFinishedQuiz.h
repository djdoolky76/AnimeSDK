#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyCheckHasFinishedQuiz; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89CC80)
#define RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D89CC90)
#define RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D89CC50)

namespace RPG::GameCore
{
	class MonopolyCheckHasFinishedQuiz : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExist; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotExist; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
