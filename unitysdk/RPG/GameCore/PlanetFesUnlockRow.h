#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesUnlockRow; }

#define RPG_GAMECORE_PLANETFESUNLOCKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FE430)
#define RPG_GAMECORE_PLANETFESUNLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8FE270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesUnlockRow_TypeDefinitionIndex = 12231;

	class PlanetFesUnlockRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID UnlockDesc; // 0x10
		::System::UInt32 UnlockID; // 0x20
		::System::UInt32 FinishWayID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESUNLOCKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesUnlockRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesUnlockRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESUNLOCKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
