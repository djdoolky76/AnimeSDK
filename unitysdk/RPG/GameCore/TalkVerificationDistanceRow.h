#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TalkVerificationDistanceRow; }

#define RPG_GAMECORE_TALKVERIFICATIONDISTANCEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB59170)
#define RPG_GAMECORE_TALKVERIFICATIONDISTANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB59040)

namespace RPG::GameCore
{
	class TalkVerificationDistanceRow : public ::System::Object
	{
	public:
		::System::Single Distance; // 0x10
		::System::UInt32 ID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKVERIFICATIONDISTANCEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TalkVerificationDistanceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TalkVerificationDistanceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKVERIFICATIONDISTANCEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
