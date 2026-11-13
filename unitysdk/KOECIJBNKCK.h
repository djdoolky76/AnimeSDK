#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsDamageLuckCritical; }
namespace RPG::GameCore { class TaskContext; }

#define KOECIJBNKCK_CTOR_OFFSET UNITYSDK_OFFSET(0x190FB430)
#define KOECIJBNKCK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x190FB460)

inline static constexpr unsigned int KOECIJBNKCK_TypeDefinitionIndex = 55814;

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
