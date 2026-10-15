#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideBadgeRow; }

#define RPG_GAMECORE_AETHERDIVIDEBADGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D22D0)
#define RPG_GAMECORE_AETHERDIVIDEBADGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3D1CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideBadgeRow_TypeDefinitionIndex = 10936;

	class AetherDivideBadgeRow : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 MaxSpiritLevel; // 0x14
		::System::UInt32 Number; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AetherDivideBadgeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AetherDivideBadgeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
