#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearActionCountDown; }

#define RPG_GAMECORE_CLEARACTIONCOUNTDOWN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B5750)
#define RPG_GAMECORE_CLEARACTIONCOUNTDOWN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B5760)
#define RPG_GAMECORE_CLEARACTIONCOUNTDOWN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B5690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearActionCountDown_TypeDefinitionIndex = 23255;

	class ClearActionCountDown : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARACTIONCOUNTDOWN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearActionCountDown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARACTIONCOUNTDOWN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearActionCountDown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARACTIONCOUNTDOWN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
