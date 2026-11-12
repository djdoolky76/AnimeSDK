#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearActionCountDown; }

#define RPG_GAMECORE_CLEARACTIONCOUNTDOWN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C5760)
#define RPG_GAMECORE_CLEARACTIONCOUNTDOWN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7C5770)
#define RPG_GAMECORE_CLEARACTIONCOUNTDOWN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7C56A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearActionCountDown_TypeDefinitionIndex = 23695;

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
