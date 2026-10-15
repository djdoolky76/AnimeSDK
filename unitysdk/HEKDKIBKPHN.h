#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvPauseTickValue; }
namespace RPG::GameCore { class TaskContext; }

#define HEKDKIBKPHN_CTOR_OFFSET UNITYSDK_OFFSET(0x15C57FA0)
#define HEKDKIBKPHN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C57FD0)
#define HEKDKIBKPHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C58050)
#define HEKDKIBKPHN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C58010)

inline static constexpr unsigned int HEKDKIBKPHN_TypeDefinitionIndex = 57882;

	class HEKDKIBKPHN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPauseTickValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPauseTickValue*))((::PBYTE)hIl2Cpp + HEKDKIBKPHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKDKIBKPHN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKDKIBKPHN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKDKIBKPHN_ONTASKBEGIN_OFFSET))(this);
		}

	};
