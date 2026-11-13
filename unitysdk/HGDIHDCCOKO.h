#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class QteCatchGhostSendNotify; }
namespace RPG::GameCore { class TaskContext; }

#define HGDIHDCCOKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C43B290)
#define HGDIHDCCOKO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C43B2A0)
#define HGDIHDCCOKO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C43B2E0)
#define HGDIHDCCOKO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C43B440)
#define HGDIHDCCOKO_TICK_OFFSET UNITYSDK_OFFSET(0x1C43B490)

inline static constexpr unsigned int HGDIHDCCOKO_TypeDefinitionIndex = 54354;

	class HGDIHDCCOKO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::QteCatchGhostSendNotify* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::QteCatchGhostSendNotify* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::QteCatchGhostSendNotify*))((::PBYTE)hIl2Cpp + HGDIHDCCOKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDIHDCCOKO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDIHDCCOKO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDIHDCCOKO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGDIHDCCOKO_TICK_OFFSET))(this, a1);
		}

	};
