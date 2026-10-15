#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class RogueWorkBenchShowUI; }
namespace RPG::GameCore { class TaskContext; }

#define FOLCHLKACEE_CTOR_OFFSET UNITYSDK_OFFSET(0x158F6D40)
#define FOLCHLKACEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158F6ED0)
#define FOLCHLKACEE_JIGBGKLNGPP_OFFSET UNITYSDK_OFFSET(0x158F7300)
#define FOLCHLKACEE_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x158F73E0)
#define FOLCHLKACEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158F7030)
#define FOLCHLKACEE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158F6E80)
#define FOLCHLKACEE_TICK_OFFSET UNITYSDK_OFFSET(0x158F6E20)

	class FOLCHLKACEE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RogueWorkBenchShowUI* JKJPFJALGKO; // 0x18
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* ABBFFFCMLHL; // 0x30
		::KFELGAIGHAP* GGGKNHKPGHP; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueWorkBenchShowUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueWorkBenchShowUI*))((::PBYTE)hIl2Cpp + FOLCHLKACEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOLCHLKACEE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLCHLKACEE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLCHLKACEE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLCHLKACEE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JIGBGKLNGPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLCHLKACEE_JIGBGKLNGPP_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLCHLKACEE_JNIKOAEAEHB_OFFSET))(this);
		}

	};
