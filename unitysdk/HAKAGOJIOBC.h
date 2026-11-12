#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StackRedirectSkillTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define HAKAGOJIOBC_BCKFENGGOCF_OFFSET UNITYSDK_OFFSET(0x16B084F0)
#define HAKAGOJIOBC_CTOR_OFFSET UNITYSDK_OFFSET(0x16B08110)
#define HAKAGOJIOBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B081B0)
#define HAKAGOJIOBC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B08280)

inline static constexpr unsigned int HAKAGOJIOBC_TypeDefinitionIndex = 56846;

	class HAKAGOJIOBC
	{
	public:
		::System::Action_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>* NOEAGBGOOMO; // 0x28
		::KFELGAIGHAP* LKDIMCCENOI; // 0x30
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
