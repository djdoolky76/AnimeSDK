#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOKABAGIKFG.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerSound; }
namespace System { class Action; }
namespace System { class String; }

#define HFKELLCNMMF_BBPDBBMOBHK_OFFSET UNITYSDK_OFFSET(0x15C879A0)
#define HFKELLCNMMF_BPLJKICILOP_OFFSET UNITYSDK_OFFSET(0x15C87ED0)
#define HFKELLCNMMF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C877C0)
#define HFKELLCNMMF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C877F0)
#define HFKELLCNMMF_KALGMIMLDBA_OFFSET UNITYSDK_OFFSET(0x15C87A20)
#define HFKELLCNMMF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C87830)

	class HFKELLCNMMF
	{
	public:
		::RPG::GameCore::GameEntity* ONIACPBDNMH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerSound* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerSound*))((::PBYTE)hIl2Cpp + HFKELLCNMMF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKELLCNMMF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKELLCNMMF_ONTASKBEGIN_OFFSET))(this);
		}

		static ::LOKABAGIKFG BBPDBBMOBHK(::RPG::GameCore::TriggerSound* a1)
		{
			return ((::LOKABAGIKFG(*)(::RPG::GameCore::TriggerSound*))((::PBYTE)hIl2Cpp + HFKELLCNMMF_BBPDBBMOBHK_OFFSET))(a1);
		}

		static ::System::Void KALGMIMLDBA(::LOKABAGIKFG a1, ::System::String* a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Void(*)(::LOKABAGIKFG, ::System::String*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HFKELLCNMMF_KALGMIMLDBA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean BPLJKICILOP(::RPG::GameCore::TriggerSound* a1, ::System::String* a2, ::RPG::GameCore::GameEntity* a3, ::System::Action* a4)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TriggerSound*, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + HFKELLCNMMF_BPLJKICILOP_OFFSET))(a1, a2, a3, a4);
		}

	};
