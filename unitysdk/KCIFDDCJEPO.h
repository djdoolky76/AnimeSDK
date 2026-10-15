#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvEndIsometric; }
namespace RPG::GameCore { class TaskContext; }

#define KCIFDDCJEPO_CTOR_OFFSET UNITYSDK_OFFSET(0xB3385E0)
#define KCIFDDCJEPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB338610)

	class KCIFDDCJEPO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEndIsometric* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEndIsometric*))((::PBYTE)hIl2Cpp + KCIFDDCJEPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIFDDCJEPO_ONTASKBEGIN_OFFSET))(this);
		}

	};
