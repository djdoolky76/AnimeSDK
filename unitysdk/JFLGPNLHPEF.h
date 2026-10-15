#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPartnerAnimSync; }

#define JFLGPNLHPEF_CTOR_OFFSET UNITYSDK_OFFSET(0x166561B0)
#define JFLGPNLHPEF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x166561E0)

inline static constexpr unsigned int JFLGPNLHPEF_TypeDefinitionIndex = 55762;

	class JFLGPNLHPEF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPartnerAnimSync* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPartnerAnimSync*))((::PBYTE)hIl2Cpp + JFLGPNLHPEF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLGPNLHPEF_ONTASKBEGIN_OFFSET))(this);
		}

	};
