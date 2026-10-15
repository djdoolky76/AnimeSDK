#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetDanmuTrackAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D95C0)
#define RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D95D0)
#define RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D9590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetDanmuTrackAction_TypeDefinitionIndex = 18705;

	class FiveDimSetDanmuTrackAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* DanmuName; // 0x10
		::System::UInt32 TrackID; // 0x18
		::System::Boolean Enable; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetDanmuTrackAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetDanmuTrackAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetDanmuTrackAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetDanmuTrackAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETDANMUTRACKACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
