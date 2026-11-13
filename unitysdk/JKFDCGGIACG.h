#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerCableProceduralEffect; }

#define JKFDCGGIACG_CTOR_OFFSET UNITYSDK_OFFSET(0x17B20DC0)
#define JKFDCGGIACG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B211B0)
#define JKFDCGGIACG_LBMACDLKEDF_OFFSET UNITYSDK_OFFSET(0x17B21250)
#define JKFDCGGIACG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17B20DD0)
#define JKFDCGGIACG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17B21160)
#define JKFDCGGIACG_TICK_OFFSET UNITYSDK_OFFSET(0x17B211F0)

inline static constexpr unsigned int JKFDCGGIACG_TypeDefinitionIndex = 56926;

	class JKFDCGGIACG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TriggerCableProceduralEffect* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerCableProceduralEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerCableProceduralEffect*))((::PBYTE)hIl2Cpp + JKFDCGGIACG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFDCGGIACG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFDCGGIACG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFDCGGIACG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JKFDCGGIACG_TICK_OFFSET))(this, a1);
		}

		::System::Void LBMACDLKEDF(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + JKFDCGGIACG_LBMACDLKEDF_OFFSET))(this, a1, a2);
		}

	};
