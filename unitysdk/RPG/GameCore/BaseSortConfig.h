#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseSortConfig; }

#define RPG_GAMECORE_BASESORTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C306830)
#define RPG_GAMECORE_BASESORTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1C3067D0)
#define RPG_GAMECORE_BASESORTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1C306640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseSortConfig_TypeDefinitionIndex = 23567;

	class BaseSortConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESORTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseSortConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseSortConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESORTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseSortConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseSortConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASESORTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
