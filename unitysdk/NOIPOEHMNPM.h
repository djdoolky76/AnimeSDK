#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetInwardBubbleInfo; }
namespace RPG::GameCore { class TaskContext; }

#define NOIPOEHMNPM_CTOR_OFFSET UNITYSDK_OFFSET(0xBCEB330)
#define NOIPOEHMNPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCEB360)

inline static constexpr unsigned int NOIPOEHMNPM_TypeDefinitionIndex = 58549;

	class NOIPOEHMNPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetInwardBubbleInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetInwardBubbleInfo*))((::PBYTE)hIl2Cpp + NOIPOEHMNPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIPOEHMNPM_ONTASKBEGIN_OFFSET))(this);
		}

	};
