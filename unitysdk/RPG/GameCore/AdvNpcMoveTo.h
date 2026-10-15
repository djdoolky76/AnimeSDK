#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcMoveTo; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVNPCMOVETO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A85B0)
#define RPG_GAMECORE_ADVNPCMOVETO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A85E0)
#define RPG_GAMECORE_ADVNPCMOVETO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A8560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcMoveTo_TypeDefinitionIndex = 21957;

	class AdvNpcMoveTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* LevelAreaKey; // 0x20
		::System::Boolean OverrideBorn; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMOVETO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcMoveTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcMoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMOVETO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcMoveTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcMoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMOVETO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
