#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMuteUIInputAction; }

#define RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CEDD0)
#define RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6CEDE0)
#define RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CED10)

namespace RPG::GameCore
{
	class FiveDimMuteUIInputAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsMute; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMuteUIInputAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMuteUIInputAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMuteUIInputAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMuteUIInputAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
