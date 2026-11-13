#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ElfProgressUpgrade; }
namespace RPG::GameCore { class TaskContext; }

#define ADHBCEOHHAL_CTOR_OFFSET UNITYSDK_OFFSET(0x182A9460)
#define ADHBCEOHHAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x182A9470)
#define ADHBCEOHHAL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x182A94C0)
#define ADHBCEOHHAL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x182A9810)
#define ADHBCEOHHAL_TICK_OFFSET UNITYSDK_OFFSET(0x182A9860)

inline static constexpr unsigned int ADHBCEOHHAL_TypeDefinitionIndex = 59335;

	class ADHBCEOHHAL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ElfProgressUpgrade* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElfProgressUpgrade* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElfProgressUpgrade*))((::PBYTE)hIl2Cpp + ADHBCEOHHAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHBCEOHHAL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHBCEOHHAL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHBCEOHHAL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADHBCEOHHAL_TICK_OFFSET))(this, a1);
		}

	};
