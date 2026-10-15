#pragma once
#include "unitysdk/unitysdk.h"
class GOLCDANDHHM;
namespace RPG::GameCore { class TaskContext; }

#define COAKHOLMBAB_CTOR_OFFSET UNITYSDK_OFFSET(0xDCAA860)
#define COAKHOLMBAB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCAA890)

inline static constexpr unsigned int COAKHOLMBAB_TypeDefinitionIndex = 52908;

	class COAKHOLMBAB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GOLCDANDHHM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GOLCDANDHHM*))((::PBYTE)hIl2Cpp + COAKHOLMBAB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKHOLMBAB_ONTASKBEGIN_OFFSET))(this);
		}

	};
