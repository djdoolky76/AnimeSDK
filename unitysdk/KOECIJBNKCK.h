#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsDamageLuckCritical; }
namespace RPG::GameCore { class TaskContext; }

#define KOECIJBNKCK_CTOR_OFFSET UNITYSDK_OFFSET(0xB592EC0)
#define KOECIJBNKCK_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB592EF0)

	class KOECIJBNKCK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsDamageLuckCritical* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsDamageLuckCritical*))((::PBYTE)hIl2Cpp + KOECIJBNKCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOECIJBNKCK_EVALUATE_OFFSET))(this);
		}

	};
