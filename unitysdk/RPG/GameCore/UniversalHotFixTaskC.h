#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBaseTask.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UniversalHotFixTaskC; }

#define RPG_GAMECORE_UNIVERSALHOTFIXTASKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC48F70)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC48F80)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC4A390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixTaskC_TypeDefinitionIndex = 23360;

	class UniversalHotFixTaskC : public ::RPG::GameCore::UniversalHotFixBaseTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixTaskC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixTaskC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixTaskC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixTaskC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
