#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtSkillAllowBeHit; }
namespace RPG::GameCore { class TaskContext; }

#define KKAHBDELOFB_CTOR_OFFSET UNITYSDK_OFFSET(0x17336B80)
#define KKAHBDELOFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17336BB0)

inline static constexpr unsigned int KKAHBDELOFB_TypeDefinitionIndex = 55096;

	class KKAHBDELOFB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSkillAllowBeHit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSkillAllowBeHit*))((::PBYTE)hIl2Cpp + KKAHBDELOFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAHBDELOFB_ONTASKBEGIN_OFFSET))(this);
		}

	};
