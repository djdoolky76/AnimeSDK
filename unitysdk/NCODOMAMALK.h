#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetActionBarItemAnimatorTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define NCODOMAMALK_CTOR_OFFSET UNITYSDK_OFFSET(0xBB1C900)
#define NCODOMAMALK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB1C930)

	class NCODOMAMALK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetActionBarItemAnimatorTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetActionBarItemAnimatorTrigger*))((::PBYTE)hIl2Cpp + NCODOMAMALK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCODOMAMALK_ONTASKBEGIN_OFFSET))(this);
		}

	};
