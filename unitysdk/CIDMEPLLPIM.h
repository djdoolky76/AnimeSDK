#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CIDMEPLLPIM;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CIDMEPLLPIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBE76E0)
#define CIDMEPLLPIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DBE76F0)
#define CIDMEPLLPIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBE76B0)

inline static constexpr unsigned int CIDMEPLLPIM_TypeDefinitionIndex = 23167;

	class CIDMEPLLPIM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* HCDEOKNIGKG; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::RPG::GameCore::DynamicFloat* HOCMHABKLGJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMEPLLPIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CIDMEPLLPIM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CIDMEPLLPIM*))((::PBYTE)hIl2Cpp + CIDMEPLLPIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CIDMEPLLPIM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CIDMEPLLPIM*))((::PBYTE)hIl2Cpp + CIDMEPLLPIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
