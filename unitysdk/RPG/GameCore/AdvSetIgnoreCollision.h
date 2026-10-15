#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetIgnoreCollision; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETIGNORECOLLISION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AFEB0)
#define RPG_GAMECORE_ADVSETIGNORECOLLISION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AFEC0)
#define RPG_GAMECORE_ADVSETIGNORECOLLISION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AFE80)

namespace RPG::GameCore
{
	class AdvSetIgnoreCollision : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TypeA; // 0x18
		::RPG::GameCore::TargetEvaluator* TypeB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETIGNORECOLLISION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetIgnoreCollision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetIgnoreCollision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETIGNORECOLLISION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetIgnoreCollision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetIgnoreCollision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETIGNORECOLLISION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
