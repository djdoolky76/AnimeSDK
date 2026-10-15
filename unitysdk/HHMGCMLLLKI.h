#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class InfiniteWaveModifySummonProgress; }
namespace RPG::GameCore { class TaskContext; }

#define HHMGCMLLLKI_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD32C0)
#define HHMGCMLLLKI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CD32F0)

	class HHMGCMLLLKI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InfiniteWaveModifySummonProgress* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InfiniteWaveModifySummonProgress*))((::PBYTE)hIl2Cpp + HHMGCMLLLKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMGCMLLLKI_ONTASKBEGIN_OFFSET))(this);
		}

	};
