#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CurvePropGroupPuzzleFinishListener; }
namespace RPG::GameCore { class TaskContext; }

#define GJEHENDOHPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1699D430)
#define GJEHENDOHPD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1699D440)
#define GJEHENDOHPD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1699D480)
#define GJEHENDOHPD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1699D530)
#define GJEHENDOHPD_TICK_OFFSET UNITYSDK_OFFSET(0x1699D580)

inline static constexpr unsigned int GJEHENDOHPD_TypeDefinitionIndex = 59301;

	class GJEHENDOHPD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CurvePropGroupPuzzleFinishListener* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CurvePropGroupPuzzleFinishListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CurvePropGroupPuzzleFinishListener*))((::PBYTE)hIl2Cpp + GJEHENDOHPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEHENDOHPD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEHENDOHPD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEHENDOHPD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJEHENDOHPD_TICK_OFFSET))(this, a1);
		}

	};
