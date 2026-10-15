#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetCharacterVisibleInViewMode; }
namespace RPG::GameCore { class TaskContext; }

#define HCOEOFKCACG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C2AEE0)
#define HCOEOFKCACG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C2AF10)

	class HCOEOFKCACG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterVisibleInViewMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterVisibleInViewMode*))((::PBYTE)hIl2Cpp + HCOEOFKCACG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOEOFKCACG_ONTASKBEGIN_OFFSET))(this);
		}

	};
