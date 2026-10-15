#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesSummaryNominateType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesSummaryRow; }

#define RPG_GAMECORE_PLANETFESSUMMARYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92B9C0)
#define RPG_GAMECORE_PLANETFESSUMMARYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D92B760)

namespace RPG::GameCore
{
	class PlanetFesSummaryRow : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesSummaryNominateType ID; // 0x10
		::System::UInt32 TargetNum; // 0x14
		::RPG::Client::TextID Description; // 0x18
		::RPG::Client::TextID Name; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESSUMMARYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesSummaryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesSummaryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESSUMMARYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
