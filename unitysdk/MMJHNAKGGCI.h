#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByBehaviorFlagCount; }
namespace RPG::GameCore { class TaskContext; }

#define MMJHNAKGGCI_CTOR_OFFSET UNITYSDK_OFFSET(0xB9CDF60)
#define MMJHNAKGGCI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9CE040)

inline static constexpr unsigned int MMJHNAKGGCI_TypeDefinitionIndex = 55414;

	class MMJHNAKGGCI
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBehaviorFlagCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBehaviorFlagCount*))((::PBYTE)hIl2Cpp + MMJHNAKGGCI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJHNAKGGCI_ONTASKBEGIN_OFFSET))(this);
		}

	};
