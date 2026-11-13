#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_RtSelectSkill; }
namespace RPG::GameCore { class TaskContext; }

#define PAGFFCJNFAF_CTOR_OFFSET UNITYSDK_OFFSET(0x18AD9410)
#define PAGFFCJNFAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18AD9440)
#define PAGFFCJNFAF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18AD97A0)

inline static constexpr unsigned int PAGFFCJNFAF_TypeDefinitionIndex = 55311;

	class PAGFFCJNFAF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_RtSelectSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_RtSelectSkill*))((::PBYTE)hIl2Cpp + PAGFFCJNFAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGFFCJNFAF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGFFCJNFAF_ONTASKRESET_OFFSET))(this);
		}

	};
