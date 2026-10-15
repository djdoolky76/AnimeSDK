#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EvolveBuildRewardBoxRandomItemRow; }

#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXRANDOMITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D685C60)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXRANDOMITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D685B20)

namespace RPG::GameCore
{
	class EvolveBuildRewardBoxRandomItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ItemIDList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXRANDOMITEMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXRANDOMITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
