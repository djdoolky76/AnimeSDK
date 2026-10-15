#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/MusicComboType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimShowMusicComboAction; }

#define RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DBA20)
#define RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DBA30)
#define RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DB9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimShowMusicComboAction_TypeDefinitionIndex = 18712;

	class FiveDimShowMusicComboAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::MusicComboType ComboType; // 0x10
		::System::Boolean OnlyFollowAtStart; // 0x14
		::System::Boolean FollowPlayer; // 0x15
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimShowMusicComboAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimShowMusicComboAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimShowMusicComboAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimShowMusicComboAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSHOWMUSICCOMBOACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
