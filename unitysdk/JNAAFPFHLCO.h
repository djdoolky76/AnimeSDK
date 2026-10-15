#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsBodyPartOwner; }
namespace RPG::GameCore { class TaskContext; }

#define JNAAFPFHLCO_CTOR_OFFSET UNITYSDK_OFFSET(0xB274400)
#define JNAAFPFHLCO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB274430)

	class JNAAFPFHLCO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsBodyPartOwner* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsBodyPartOwner*))((::PBYTE)hIl2Cpp + JNAAFPFHLCO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAAFPFHLCO_EVALUATE_OFFSET))(this);
		}

	};
