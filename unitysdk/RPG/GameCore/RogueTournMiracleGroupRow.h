#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournMiracleGroupRow; }

#define RPG_GAMECORE_ROGUETOURNMIRACLEGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3F7A0)
#define RPG_GAMECORE_ROGUETOURNMIRACLEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA3F6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournMiracleGroupRow_TypeDefinitionIndex = 15021;

	class RogueTournMiracleGroupRow : public ::System::Object
	{
	public:
		::System::UInt32 RogueMiracleGroupID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournMiracleGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournMiracleGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
