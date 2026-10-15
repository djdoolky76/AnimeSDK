#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EEBBKOAECHG;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define EEBBKOAECHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD72160)
#define EEBBKOAECHG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD72170)
#define EEBBKOAECHG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD72130)

inline static constexpr unsigned int EEBBKOAECHG_TypeDefinitionIndex = 23113;

	class EEBBKOAECHG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBBKOAECHG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EEBBKOAECHG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EEBBKOAECHG*))((::PBYTE)hIl2Cpp + EEBBKOAECHG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EEBBKOAECHG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EEBBKOAECHG*))((::PBYTE)hIl2Cpp + EEBBKOAECHG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
