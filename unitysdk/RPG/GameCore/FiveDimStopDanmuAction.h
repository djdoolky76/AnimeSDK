#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimStopDanmuAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSTOPDANMUACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B1620)
#define RPG_GAMECORE_FIVEDIMSTOPDANMUACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B1630)
#define RPG_GAMECORE_FIVEDIMSTOPDANMUACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B1570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStopDanmuAction_TypeDefinitionIndex = 18704;

	class FiveDimStopDanmuAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* DanmuName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPDANMUACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStopDanmuAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStopDanmuAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPDANMUACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStopDanmuAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStopDanmuAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPDANMUACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
