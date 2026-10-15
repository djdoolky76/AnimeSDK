#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDestroyPropConfigRow; }

#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C7930)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9C72B0)

namespace RPG::GameCore
{
	class RogueDestroyPropConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ScoreRange; // 0x10
		::System::UInt32 GameTime; // 0x18
		::System::UInt32 PrepareTime; // 0x1C
		::System::UInt32 ParamGroupID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDestroyPropConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDestroyPropConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
