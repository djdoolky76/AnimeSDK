#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerFightFestLineupInMission; }

#define JFGNALMKMOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1664C820)
#define JFGNALMKMOL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1664C920)
#define JFGNALMKMOL_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x1664CEC0)
#define JFGNALMKMOL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1664CA80)
#define JFGNALMKMOL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1664CCE0)
#define JFGNALMKMOL_TICK_OFFSET UNITYSDK_OFFSET(0x1664CDC0)

inline static constexpr unsigned int JFGNALMKMOL_TypeDefinitionIndex = 58786;

	class JFGNALMKMOL : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* JKDMEHBMIPO; // 0x28
		::KFELGAIGHAP* IFHIKLDHEKK; // 0x30
		::KFELGAIGHAP* IKNPCLDDCDI; // 0x38
		::RPG::GameCore::TriggerFightFestLineupInMission* OFKGLJOAMLD; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerFightFestLineupInMission* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerFightFestLineupInMission*))((::PBYTE)hIl2Cpp + JFGNALMKMOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGNALMKMOL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGNALMKMOL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGNALMKMOL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFGNALMKMOL_TICK_OFFSET))(this, a1);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGNALMKMOL_JNIKOAEAEHB_OFFSET))(this);
		}

	};
