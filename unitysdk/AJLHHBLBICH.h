#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveSelfModifier; }
namespace RPG::GameCore { class TaskContext; }

#define AJLHHBLBICH_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC53F0)
#define AJLHHBLBICH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CC5420)

	class AJLHHBLBICH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveSelfModifier* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveSelfModifier*))((::PBYTE)hIl2Cpp + AJLHHBLBICH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLHHBLBICH_ONTASKBEGIN_OFFSET))(this);
		}

	};
