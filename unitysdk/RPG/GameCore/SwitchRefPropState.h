#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchRefPropState; }

#define RPG_GAMECORE_SWITCHREFPROPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDF5B50)
#define RPG_GAMECORE_SWITCHREFPROPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EDF5B60)
#define RPG_GAMECORE_SWITCHREFPROPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EDF6220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefPropState_TypeDefinitionIndex = 17697;

	class SwitchRefPropState : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::System::UInt32 InstanceID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFPROPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefPropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFPROPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefPropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFPROPSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
