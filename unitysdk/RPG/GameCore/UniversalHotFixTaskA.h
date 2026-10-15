#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBaseTask.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UniversalHotFixTaskA; }

#define RPG_GAMECORE_UNIVERSALHOTFIXTASKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC76560)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC76570)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC77BE0)

namespace RPG::GameCore
{
	class UniversalHotFixTaskA : public ::RPG::GameCore::UniversalHotFixBaseTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixTaskA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixTaskA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixTaskA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixTaskA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
