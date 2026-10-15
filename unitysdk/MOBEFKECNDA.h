#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryTransferToHeroRoom; }

#define MOBEFKECNDA_CTOR_OFFSET UNITYSDK_OFFSET(0xBA21CA0)
#define MOBEFKECNDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA21CD0)
#define MOBEFKECNDA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA21D10)
#define MOBEFKECNDA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA21D60)

	class MOBEFKECNDA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryTransferToHeroRoom* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryTransferToHeroRoom*))((::PBYTE)hIl2Cpp + MOBEFKECNDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBEFKECNDA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBEFKECNDA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBEFKECNDA_ONTASKRESET_OFFSET))(this);
		}

	};
