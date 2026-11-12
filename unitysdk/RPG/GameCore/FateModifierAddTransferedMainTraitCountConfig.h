#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierAddTransferedMainTraitCountConfig; }

#define RPG_GAMECORE_FATEMODIFIERADDTRANSFEREDMAINTRAITCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A7BD0)
#define RPG_GAMECORE_FATEMODIFIERADDTRANSFEREDMAINTRAITCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8A7BE0)
#define RPG_GAMECORE_FATEMODIFIERADDTRANSFEREDMAINTRAITCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8A7B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddTransferedMainTraitCountConfig_TypeDefinitionIndex = 19473;

	class FateModifierAddTransferedMainTraitCountConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRANSFEREDMAINTRAITCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierAddTransferedMainTraitCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierAddTransferedMainTraitCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRANSFEREDMAINTRAITCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierAddTransferedMainTraitCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierAddTransferedMainTraitCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRANSFEREDMAINTRAITCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
