#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetGameplayBGMEmotionState; }
namespace RPG::GameCore { class TaskContext; }

#define MJDMNMGLNEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB969B20)
#define MJDMNMGLNEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB969B30)
#define MJDMNMGLNEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB969B70)
#define MJDMNMGLNEC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB969D00)
#define MJDMNMGLNEC_TICK_OFFSET UNITYSDK_OFFSET(0xB969D50)

	class MJDMNMGLNEC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetGameplayBGMEmotionState* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetGameplayBGMEmotionState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetGameplayBGMEmotionState*))((::PBYTE)hIl2Cpp + MJDMNMGLNEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDMNMGLNEC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDMNMGLNEC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDMNMGLNEC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MJDMNMGLNEC_TICK_OFFSET))(this, a1);
		}

	};
