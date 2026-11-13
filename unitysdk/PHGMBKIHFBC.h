#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PHGMBKIHFBC;
namespace RPG::GameCore { class TargetEvaluator; }

#define PHGMBKIHFBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7248E0)
#define PHGMBKIHFBC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7248F0)
#define PHGMBKIHFBC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7248B0)

inline static constexpr unsigned int PHGMBKIHFBC_TypeDefinitionIndex = 24168;

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
