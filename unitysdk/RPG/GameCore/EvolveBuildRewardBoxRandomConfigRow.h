#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EvolveBuildRewardBoxRandomConfigRow; }

#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXRANDOMCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D685B10)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXRANDOMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6859D0)

namespace RPG::GameCore
{
	class EvolveBuildRewardBoxRandomConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BoxItemIDList; // 0x10
		::System::UInt32 GroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXRANDOMCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EvolveBuildRewardBoxRandomConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EvolveBuildRewardBoxRandomConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXRANDOMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
