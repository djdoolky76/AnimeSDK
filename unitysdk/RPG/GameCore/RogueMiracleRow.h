#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMiracleRow; }

#define RPG_GAMECORE_ROGUEMIRACLEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DD0E0)
#define RPG_GAMECORE_ROGUEMIRACLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9DC980)

namespace RPG::GameCore
{
	class RogueMiracleRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockHandbookMiracleID; // 0x10
		::System::UInt32 MiracleID; // 0x14
		::System::UInt32 MiracleEffectDisplayID; // 0x18
		::System::UInt32 MiracleDisplayID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMiracleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMiracleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
