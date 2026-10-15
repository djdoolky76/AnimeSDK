#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtGridMoveToTarget; }
namespace RPG::GameCore { class TaskContext; }

#define FFOEMMBPAOO_CTOR_OFFSET UNITYSDK_OFFSET(0x15741AC0)
#define FFOEMMBPAOO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15741AF0)

inline static constexpr unsigned int FFOEMMBPAOO_TypeDefinitionIndex = 54176;

	class FFOEMMBPAOO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtGridMoveToTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtGridMoveToTarget*))((::PBYTE)hIl2Cpp + FFOEMMBPAOO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOEMMBPAOO_ONTASKBEGIN_OFFSET))(this);
		}

	};
