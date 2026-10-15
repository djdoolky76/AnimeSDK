#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddReShaReactProp; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDRESHAREACTPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38B190)
#define RPG_GAMECORE_ADDRESHAREACTPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38B1C0)
#define RPG_GAMECORE_ADDRESHAREACTPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38B140)

namespace RPG::GameCore
{
	class AddReShaReactProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAREACTPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddReShaReactProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddReShaReactProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAREACTPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddReShaReactProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddReShaReactProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAREACTPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
