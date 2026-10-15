#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LightningStrikeAreaMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PIILJCMOBLJ;
namespace RPG::GameCore { class TargetEvaluator; }

#define PIILJCMOBLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2C32A0)
#define PIILJCMOBLJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2C32B0)
#define PIILJCMOBLJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2C3270)

inline static constexpr unsigned int PIILJCMOBLJ_TypeDefinitionIndex = 21079;

	class PIILJCMOBLJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* EGMDGDCHCOI; // 0x18
		::RPG::GameCore::LightningStrikeAreaMode ADPFGNLIDLP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIILJCMOBLJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PIILJCMOBLJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PIILJCMOBLJ*))((::PBYTE)hIl2Cpp + PIILJCMOBLJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PIILJCMOBLJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PIILJCMOBLJ*))((::PBYTE)hIl2Cpp + PIILJCMOBLJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
