#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvLockSpecialTarget; }
namespace RPG::GameCore { class TaskContext; }

#define GGGOLDENGIG_CTOR_OFFSET UNITYSDK_OFFSET(0x159F8C00)
#define GGGOLDENGIG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159F8C30)

inline static constexpr unsigned int GGGOLDENGIG_TypeDefinitionIndex = 52391;

	class GGGOLDENGIG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvLockSpecialTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvLockSpecialTarget*))((::PBYTE)hIl2Cpp + GGGOLDENGIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGOLDENGIG_ONTASKBEGIN_OFFSET))(this);
		}

	};
