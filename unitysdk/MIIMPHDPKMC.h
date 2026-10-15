#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MIIMPHDPKMC;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define MIIMPHDPKMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1850E0)
#define MIIMPHDPKMC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D185120)
#define MIIMPHDPKMC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D185080)

inline static constexpr unsigned int MIIMPHDPKMC_TypeDefinitionIndex = 23202;

	class MIIMPHDPKMC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* HNLLIOJDOEL; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIMPHDPKMC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MIIMPHDPKMC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MIIMPHDPKMC*))((::PBYTE)hIl2Cpp + MIIMPHDPKMC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MIIMPHDPKMC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MIIMPHDPKMC*))((::PBYTE)hIl2Cpp + MIIMPHDPKMC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
