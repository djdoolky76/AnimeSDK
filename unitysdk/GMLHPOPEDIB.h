#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowFightActivityLose; }
namespace RPG::GameCore { class TaskContext; }

#define GMLHPOPEDIB_CTOR_OFFSET UNITYSDK_OFFSET(0x15AD5710)
#define GMLHPOPEDIB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AD5720)
#define GMLHPOPEDIB_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x15AD5A00)
#define GMLHPOPEDIB_JPDIAHFBNAP_OFFSET UNITYSDK_OFFSET(0x15AD57B0)
#define GMLHPOPEDIB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AD5760)
#define GMLHPOPEDIB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AD5950)
#define GMLHPOPEDIB_TICK_OFFSET UNITYSDK_OFFSET(0x15AD59A0)

	class GMLHPOPEDIB : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::ShowFightActivityLose* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFightActivityLose* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFightActivityLose*))((::PBYTE)hIl2Cpp + GMLHPOPEDIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLHPOPEDIB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLHPOPEDIB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLHPOPEDIB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GMLHPOPEDIB_TICK_OFFSET))(this, a1);
		}

		::System::Void JPDIAHFBNAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLHPOPEDIB_JPDIAHFBNAP_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLHPOPEDIB_JNIKOAEAEHB_OFFSET))(this);
		}

	};
