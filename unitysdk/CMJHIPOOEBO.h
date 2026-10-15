#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerLittleGameCustomEvent; }

#define CMJHIPOOEBO_CTOR_OFFSET UNITYSDK_OFFSET(0xDA38D00)
#define CMJHIPOOEBO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA38D30)

inline static constexpr unsigned int CMJHIPOOEBO_TypeDefinitionIndex = 52964;

	class CMJHIPOOEBO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerLittleGameCustomEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + CMJHIPOOEBO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJHIPOOEBO_ONTASKBEGIN_OFFSET))(this);
		}

	};
