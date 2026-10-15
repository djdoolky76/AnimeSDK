#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RegisterLittleGameSequences; }
namespace RPG::GameCore { class TaskContext; }

#define BIFGMPDPPLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A51E0)
#define BIFGMPDPPLJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4A5210)

	class BIFGMPDPPLJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RegisterLittleGameSequences* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RegisterLittleGameSequences*))((::PBYTE)hIl2Cpp + BIFGMPDPPLJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFGMPDPPLJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
