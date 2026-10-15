#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindGlobalUnselectable; }

#define CJPIMJMIGDC_CTOR_OFFSET UNITYSDK_OFFSET(0xD74ACC0)
#define CJPIMJMIGDC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD74ACF0)

inline static constexpr unsigned int CJPIMJMIGDC_TypeDefinitionIndex = 53400;

	class CJPIMJMIGDC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindGlobalUnselectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindGlobalUnselectable*))((::PBYTE)hIl2Cpp + CJPIMJMIGDC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPIMJMIGDC_ONTASKBEGIN_OFFSET))(this);
		}

	};
