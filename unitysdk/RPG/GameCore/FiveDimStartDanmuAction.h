#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimDanmuTrackAlignment.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimStartDanmuAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSTARTDANMUACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DE260)
#define RPG_GAMECORE_FIVEDIMSTARTDANMUACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DE270)
#define RPG_GAMECORE_FIVEDIMSTARTDANMUACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DE230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartDanmuAction_TypeDefinitionIndex = 18703;

	class FiveDimStartDanmuAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* DanmuName; // 0x10
		::System::String* EntityPreset; // 0x18
		::System::UInt32 TrackGroupID; // 0x20
		::System::Single Speed; // 0x24
		::System::Int32 Number; // 0x28
		::System::Boolean IsRandomTrack; // 0x2C
		::System::Boolean IsFollowCamera; // 0x2D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::FiveDimDanmuTrackAlignment TrackAlignment; // 0x30
		::System::Single BufferDistance; // 0x34
		::System::Single IntervalMin; // 0x38
		::System::Single IntervalMax; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTDANMUACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStartDanmuAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStartDanmuAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTDANMUACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStartDanmuAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStartDanmuAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTDANMUACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
