#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropPredicateWithEntity; }
namespace RPG::GameCore { class TaskContext; }

#define LIJEEDGCBNK_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D4170)
#define LIJEEDGCBNK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6D41A0)

	class LIJEEDGCBNK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPredicateWithEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPredicateWithEntity*))((::PBYTE)hIl2Cpp + LIJEEDGCBNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJEEDGCBNK_ONTASKBEGIN_OFFSET))(this);
		}

	};
