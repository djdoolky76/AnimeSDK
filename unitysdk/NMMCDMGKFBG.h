#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Main_StandBy; }
namespace RPG::GameCore { class TaskContext; }

#define NMMCDMGKFBG_CTOR_OFFSET UNITYSDK_OFFSET(0xC575B40)
#define NMMCDMGKFBG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC575B70)
#define NMMCDMGKFBG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC575DC0)
#define NMMCDMGKFBG_TICK_OFFSET UNITYSDK_OFFSET(0xC576000)

inline static constexpr unsigned int NMMCDMGKFBG_TypeDefinitionIndex = 53327;

	class NMMCDMGKFBG
	{
	public:
		::System::Single PGMIOKKLHIE; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_StandBy* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_StandBy*))((::PBYTE)hIl2Cpp + NMMCDMGKFBG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMCDMGKFBG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMCDMGKFBG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMMCDMGKFBG_TICK_OFFSET))(this, a1);
		}

	};
