#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StopEffectFollowPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CHPLOCFJLIB_CTOR_OFFSET UNITYSDK_OFFSET(0xCF5BF70)
#define CHPLOCFJLIB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF5BF80)
#define CHPLOCFJLIB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF5BFC0)
#define CHPLOCFJLIB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF5C240)
#define CHPLOCFJLIB_TICK_OFFSET UNITYSDK_OFFSET(0xCF5C290)

inline static constexpr unsigned int CHPLOCFJLIB_TypeDefinitionIndex = 55666;

	class CHPLOCFJLIB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::StopEffectFollowPoint* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
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
