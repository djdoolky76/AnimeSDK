#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournNPCRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNNPCROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC52D40)
#define RPG_GAMECORE_ROGUETOURNNPCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC52C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournNPCRow_TypeDefinitionIndex = 15193;

	class RogueTournNPCRow : public ::System::Object
	{
	public:
		::System::String* NPCJsonPath; // 0x10
		::System::UInt32 RogueNPCID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNNPCROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournNPCRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournNPCRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNNPCROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
