#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableLocalPlayerIgnoreTimeRewindCollision; }

#define RPG_GAMECORE_ENABLELOCALPLAYERIGNORETIMEREWINDCOLLISION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63FA50)
#define RPG_GAMECORE_ENABLELOCALPLAYERIGNORETIMEREWINDCOLLISION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D63FA60)
#define RPG_GAMECORE_ENABLELOCALPLAYERIGNORETIMEREWINDCOLLISION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D63FA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableLocalPlayerIgnoreTimeRewindCollision_TypeDefinitionIndex = 20952;

	class EnableLocalPlayerIgnoreTimeRewindCollision : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Ignore; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLELOCALPLAYERIGNORETIMEREWINDCOLLISION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableLocalPlayerIgnoreTimeRewindCollision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableLocalPlayerIgnoreTimeRewindCollision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLELOCALPLAYERIGNORETIMEREWINDCOLLISION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableLocalPlayerIgnoreTimeRewindCollision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableLocalPlayerIgnoreTimeRewindCollision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLELOCALPLAYERIGNORETIMEREWINDCOLLISION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
