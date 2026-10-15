#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyCheckAtFinalPos; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MONOPOLYCHECKATFINALPOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89CAB0)
#define RPG_GAMECORE_MONOPOLYCHECKATFINALPOS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D89CAC0)
#define RPG_GAMECORE_MONOPOLYCHECKATFINALPOS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D89CA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyCheckAtFinalPos_TypeDefinitionIndex = 20932;

	class MonopolyCheckAtFinalPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinal; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotFinal; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKATFINALPOS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyCheckAtFinalPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyCheckAtFinalPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKATFINALPOS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyCheckAtFinalPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyCheckAtFinalPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKATFINALPOS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
