#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirSupplyRow; }

#define RPG_GAMECORE_PIXAIRSUPPLYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91E080)
#define RPG_GAMECORE_PIXAIRSUPPLYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D91DFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirSupplyRow_TypeDefinitionIndex = 12153;

	class PixAirSupplyRow : public ::System::Object
	{
	public:
		::System::UInt32 ContentID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSUPPLYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirSupplyRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirSupplyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSUPPLYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
