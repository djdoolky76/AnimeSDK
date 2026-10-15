#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropCurveMoveRecover; }
namespace RPG::GameCore { class TaskContext; }

#define LADEKGAKNMN_CTOR_OFFSET UNITYSDK_OFFSET(0xB5DB150)
#define LADEKGAKNMN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5DB180)

	class LADEKGAKNMN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveMoveRecover* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveMoveRecover*))((::PBYTE)hIl2Cpp + LADEKGAKNMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LADEKGAKNMN_ONTASKBEGIN_OFFSET))(this);
		}

	};
