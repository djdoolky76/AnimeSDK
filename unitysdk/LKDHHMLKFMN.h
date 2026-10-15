#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Main_TeleportToPosition; }
namespace RPG::GameCore { class TaskContext; }

#define LKDHHMLKFMN_CTOR_OFFSET UNITYSDK_OFFSET(0xB72DB30)
#define LKDHHMLKFMN_JHFFJOELFJA_OFFSET UNITYSDK_OFFSET(0xB72E270)
#define LKDHHMLKFMN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB72DB60)
#define LKDHHMLKFMN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB72E2C0)

	class LKDHHMLKFMN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_TeleportToPosition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_TeleportToPosition*))((::PBYTE)hIl2Cpp + LKDHHMLKFMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDHHMLKFMN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JHFFJOELFJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDHHMLKFMN_JHFFJOELFJA_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDHHMLKFMN_ONTASKRESET_OFFSET))(this);
		}

	};
