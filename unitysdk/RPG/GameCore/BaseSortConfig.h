#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseSortConfig; }

#define RPG_GAMECORE_BASESORTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4406C0)
#define RPG_GAMECORE_BASESORTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D440660)
#define RPG_GAMECORE_BASESORTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4404D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseSortConfig_TypeDefinitionIndex = 23138;

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
