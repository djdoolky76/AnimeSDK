#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournFormulaRandomRow; }

#define RPG_GAMECORE_ROGUETOURNFORMULARANDOMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3B770)
#define RPG_GAMECORE_ROGUETOURNFORMULARANDOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA3B6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaRandomRow_TypeDefinitionIndex = 15005;

	class RogueTournFormulaRandomRow : public ::System::Object
	{
	public:
		::System::UInt32 RandomID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULARANDOMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournFormulaRandomRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournFormulaRandomRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULARANDOMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
