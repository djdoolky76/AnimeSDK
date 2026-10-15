#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureExtraMPCost; }
namespace RPG::GameCore { class TaskContext; }

#define HEGKOBPAEMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15C50DC0)
#define HEGKOBPAEMJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C50DF0)

	class HEGKOBPAEMJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureExtraMPCost* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureExtraMPCost*))((::PBYTE)hIl2Cpp + HEGKOBPAEMJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGKOBPAEMJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
