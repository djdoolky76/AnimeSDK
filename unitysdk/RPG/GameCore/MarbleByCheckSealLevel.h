#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByCheckSealLevel; }

#define RPG_GAMECORE_MARBLEBYCHECKSEALLEVEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D80ADB0)
#define RPG_GAMECORE_MARBLEBYCHECKSEALLEVEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D80ADC0)
#define RPG_GAMECORE_MARBLEBYCHECKSEALLEVEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D80AD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCheckSealLevel_TypeDefinitionIndex = 16890;

	class MarbleByCheckSealLevel : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28
		::System::UInt32 Level; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKSEALLEVEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByCheckSealLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByCheckSealLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKSEALLEVEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByCheckSealLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByCheckSealLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKSEALLEVEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
