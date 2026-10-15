#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirShopRow; }

#define RPG_GAMECORE_PIXAIRSHOPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91D840)
#define RPG_GAMECORE_PIXAIRSHOPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D91D720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirShopRow_TypeDefinitionIndex = 12141;

	class PixAirShopRow : public ::System::Object
	{
	public:
		::System::UInt32 ContentID; // 0x10
		::System::UInt32 RefreshCount; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSHOPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirShopRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirShopRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSHOPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
