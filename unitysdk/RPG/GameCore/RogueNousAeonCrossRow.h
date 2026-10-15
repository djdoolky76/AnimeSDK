#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousAeonCrossRow; }

#define RPG_GAMECORE_ROGUENOUSAEONCROSSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EF8D0)
#define RPG_GAMECORE_ROGUENOUSAEONCROSSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9EF6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousAeonCrossRow_TypeDefinitionIndex = 14921;

	class RogueNousAeonCrossRow : public ::System::Object
	{
	public:
		::System::UInt32 SubAeonID; // 0x10
		::System::UInt32 MainAeonNum; // 0x14
		::System::UInt32 MainAeonID; // 0x18
		::System::UInt32 BuffGroup; // 0x1C
		::System::UInt32 SubAeonNum; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONCROSSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNousAeonCrossRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNousAeonCrossRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONCROSSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
