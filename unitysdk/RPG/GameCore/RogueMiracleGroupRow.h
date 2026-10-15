#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMiracleGroupRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMIRACLEGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DD0D0)
#define RPG_GAMECORE_ROGUEMIRACLEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9DCF80)

namespace RPG::GameCore
{
	class RogueMiracleGroupRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* MiracleWeight; // 0x10
		::System::UInt32 RogueMiracleGroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMiracleGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMiracleGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
