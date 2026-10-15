#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetMunicipalStreamCenter; }
namespace RPG::GameCore { class TaskContext; }

#define EKCLAJJIKHE_CTOR_OFFSET UNITYSDK_OFFSET(0x154FEE60)
#define EKCLAJJIKHE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154FEE90)

	class EKCLAJJIKHE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMunicipalStreamCenter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMunicipalStreamCenter*))((::PBYTE)hIl2Cpp + EKCLAJJIKHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCLAJJIKHE_ONTASKBEGIN_OFFSET))(this);
		}

	};
