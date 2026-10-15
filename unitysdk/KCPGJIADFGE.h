#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerGroupEvent; }

#define KCPGJIADFGE_CTOR_OFFSET UNITYSDK_OFFSET(0xB346130)
#define KCPGJIADFGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB346160)

inline static constexpr unsigned int KCPGJIADFGE_TypeDefinitionIndex = 52529;

	class KCPGJIADFGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerGroupEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerGroupEvent*))((::PBYTE)hIl2Cpp + KCPGJIADFGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCPGJIADFGE_ONTASKBEGIN_OFFSET))(this);
		}

	};
