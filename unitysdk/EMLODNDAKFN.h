#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnterHipplenGame; }
namespace RPG::GameCore { class TaskContext; }

#define EMLODNDAKFN_CTOR_OFFSET UNITYSDK_OFFSET(0x15552800)
#define EMLODNDAKFN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15552830)

	class EMLODNDAKFN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterHipplenGame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterHipplenGame*))((::PBYTE)hIl2Cpp + EMLODNDAKFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLODNDAKFN_ONTASKBEGIN_OFFSET))(this);
		}

	};
