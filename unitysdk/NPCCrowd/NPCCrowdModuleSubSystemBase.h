#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_CALLINIT_OFFSET UNITYSDK_OFFSET(0x15FA6240)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_CALLONDESTROY_OFFSET UNITYSDK_OFFSET(0x15FA6520)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15FA0EA0)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_INIT_OFFSET UNITYSDK_OFFSET(0x15FA1550)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15FA6400)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15FA6580)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15FA6460)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x15FA64C0)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0x15FA6340)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15FA63A0)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x15FA62E0)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x15FA62A0)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x15FA1010)
#define NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA0E20)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleSubSystemBase_TypeDefinitionIndex = 59633;

	class NPCCrowdModuleSubSystemBase : public ::System::Object
	{
	public:
		::Nap::NapECS::EcsFilter* filter; // 0x10
		::System::Boolean _initialized; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE__CTOR_OFFSET))(this);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_CREATEFILTERS_OFFSET))(this, world);
		}

		::System::Void CallInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_CALLINIT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_INIT_OFFSET))(this);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_SHOULDTICK_OFFSET))(this);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_POSTUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PreLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_PRELATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_POSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostSimulationUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_POSTSIMULATIONUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void CallOnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_CALLONDESTROY_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULESUBSYSTEMBASE_ONDESTROY_OFFSET))(this);
		}
	};
}
