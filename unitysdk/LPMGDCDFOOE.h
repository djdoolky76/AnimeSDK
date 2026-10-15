#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LPMGDCDFOOE;
namespace RPG::GameCore { class TargetEvaluator; }

#define LPMGDCDFOOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D12C4C0)
#define LPMGDCDFOOE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D12C4D0)
#define LPMGDCDFOOE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D12C490)

	class LPMGDCDFOOE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* KNDOLFNGPIJ; // 0x18
		::System::Boolean ICHFIJBCNKB; // 0x20
		::System::Boolean PGLPJMGJNMO; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMGDCDFOOE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LPMGDCDFOOE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LPMGDCDFOOE*))((::PBYTE)hIl2Cpp + LPMGDCDFOOE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LPMGDCDFOOE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LPMGDCDFOOE*))((::PBYTE)hIl2Cpp + LPMGDCDFOOE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
