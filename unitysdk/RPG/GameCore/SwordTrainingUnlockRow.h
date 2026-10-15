#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingUnlockRow; }

#define RPG_GAMECORE_SWORDTRAININGUNLOCKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4FA60)
#define RPG_GAMECORE_SWORDTRAININGUNLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB4F8A0)

namespace RPG::GameCore
{
	class SwordTrainingUnlockRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID UnlockDesc; // 0x10
		::System::UInt32 FinishWayID; // 0x20
		::System::UInt32 UnlockID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGUNLOCKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingUnlockRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingUnlockRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGUNLOCKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
