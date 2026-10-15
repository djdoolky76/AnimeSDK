#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockFaceEmotionMoveDirection.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockFaceEmotion; }

#define RPG_GAMECORE_CLOCKFACEEMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B8DE0)
#define RPG_GAMECORE_CLOCKFACEEMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B8C10)

namespace RPG::GameCore
{
	class ClockFaceEmotion : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Hour; // 0x10
		::System::UInt32 Minute; // 0x14
		::System::Single MoveDuration; // 0x18
		::RPG::GameCore::ClockFaceEmotionMoveDirection MoveDirection; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKFACEEMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockFaceEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockFaceEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKFACEEMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
