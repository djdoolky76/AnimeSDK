#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class PlanetFesAvatarMoveTo; }
namespace RPG::GameCore { class TaskContext; }

#define LLEFJIPDNNM_CTOR_OFFSET UNITYSDK_OFFSET(0xB764950)
#define LLEFJIPDNNM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB764980)

	class LLEFJIPDNNM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::PlanetFesAvatarMoveTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::PlanetFesAvatarMoveTo*))((::PBYTE)hIl2Cpp + LLEFJIPDNNM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLEFJIPDNNM_ONTASKBEGIN_OFFSET))(this);
		}

	};
