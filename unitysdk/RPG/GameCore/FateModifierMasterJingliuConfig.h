#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierMasterJingliuConfig; }

#define RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC933D0)
#define RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1FC933E0)
#define RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1FC93390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierMasterJingliuConfig_TypeDefinitionIndex = 19480;

	class FateModifierMasterJingliuConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierMasterJingliuConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierMasterJingliuConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierMasterJingliuConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierMasterJingliuConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERJINGLIUCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
