#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRaidExitNotify; }
namespace System { class Object; }

#define EGPLPBLOECF_CTOR_OFFSET UNITYSDK_OFFSET(0x1549CDB0)
#define EGPLPBLOECF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1549CDC0)
#define EGPLPBLOECF_DOCKOHKEEOG_OFFSET UNITYSDK_OFFSET(0x1549D1E0)
#define EGPLPBLOECF_KMMOKFCMLBG_OFFSET UNITYSDK_OFFSET(0x1549CFE0)
#define EGPLPBLOECF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1549CE80)
#define EGPLPBLOECF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1549D2A0)
#define EGPLPBLOECF_TICK_OFFSET UNITYSDK_OFFSET(0x1549D2F0)

	class EGPLPBLOECF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitRaidExitNotify* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRaidExitNotify* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRaidExitNotify*))((::PBYTE)hIl2Cpp + EGPLPBLOECF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPLPBLOECF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPLPBLOECF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPLPBLOECF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGPLPBLOECF_TICK_OFFSET))(this, a1);
		}

		::System::Void DOCKOHKEEOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPLPBLOECF_DOCKOHKEEOG_OFFSET))(this);
		}

		::System::Void KMMOKFCMLBG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGPLPBLOECF_KMMOKFCMLBG_OFFSET))(this, a1);
		}

	};
