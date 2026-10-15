#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerModifierType.h"
class FCOEMCEDLNL;
class NPCJAJABFIB;

#define NPCJAJABFIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D216800)
#define NPCJAJABFIB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D216810)
#define NPCJAJABFIB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2167D0)

inline static constexpr unsigned int NPCJAJABFIB_TypeDefinitionIndex = 21568;

	class NPCJAJABFIB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean FHHCNGAGFCJ; // 0x18
		::RPG::GameCore::TeamTowersPlayerModifierType JMNJLFACCLM; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCJAJABFIB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NPCJAJABFIB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NPCJAJABFIB*))((::PBYTE)hIl2Cpp + NPCJAJABFIB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NPCJAJABFIB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NPCJAJABFIB*))((::PBYTE)hIl2Cpp + NPCJAJABFIB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
