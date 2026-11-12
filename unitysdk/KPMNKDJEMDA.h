#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class AdventureShowReading; }
namespace RPG::GameCore { class TaskContext; }

#define KPMNKDJEMDA_CTOR_OFFSET UNITYSDK_OFFSET(0xBE166A0)
#define KPMNKDJEMDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE166B0)
#define KPMNKDJEMDA_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0xBE16C00)
#define KPMNKDJEMDA_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBE16B80)
#define KPMNKDJEMDA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE166F0)
#define KPMNKDJEMDA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE16AD0)
#define KPMNKDJEMDA_TICK_OFFSET UNITYSDK_OFFSET(0xBE16B20)

inline static constexpr unsigned int KPMNKDJEMDA_TypeDefinitionIndex = 59150;

	class KPMNKDJEMDA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdventureShowReading* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureShowReading* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureShowReading*))((::PBYTE)hIl2Cpp + KPMNKDJEMDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMNKDJEMDA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMNKDJEMDA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMNKDJEMDA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPMNKDJEMDA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPMNKDJEMDA_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMNKDJEMDA_JNIKOAEAEHB_OFFSET))(this);
		}

	};
