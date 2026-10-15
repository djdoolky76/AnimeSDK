#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PlayMonsterHPBarTween; }
namespace RPG::GameCore { class TaskContext; }

#define PFMAHFAJHLC_CTOR_OFFSET UNITYSDK_OFFSET(0xC217810)
#define PFMAHFAJHLC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC217840)

	class PFMAHFAJHLC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMonsterHPBarTween* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMonsterHPBarTween*))((::PBYTE)hIl2Cpp + PFMAHFAJHLC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMAHFAJHLC_ONTASKBEGIN_OFFSET))(this);
		}

	};
