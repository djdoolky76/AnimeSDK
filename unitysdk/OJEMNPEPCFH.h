#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowPuzzleHudWolfBro; }
namespace RPG::GameCore { class TaskContext; }

#define OJEMNPEPCFH_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA7450)
#define OJEMNPEPCFH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEA7460)
#define OJEMNPEPCFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEA74A0)
#define OJEMNPEPCFH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBEA7730)
#define OJEMNPEPCFH_TICK_OFFSET UNITYSDK_OFFSET(0xBEA7780)

inline static constexpr unsigned int OJEMNPEPCFH_TypeDefinitionIndex = 58680;

	class OJEMNPEPCFH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowPuzzleHudWolfBro* OFKGLJOAMLD; // 0x20
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowPuzzleHudWolfBro* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowPuzzleHudWolfBro*))((::PBYTE)hIl2Cpp + OJEMNPEPCFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJEMNPEPCFH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJEMNPEPCFH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJEMNPEPCFH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OJEMNPEPCFH_TICK_OFFSET))(this, a1);
		}

	};
