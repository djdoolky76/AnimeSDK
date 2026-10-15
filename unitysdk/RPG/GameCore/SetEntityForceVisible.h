#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetEntityForceVisible; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETENTITYFORCEVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB0E50)
#define RPG_GAMECORE_SETENTITYFORCEVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB0E60)
#define RPG_GAMECORE_SETENTITYFORCEVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB0E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityForceVisible_TypeDefinitionIndex = 20602;

	class SetEntityForceVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ForceVisible; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFORCEVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityForceVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityForceVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFORCEVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityForceVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityForceVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFORCEVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
