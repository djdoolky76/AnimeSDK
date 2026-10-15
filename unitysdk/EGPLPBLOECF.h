#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRaidExitNotify; }
namespace System { class Object; }

#define EGPLPBLOECF_CTOR_OFFSET UNITYSDK_OFFSET(0x15491190)
#define EGPLPBLOECF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154911A0)
#define EGPLPBLOECF_DOCKOHKEEOG_OFFSET UNITYSDK_OFFSET(0x154915C0)
#define EGPLPBLOECF_KMMOKFCMLBG_OFFSET UNITYSDK_OFFSET(0x154913C0)
#define EGPLPBLOECF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15491260)
#define EGPLPBLOECF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15491680)
#define EGPLPBLOECF_TICK_OFFSET UNITYSDK_OFFSET(0x154916D0)

inline static constexpr unsigned int EGPLPBLOECF_TypeDefinitionIndex = 58918;

	class EGPLPBLOECF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitRaidExitNotify* OFKGLJOAMLD; // 0x20
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
