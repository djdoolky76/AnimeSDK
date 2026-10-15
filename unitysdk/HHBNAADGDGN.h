#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtSkillFinish; }
namespace RPG::GameCore { class TaskContext; }

#define HHBNAADGDGN_CTOR_OFFSET UNITYSDK_OFFSET(0x15CB4590)
#define HHBNAADGDGN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CB45C0)

inline static constexpr unsigned int HHBNAADGDGN_TypeDefinitionIndex = 53933;

	class HHBNAADGDGN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSkillFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSkillFinish*))((::PBYTE)hIl2Cpp + HHBNAADGDGN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHBNAADGDGN_ONTASKBEGIN_OFFSET))(this);
		}

	};
