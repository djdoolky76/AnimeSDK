#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class INHGMDFDJMD;
namespace RPG::GameCore { class LightningStrikeAreaConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define INHGMDFDJMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF26480)
#define INHGMDFDJMD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CF26490)
#define INHGMDFDJMD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF26450)

inline static constexpr unsigned int INHGMDFDJMD_TypeDefinitionIndex = 21076;

	class INHGMDFDJMD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LightningStrikeAreaConfig* BKGNKKLLLNC; // 0x18
		::RPG::GameCore::TargetEvaluator* EGMDGDCHCOI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INHGMDFDJMD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::INHGMDFDJMD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::INHGMDFDJMD*))((::PBYTE)hIl2Cpp + INHGMDFDJMD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::INHGMDFDJMD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::INHGMDFDJMD*))((::PBYTE)hIl2Cpp + INHGMDFDJMD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
