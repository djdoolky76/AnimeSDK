#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierAddReijuRerollCountConfig; }

#define RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69B0B0)
#define RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69B0C0)
#define RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69B070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddReijuRerollCountConfig_TypeDefinitionIndex = 19271;

	class FateModifierAddReijuRerollCountConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierAddReijuRerollCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierAddReijuRerollCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierAddReijuRerollCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierAddReijuRerollCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDREIJUREROLLCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
