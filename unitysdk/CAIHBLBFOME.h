#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowReading; }
namespace RPG::GameCore { class TaskContext; }

#define CAIHBLBFOME_CTOR_OFFSET UNITYSDK_OFFSET(0xC480200)
#define CAIHBLBFOME_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC480210)
#define CAIHBLBFOME_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0xC480790)
#define CAIHBLBFOME_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC480710)
#define CAIHBLBFOME_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC480250)
#define CAIHBLBFOME_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC480660)
#define CAIHBLBFOME_TICK_OFFSET UNITYSDK_OFFSET(0xC4806B0)

inline static constexpr unsigned int CAIHBLBFOME_TypeDefinitionIndex = 58682;

	class CAIHBLBFOME : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowReading* OFKGLJOAMLD; // 0x18
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowReading* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowReading*))((::PBYTE)hIl2Cpp + CAIHBLBFOME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHBLBFOME_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHBLBFOME_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHBLBFOME_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CAIHBLBFOME_TICK_OFFSET))(this, a1);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CAIHBLBFOME_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHBLBFOME_JNIKOAEAEHB_OFFSET))(this);
		}

	};
