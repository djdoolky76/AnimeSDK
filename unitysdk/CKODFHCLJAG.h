#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetJumpEnergyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CKODFHCLJAG;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define CKODFHCLJAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBF1930)
#define CKODFHCLJAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DBF1940)
#define CKODFHCLJAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBF1900)

inline static constexpr unsigned int CKODFHCLJAG_TypeDefinitionIndex = 21447;

	class CKODFHCLJAG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* FOJDEJPDKEJ; // 0x18
		::RPG::GameCore::SetJumpEnergyType DANFCNOENDC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODFHCLJAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CKODFHCLJAG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CKODFHCLJAG*))((::PBYTE)hIl2Cpp + CKODFHCLJAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CKODFHCLJAG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CKODFHCLJAG*))((::PBYTE)hIl2Cpp + CKODFHCLJAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
