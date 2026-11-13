#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtSkillPauseTarget; }
namespace RPG::GameCore { class TaskContext; }

#define AHFELBPOOAA_CTOR_OFFSET UNITYSDK_OFFSET(0x19B20790)
#define AHFELBPOOAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19B207C0)

inline static constexpr unsigned int AHFELBPOOAA_TypeDefinitionIndex = 55098;

	class AHFELBPOOAA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSkillPauseTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSkillPauseTarget*))((::PBYTE)hIl2Cpp + AHFELBPOOAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFELBPOOAA_ONTASKBEGIN_OFFSET))(this);
		}

	};
