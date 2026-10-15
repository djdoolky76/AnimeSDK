#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/System/Object.h"
class AMPNMIBFGAM;
namespace RPG::Client::Prop { class ChimeraPreparationStateControllerBase; }

#define AMPNMIBFGAM___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15583D20)
#define AMPNMIBFGAM___C__DISPLAYCLASS9_0__SWITCHTO_B__0_OFFSET UNITYSDK_OFFSET(0x155841E0)

inline static constexpr unsigned int AMPNMIBFGAM___c__DisplayClass9_0_TypeDefinitionIndex = 78472;

	class AMPNMIBFGAM___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraPreparationStateControllerBase* lastStateController; // 0x10
		::AMPNMIBFGAM* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPNMIBFGAM___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _SwitchTo_b__0(::RPG::Client::Prop::ChimeraPreparationState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + AMPNMIBFGAM___C__DISPLAYCLASS9_0__SWITCHTO_B__0_OFFSET))(this, a1);
		}

	};
