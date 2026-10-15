#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropSetupHitBoxGroup; }
namespace RPG::GameCore { class TaskContext; }

#define DDFGKAPAFJI_CTOR_OFFSET UNITYSDK_OFFSET(0xE261FE0)
#define DDFGKAPAFJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE262010)

	class DDFGKAPAFJI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetupHitBoxGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetupHitBoxGroup*))((::PBYTE)hIl2Cpp + DDFGKAPAFJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFGKAPAFJI_ONTASKBEGIN_OFFSET))(this);
		}

	};
