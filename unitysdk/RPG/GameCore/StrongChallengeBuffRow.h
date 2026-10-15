#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StrongChallengeBuffRow; }

#define RPG_GAMECORE_STRONGCHALLENGEBUFFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2BEC0)
#define RPG_GAMECORE_STRONGCHALLENGEBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB2BDD0)

namespace RPG::GameCore
{
	class StrongChallengeBuffRow : public ::System::Object
	{
	public:
		::System::UInt32 StrongChallengeBuffID; // 0x10
		::System::UInt32 BuffCost; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEBUFFROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StrongChallengeBuffRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StrongChallengeBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
