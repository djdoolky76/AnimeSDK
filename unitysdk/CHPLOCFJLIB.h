#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StopEffectFollowPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CHPLOCFJLIB_CTOR_OFFSET UNITYSDK_OFFSET(0xCF638D0)
#define CHPLOCFJLIB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF638E0)
#define CHPLOCFJLIB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF63920)
#define CHPLOCFJLIB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF63BA0)
#define CHPLOCFJLIB_TICK_OFFSET UNITYSDK_OFFSET(0xCF63BF0)

	class CHPLOCFJLIB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::StopEffectFollowPoint* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopEffectFollowPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopEffectFollowPoint*))((::PBYTE)hIl2Cpp + CHPLOCFJLIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHPLOCFJLIB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHPLOCFJLIB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHPLOCFJLIB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHPLOCFJLIB_TICK_OFFSET))(this, a1);
		}

	};
