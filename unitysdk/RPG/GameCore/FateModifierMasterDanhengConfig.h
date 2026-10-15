#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierMasterDanhengConfig; }

#define RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66DB10)
#define RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66DB20)
#define RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66DAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierMasterDanhengConfig_TypeDefinitionIndex = 19292;

	class FateModifierMasterDanhengConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierMasterDanhengConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierMasterDanhengConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierMasterDanhengConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierMasterDanhengConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERDANHENGCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
