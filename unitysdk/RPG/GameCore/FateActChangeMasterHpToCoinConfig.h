#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActChangeMasterHpToCoinConfig; }

#define RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D699C30)
#define RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D699C40)
#define RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D699BF0)

namespace RPG::GameCore
{
	class FateActChangeMasterHpToCoinConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActChangeMasterHpToCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActChangeMasterHpToCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActChangeMasterHpToCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActChangeMasterHpToCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
