#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LoadLittleGameArea; }
namespace RPG::GameCore { class TaskContext; }

#define PGPPPJCJLHB_CTOR_OFFSET UNITYSDK_OFFSET(0xC22EDF0)
#define PGPPPJCJLHB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC22EF40)
#define PGPPPJCJLHB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC22EE00)
#define PGPPPJCJLHB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC22EEF0)
#define PGPPPJCJLHB_TICK_OFFSET UNITYSDK_OFFSET(0xC22EF80)

inline static constexpr unsigned int PGPPPJCJLHB_TypeDefinitionIndex = 58198;

	class PGPPPJCJLHB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::LoadLittleGameArea* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoadLittleGameArea* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoadLittleGameArea*))((::PBYTE)hIl2Cpp + PGPPPJCJLHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPPPJCJLHB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPPPJCJLHB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPPPJCJLHB_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PGPPPJCJLHB_TICK_OFFSET))(this, a1);
		}

	};
