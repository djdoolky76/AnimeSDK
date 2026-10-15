#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HideEntity; }
namespace RPG::GameCore { class TaskContext; }

#define OHGIBLLMMLD_CTOR_OFFSET UNITYSDK_OFFSET(0xBE69E40)
#define OHGIBLLMMLD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE69E70)

	class OHGIBLLMMLD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideEntity*))((::PBYTE)hIl2Cpp + OHGIBLLMMLD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGIBLLMMLD_ONTASKBEGIN_OFFSET))(this);
		}

	};
