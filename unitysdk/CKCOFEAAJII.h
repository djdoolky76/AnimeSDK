#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierLifeStepMoment.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CKCOFEAAJII;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define CKCOFEAAJII_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBF12F0)
#define CKCOFEAAJII_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DBF1300)
#define CKCOFEAAJII_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBF12C0)

inline static constexpr unsigned int CKCOFEAAJII_TypeDefinitionIndex = 23713;

	class CKCOFEAAJII : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::ModifierLifeStepMoment GNLDHNBHMOC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCOFEAAJII_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CKCOFEAAJII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CKCOFEAAJII*))((::PBYTE)hIl2Cpp + CKCOFEAAJII_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CKCOFEAAJII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CKCOFEAAJII*))((::PBYTE)hIl2Cpp + CKCOFEAAJII_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
