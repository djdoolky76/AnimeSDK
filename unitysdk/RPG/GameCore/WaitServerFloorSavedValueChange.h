#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitServerFloorSavedValueChange; }

#define RPG_GAMECORE_WAITSERVERFLOORSAVEDVALUECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC73DC0)
#define RPG_GAMECORE_WAITSERVERFLOORSAVEDVALUECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC73DD0)
#define RPG_GAMECORE_WAITSERVERFLOORSAVEDVALUECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC73D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitServerFloorSavedValueChange_TypeDefinitionIndex = 22248;

	class WaitServerFloorSavedValueChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERFLOORSAVEDVALUECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitServerFloorSavedValueChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitServerFloorSavedValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERFLOORSAVEDVALUECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitServerFloorSavedValueChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitServerFloorSavedValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERFLOORSAVEDVALUECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
