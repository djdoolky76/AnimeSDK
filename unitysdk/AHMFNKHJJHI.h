#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UpdateTreasureChallengeProgress; }

#define AHMFNKHJJHI_CTOR_OFFSET UNITYSDK_OFFSET(0xEB82EF0)
#define AHMFNKHJJHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB830D0)
#define AHMFNKHJJHI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB82F00)
#define AHMFNKHJJHI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEB83020)
#define AHMFNKHJJHI_TICK_OFFSET UNITYSDK_OFFSET(0xEB83070)

inline static constexpr unsigned int AHMFNKHJJHI_TypeDefinitionIndex = 58844;

	class AHMFNKHJJHI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::UpdateTreasureChallengeProgress* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UpdateTreasureChallengeProgress* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UpdateTreasureChallengeProgress*))((::PBYTE)hIl2Cpp + AHMFNKHJJHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMFNKHJJHI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMFNKHJJHI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHMFNKHJJHI_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMFNKHJJHI_DISPOSE_OFFSET))(this);
		}

	};
