#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PHGMBKIHFBC;
namespace RPG::GameCore { class TargetEvaluator; }

#define PHGMBKIHFBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E68A0)
#define PHGMBKIHFBC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2E68B0)
#define PHGMBKIHFBC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2E6870)

	class PHGMBKIHFBC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGMBKIHFBC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PHGMBKIHFBC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PHGMBKIHFBC*))((::PBYTE)hIl2Cpp + PHGMBKIHFBC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PHGMBKIHFBC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PHGMBKIHFBC*))((::PBYTE)hIl2Cpp + PHGMBKIHFBC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
