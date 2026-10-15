#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeathSource.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PGMFANHDHGG;
namespace RPG::GameCore { class TargetEvaluator; }

#define PGMFANHDHGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E3360)
#define PGMFANHDHGG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2E3370)
#define PGMFANHDHGG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2E3320)

inline static constexpr unsigned int PGMFANHDHGG_TypeDefinitionIndex = 24125;

	class PGMFANHDHGG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* MDKGHHJBLOI; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::RPG::GameCore::DeathSource HFELBILEHNM; // 0x28
		::System::Boolean FMPDLMMILBG; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMFANHDHGG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PGMFANHDHGG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PGMFANHDHGG*))((::PBYTE)hIl2Cpp + PGMFANHDHGG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PGMFANHDHGG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PGMFANHDHGG*))((::PBYTE)hIl2Cpp + PGMFANHDHGG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
