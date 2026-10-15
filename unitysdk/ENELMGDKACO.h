#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByEntityExist; }
namespace RPG::GameCore { class TaskContext; }

#define ENELMGDKACO_CTOR_OFFSET UNITYSDK_OFFSET(0x155A8EA0)
#define ENELMGDKACO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x155A8ED0)

	class ENELMGDKACO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByEntityExist* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByEntityExist*))((::PBYTE)hIl2Cpp + ENELMGDKACO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENELMGDKACO_EVALUATE_OFFSET))(this);
		}

	};
