#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBaseTask.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UniversalHotFixTaskB; }

#define RPG_GAMECORE_UNIVERSALHOTFIXTASKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC766C0)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC766D0)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC77C10)

namespace RPG::GameCore
{
	class UniversalHotFixTaskB : public ::RPG::GameCore::UniversalHotFixBaseTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixTaskB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixTaskB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixTaskB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixTaskB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
