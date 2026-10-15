#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChenLingFesAbilityConfig; }
namespace RPG::GameCore { class TaskContext; }

#define AGIFDHGNHIP_CTOR_OFFSET UNITYSDK_OFFSET(0xCF2BCA0)
#define AGIFDHGNHIP_GET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xCF2BCB0)
#define AGIFDHGNHIP_SET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xCF2BCC0)

inline static constexpr unsigned int AGIFDHGNHIP_TypeDefinitionIndex = 77709;

	class AGIFDHGNHIP : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChenLingFesAbilityConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChenLingFesAbilityConfig*))((::PBYTE)hIl2Cpp + AGIFDHGNHIP_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TaskContext* get_TaskContext()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIFDHGNHIP_GET_TASKCONTEXT_OFFSET))(this);
		}

		::System::Void set_TaskContext(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AGIFDHGNHIP_SET_TASKCONTEXT_OFFSET))(this, a1);
		}

	};
