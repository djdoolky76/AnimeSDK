#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTrashSummonHUDState; }
namespace RPG::GameCore { class TaskContext; }

#define BJCGAFGGMDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD56A0)
#define BJCGAFGGMDC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BAD56D0)

inline static constexpr unsigned int BJCGAFGGMDC_TypeDefinitionIndex = 48640;

	class BJCGAFGGMDC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTrashSummonHUDState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTrashSummonHUDState*))((::PBYTE)hIl2Cpp + BJCGAFGGMDC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCGAFGGMDC_ONTASKBEGIN_OFFSET))(this);
		}

	};
