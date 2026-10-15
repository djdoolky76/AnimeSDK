#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameBaseEventCondition; }

#define RPG_GAMECORE_LITTLEGAMEBASEEVENTCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DDCB0)
#define RPG_GAMECORE_LITTLEGAMEBASEEVENTCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DDC50)
#define RPG_GAMECORE_LITTLEGAMEBASEEVENTCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DD950)

namespace RPG::GameCore
{
	class LittleGameBaseEventCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBASEEVENTCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameBaseEventCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameBaseEventCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBASEEVENTCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameBaseEventCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameBaseEventCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBASEEVENTCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
