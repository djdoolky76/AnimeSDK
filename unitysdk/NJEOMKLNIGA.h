#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LoadLevelGroup; }
namespace RPG::GameCore { class TaskContext; }

#define NJEOMKLNIGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A789460)
#define NJEOMKLNIGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A789470)
#define NJEOMKLNIGA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7894B0)
#define NJEOMKLNIGA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A789500)
#define NJEOMKLNIGA_TICK_OFFSET UNITYSDK_OFFSET(0x1A789550)

inline static constexpr unsigned int NJEOMKLNIGA_TypeDefinitionIndex = 54140;

	class NJEOMKLNIGA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::LoadLevelGroup* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoadLevelGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoadLevelGroup*))((::PBYTE)hIl2Cpp + NJEOMKLNIGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEOMKLNIGA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEOMKLNIGA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEOMKLNIGA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJEOMKLNIGA_TICK_OFFSET))(this, a1);
		}

	};
