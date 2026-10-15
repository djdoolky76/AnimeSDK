#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideSpiritTrialRow; }

#define RPG_GAMECORE_AETHERDIVIDESPIRITTRIALROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3DCC30)
#define RPG_GAMECORE_AETHERDIVIDESPIRITTRIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3DCAC0)

namespace RPG::GameCore
{
	class AetherDivideSpiritTrialRow : public ::System::Object
	{
	public:
		::System::UInt32 Promotion; // 0x10
		::System::UInt32 SpiritID; // 0x14
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITTRIALROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AetherDivideSpiritTrialRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AetherDivideSpiritTrialRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITTRIALROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
