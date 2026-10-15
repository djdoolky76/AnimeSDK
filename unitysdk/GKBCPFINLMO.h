#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RemoveAnimationClip; }
namespace RPG::GameCore { class TaskContext; }

#define GKBCPFINLMO_CTOR_OFFSET UNITYSDK_OFFSET(0x15A82EF0)
#define GKBCPFINLMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A82F00)
#define GKBCPFINLMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A82F40)
#define GKBCPFINLMO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A83130)
#define GKBCPFINLMO_TICK_OFFSET UNITYSDK_OFFSET(0x15A83180)

	class GKBCPFINLMO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RemoveAnimationClip* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveAnimationClip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveAnimationClip*))((::PBYTE)hIl2Cpp + GKBCPFINLMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKBCPFINLMO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKBCPFINLMO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKBCPFINLMO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKBCPFINLMO_TICK_OFFSET))(this, a1);
		}

	};
