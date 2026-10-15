#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class InfiniteWaveSkipTo; }
namespace RPG::GameCore { class TaskContext; }

#define NCJBGMECGGG_CTOR_OFFSET UNITYSDK_OFFSET(0xBB11AE0)
#define NCJBGMECGGG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB11B10)

	class NCJBGMECGGG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InfiniteWaveSkipTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InfiniteWaveSkipTo*))((::PBYTE)hIl2Cpp + NCJBGMECGGG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJBGMECGGG_ONTASKBEGIN_OFFSET))(this);
		}

	};
