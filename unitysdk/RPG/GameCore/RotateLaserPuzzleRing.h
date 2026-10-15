#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RotateLaserPuzzleRing; }
namespace System { class String; }

#define RPG_GAMECORE_ROTATELASERPUZZLERING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A160)
#define RPG_GAMECORE_ROTATELASERPUZZLERING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A170)
#define RPG_GAMECORE_ROTATELASERPUZZLERING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1A130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RotateLaserPuzzleRing_TypeDefinitionIndex = 22146;

	class RotateLaserPuzzleRing : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 GroupPropID; // 0x1C
		::System::Boolean TargetIsOwner; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* RingName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATELASERPUZZLERING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RotateLaserPuzzleRing* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RotateLaserPuzzleRing*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATELASERPUZZLERING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RotateLaserPuzzleRing* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RotateLaserPuzzleRing*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATELASERPUZZLERING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
