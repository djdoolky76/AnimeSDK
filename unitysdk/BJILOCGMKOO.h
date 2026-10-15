#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BJILOCGMKOO;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define BJILOCGMKOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E0E00)
#define BJILOCGMKOO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E0E10)
#define BJILOCGMKOO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E0DD0)

inline static constexpr unsigned int BJILOCGMKOO_TypeDefinitionIndex = 22876;

	class BJILOCGMKOO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJILOCGMKOO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BJILOCGMKOO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BJILOCGMKOO*))((::PBYTE)hIl2Cpp + BJILOCGMKOO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BJILOCGMKOO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BJILOCGMKOO*))((::PBYTE)hIl2Cpp + BJILOCGMKOO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
