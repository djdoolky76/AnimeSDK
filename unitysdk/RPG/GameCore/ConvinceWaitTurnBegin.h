#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConvinceWaitTurnBegin; }

#define RPG_GAMECORE_CONVINCEWAITTURNBEGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DFF50)
#define RPG_GAMECORE_CONVINCEWAITTURNBEGIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5DFF60)
#define RPG_GAMECORE_CONVINCEWAITTURNBEGIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5DFF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceWaitTurnBegin_TypeDefinitionIndex = 21837;

	class ConvinceWaitTurnBegin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 TurnIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITTURNBEGIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceWaitTurnBegin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceWaitTurnBegin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITTURNBEGIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceWaitTurnBegin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceWaitTurnBegin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITTURNBEGIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
