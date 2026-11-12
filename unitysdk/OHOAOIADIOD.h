#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetTriggeredFormationAssetAutoCenter; }
namespace RPG::GameCore { class TaskContext; }

#define OHOAOIADIOD_CTOR_OFFSET UNITYSDK_OFFSET(0xC730220)
#define OHOAOIADIOD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC730230)
#define OHOAOIADIOD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC730270)
#define OHOAOIADIOD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC730440)
#define OHOAOIADIOD_TICK_OFFSET UNITYSDK_OFFSET(0xC730490)

inline static constexpr unsigned int OHOAOIADIOD_TypeDefinitionIndex = 56779;

	class OHOAOIADIOD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetTriggeredFormationAssetAutoCenter* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTriggeredFormationAssetAutoCenter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTriggeredFormationAssetAutoCenter*))((::PBYTE)hIl2Cpp + OHOAOIADIOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOAOIADIOD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOAOIADIOD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOAOIADIOD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OHOAOIADIOD_TICK_OFFSET))(this, a1);
		}

	};
