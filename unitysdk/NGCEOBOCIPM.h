#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsTurnOwnerEntity; }
namespace RPG::GameCore { class TaskContext; }

#define NGCEOBOCIPM_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA2220)
#define NGCEOBOCIPM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBBA2250)

	class NGCEOBOCIPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTurnOwnerEntity*))((::PBYTE)hIl2Cpp + NGCEOBOCIPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCEOBOCIPM_EVALUATE_OFFSET))(this);
		}

	};
