#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierMultiplyBuffAmplificationConfig; }

#define RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69B950)
#define RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69B960)
#define RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69B910)

namespace RPG::GameCore
{
	class FateModifierMultiplyBuffAmplificationConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierMultiplyBuffAmplificationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierMultiplyBuffAmplificationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierMultiplyBuffAmplificationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierMultiplyBuffAmplificationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
