#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowPenaconyGiftSubmitPage; }
namespace RPG::GameCore { class TaskContext; }

#define FGIHIMBKOKE_CTOR_OFFSET UNITYSDK_OFFSET(0x157646D0)
#define FGIHIMBKOKE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157646E0)
#define FGIHIMBKOKE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15764720)
#define FGIHIMBKOKE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15764770)
#define FGIHIMBKOKE_TICK_OFFSET UNITYSDK_OFFSET(0x157647C0)

	class FGIHIMBKOKE : public ::GELIALJDFBL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowPenaconyGiftSubmitPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowPenaconyGiftSubmitPage*))((::PBYTE)hIl2Cpp + FGIHIMBKOKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIHIMBKOKE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIHIMBKOKE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIHIMBKOKE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGIHIMBKOKE_TICK_OFFSET))(this, a1);
		}

	};
