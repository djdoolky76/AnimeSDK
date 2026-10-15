#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HipplenGameTriggerOpertation; }
namespace RPG::GameCore { class TaskContext; }

#define OHNIJOLKFMO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE6DA40)
#define OHNIJOLKFMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE6DA70)

inline static constexpr unsigned int OHNIJOLKFMO_TypeDefinitionIndex = 52275;

	class OHNIJOLKFMO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenGameTriggerOpertation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenGameTriggerOpertation*))((::PBYTE)hIl2Cpp + OHNIJOLKFMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHNIJOLKFMO_ONTASKBEGIN_OFFSET))(this);
		}

	};
