#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMonsterGroupRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMONSTERGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1CB30)
#define RPG_GAMECORE_ROGUEMONSTERGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA1C560)

namespace RPG::GameCore
{
	class RogueMonsterGroupRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* RogueMonsterListAndWeight; // 0x10
		::System::UInt32 EliteGroup; // 0x18
		::System::UInt32 RogueMonsterGroupID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMonsterGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMonsterGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
