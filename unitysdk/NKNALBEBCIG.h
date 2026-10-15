#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ReleaseCacheUI; }
namespace RPG::GameCore { class TaskContext; }

#define NKNALBEBCIG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC387E0)
#define NKNALBEBCIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC387F0)
#define NKNALBEBCIG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC38840)
#define NKNALBEBCIG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC38AC0)
#define NKNALBEBCIG_TICK_OFFSET UNITYSDK_OFFSET(0xBC38B10)

inline static constexpr unsigned int NKNALBEBCIG_TypeDefinitionIndex = 58378;

	class NKNALBEBCIG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ReleaseCacheUI* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReleaseCacheUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReleaseCacheUI*))((::PBYTE)hIl2Cpp + NKNALBEBCIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNALBEBCIG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNALBEBCIG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNALBEBCIG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NKNALBEBCIG_TICK_OFFSET))(this, a1);
		}

	};
