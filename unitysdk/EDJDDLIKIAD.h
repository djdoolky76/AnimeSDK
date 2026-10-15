#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RotateRubikCube; }
namespace RPG::GameCore { class TaskContext; }

#define EDJDDLIKIAD_CTOR_OFFSET UNITYSDK_OFFSET(0x133214A0)
#define EDJDDLIKIAD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x133214D0)

	class EDJDDLIKIAD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RotateRubikCube* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RotateRubikCube*))((::PBYTE)hIl2Cpp + EDJDDLIKIAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDDLIKIAD_ONTASKBEGIN_OFFSET))(this);
		}

	};
