#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationSlotConfig; }

#define RPG_GAMECORE_FORMATIONSLOTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F6320)
#define RPG_GAMECORE_FORMATIONSLOTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8F61F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationSlotConfig_TypeDefinitionIndex = 15777;

	class FormationSlotConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single OffsetX; // 0x10
		::System::Single OffsetZ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONSLOTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationSlotConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationSlotConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONSLOTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
