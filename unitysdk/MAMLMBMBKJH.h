#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowDreamLandPage; }
namespace RPG::GameCore { class TaskContext; }

#define MAMLMBMBKJH_AIEGALJHOFE_OFFSET UNITYSDK_OFFSET(0xB8548D0)
#define MAMLMBMBKJH_CTOR_OFFSET UNITYSDK_OFFSET(0xB854830)
#define MAMLMBMBKJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB854840)
#define MAMLMBMBKJH_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0xB854B30)
#define MAMLMBMBKJH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB854880)
#define MAMLMBMBKJH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB854A80)
#define MAMLMBMBKJH_TICK_OFFSET UNITYSDK_OFFSET(0xB854AD0)

inline static constexpr unsigned int MAMLMBMBKJH_TypeDefinitionIndex = 58635;

	class MAMLMBMBKJH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowDreamLandPage* OFKGLJOAMLD; // 0x20
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowDreamLandPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowDreamLandPage*))((::PBYTE)hIl2Cpp + MAMLMBMBKJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMLMBMBKJH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMLMBMBKJH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMLMBMBKJH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MAMLMBMBKJH_TICK_OFFSET))(this, a1);
		}

		::System::Void AIEGALJHOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMLMBMBKJH_AIEGALJHOFE_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMLMBMBKJH_JNIKOAEAEHB_OFFSET))(this);
		}

	};
