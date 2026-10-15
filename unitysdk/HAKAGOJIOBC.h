#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StackRedirectSkillTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }

#define HAKAGOJIOBC_BCKFENGGOCF_OFFSET UNITYSDK_OFFSET(0x15B81B80)
#define HAKAGOJIOBC_CTOR_OFFSET UNITYSDK_OFFSET(0x15B817A0)
#define HAKAGOJIOBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B81840)
#define HAKAGOJIOBC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B81910)

	class HAKAGOJIOBC
	{
	public:
		::KFELGAIGHAP* LKDIMCCENOI; // 0x28
		::System::Action* NOEAGBGOOMO; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackRedirectSkillTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackRedirectSkillTarget*))((::PBYTE)hIl2Cpp + HAKAGOJIOBC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKAGOJIOBC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKAGOJIOBC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void BCKFENGGOCF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HAKAGOJIOBC_BCKFENGGOCF_OFFSET))(this, a1, a2);
		}

	};
