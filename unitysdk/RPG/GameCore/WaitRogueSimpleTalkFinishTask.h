#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRogueSimpleTalkFinish; }
namespace System { class Object; }

#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_CTOR_OFFSET UNITYSDK_OFFSET(0xE86DBE0)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE86DBF0)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xE86DD40)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_ONSKIP_OFFSET UNITYSDK_OFFSET(0xE86E020)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE86DD50)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE86DF00)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xE86E1E0)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_TICK_OFFSET UNITYSDK_OFFSET(0xE86DFC0)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK__ONSIMPLETALKFINISH_OFFSET UNITYSDK_OFFSET(0xE86E0E0)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK__REMOVENOTIFY_OFFSET UNITYSDK_OFFSET(0xE86DCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueSimpleTalkFinishTask_TypeDefinitionIndex = 58921;

	class WaitRogueSimpleTalkFinishTask : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::GELIALJDFBL* _NextTask; // 0x20
		::RPG::GameCore::WaitRogueSimpleTalkFinish* _ConfigRef; // 0x28
		::System::Boolean _NotifyFlag; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRogueSimpleTalkFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRogueSimpleTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_ONSKIP_OFFSET))(this);
		}

		::System::Void _RemoveNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK__REMOVENOTIFY_OFFSET))(this);
		}

		::System::Void _OnSimpleTalkFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK__ONSIMPLETALKFINISH_OFFSET))(this, a1);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISHTASK_SETNEXTTASK_OFFSET))(this, a1);
		}

	};
}
