#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroTeleportTiming; }

#define EEEDJDOGELN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A312880)
#define EEEDJDOGELN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A3128B0)

inline static constexpr unsigned int EEEDJDOGELN_TypeDefinitionIndex = 60239;

	class EEEDJDOGELN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroTeleportTiming* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroTeleportTiming*))((::PBYTE)hIl2Cpp + EEEDJDOGELN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEEDJDOGELN_ONTASKBEGIN_OFFSET))(this);
		}

	};
