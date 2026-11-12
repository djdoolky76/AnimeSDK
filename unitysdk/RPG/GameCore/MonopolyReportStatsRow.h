#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyReportStatsRow; }

#define RPG_GAMECORE_MONOPOLYREPORTSTATSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC7760)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EAC7120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyReportStatsRow_TypeDefinitionIndex = 12132;

	class MonopolyReportStatsRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Title; // 0x10
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyReportStatsRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyReportStatsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
