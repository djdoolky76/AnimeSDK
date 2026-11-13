#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CacheUI; }
namespace RPG::GameCore { class TaskContext; }

#define EHDLIJFMLKH_CTOR_OFFSET UNITYSDK_OFFSET(0x18BC8DA0)
#define EHDLIJFMLKH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BC8DB0)
#define EHDLIJFMLKH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18BC8E00)
#define EHDLIJFMLKH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18BC8FE0)
#define EHDLIJFMLKH_TICK_OFFSET UNITYSDK_OFFSET(0x18BC9030)

inline static constexpr unsigned int EHDLIJFMLKH_TypeDefinitionIndex = 59234;

	class EHDLIJFMLKH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CacheUI* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CacheUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CacheUI*))((::PBYTE)hIl2Cpp + EHDLIJFMLKH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDLIJFMLKH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDLIJFMLKH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDLIJFMLKH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHDLIJFMLKH_TICK_OFFSET))(this, a1);
		}

	};
