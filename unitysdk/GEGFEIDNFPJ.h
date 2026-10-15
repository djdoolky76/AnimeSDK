#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockOrthographicReset; }
namespace RPG::GameCore { class TaskContext; }

#define GEGFEIDNFPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x159D53E0)
#define GEGFEIDNFPJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159D5410)

	class GEGFEIDNFPJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockOrthographicReset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockOrthographicReset*))((::PBYTE)hIl2Cpp + GEGFEIDNFPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGFEIDNFPJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
