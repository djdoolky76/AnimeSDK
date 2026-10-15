#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetFloorCustomFloatV2; }
namespace RPG::GameCore { class TaskContext; }

#define DJLDEMGBACG_CTOR_OFFSET UNITYSDK_OFFSET(0xF2399C0)
#define DJLDEMGBACG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF2399F0)

	class DJLDEMGBACG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFloorCustomFloatV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFloorCustomFloatV2*))((::PBYTE)hIl2Cpp + DJLDEMGBACG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLDEMGBACG_ONTASKBEGIN_OFFSET))(this);
		}

	};
