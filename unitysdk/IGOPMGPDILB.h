#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerModelShake; }

#define IGOPMGPDILB_CTOR_OFFSET UNITYSDK_OFFSET(0x16409340)
#define IGOPMGPDILB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16409370)

inline static constexpr unsigned int IGOPMGPDILB_TypeDefinitionIndex = 55745;

	class IGOPMGPDILB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerModelShake* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerModelShake*))((::PBYTE)hIl2Cpp + IGOPMGPDILB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOPMGPDILB_ONTASKBEGIN_OFFSET))(this);
		}

	};
