#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComparePropState; }

#define RPG_GAMECORE_COMPAREPROPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59EC70)
#define RPG_GAMECORE_COMPAREPROPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59EC80)
#define RPG_GAMECORE_COMPAREPROPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59EC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComparePropState_TypeDefinitionIndex = 21619;

	class ComparePropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPAREPROPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComparePropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComparePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPAREPROPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComparePropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComparePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPAREPROPSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
