#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimStartMusicAction; }

#define RPG_GAMECORE_FIVEDIMSTARTMUSICACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E8EC0)
#define RPG_GAMECORE_FIVEDIMSTARTMUSICACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8E8ED0)
#define RPG_GAMECORE_FIVEDIMSTARTMUSICACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8E8E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartMusicAction_TypeDefinitionIndex = 18859;

	class FiveDimStartMusicAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTMUSICACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStartMusicAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStartMusicAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTMUSICACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStartMusicAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStartMusicAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTMUSICACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
