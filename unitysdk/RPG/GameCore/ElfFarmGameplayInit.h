#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfFarmGameplayInit; }

#define RPG_GAMECORE_ELFFARMGAMEPLAYINIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D635F40)
#define RPG_GAMECORE_ELFFARMGAMEPLAYINIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D635F50)
#define RPG_GAMECORE_ELFFARMGAMEPLAYINIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D635E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfFarmGameplayInit_TypeDefinitionIndex = 21072;

	class ElfFarmGameplayInit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFARMGAMEPLAYINIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfFarmGameplayInit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfFarmGameplayInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFARMGAMEPLAYINIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfFarmGameplayInit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfFarmGameplayInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFARMGAMEPLAYINIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
