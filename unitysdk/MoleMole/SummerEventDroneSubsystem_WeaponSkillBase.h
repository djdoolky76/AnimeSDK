#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SummerEventDroneSubsystem; }
namespace MoleMole { class SummerEventWeaponSkillParamBase; }
namespace System { class String; }

#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x13F14AC0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_CORE_OFFSET UNITYSDK_OFFSET(0x13F14A50)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_GETDURATION_OFFSET UNITYSDK_OFFSET(0x13F14C40)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_GETTIMER_OFFSET UNITYSDK_OFFSET(0x13F14C90)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_INIT_OFFSET UNITYSDK_OFFSET(0x13F14940)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_ISINSTANTSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x13F14B20)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_ISTIMEUP_OFFSET UNITYSDK_OFFSET(0x13F14B60)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_ONADD_OFFSET UNITYSDK_OFFSET(0x13F149D0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x13F14BC0)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x13F14A10)
#define MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x13F14CE0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventDroneSubsystem_WeaponSkillBase_TypeDefinitionIndex = 46792;

	class SummerEventDroneSubsystem_WeaponSkillBase : public ::System::Object
	{
	public:
		::System::String* weaponConfigKey; // 0x10
		::System::String* endSkillEventKey; // 0x18
		::MoleMole::SummerEventDroneSubsystem* subSystemRef; // 0x20
		::System::Single timer; // 0x28
		::System::Single duration; // 0x2C
		::System::Boolean isFinsih; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::SummerEventDroneSubsystem* logicSySubsystem, ::MoleMole::SummerEventWeaponSkillParamBase* skillParam, ::System::String* weaponKey)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SummerEventDroneSubsystem*, ::MoleMole::SummerEventWeaponSkillParamBase*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_INIT_OFFSET))(this, logicSySubsystem, skillParam, weaponKey);
		}

		::System::Void OnAdd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_ONADD_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_ONREMOVED_OFFSET))(this);
		}

		::System::Void Core(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_CORE_OFFSET))(this, deltaTime);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_CLEANUP_OFFSET))(this);
		}

		::System::Boolean IsInstantSkillType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_ISINSTANTSKILLTYPE_OFFSET))(this);
		}

		::System::Boolean IsTimeUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_ISTIMEUP_OFFSET))(this);
		}

		::System::Void OnEvent(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_ONEVENT_OFFSET))(this, eventName);
		}

		::System::Single GetDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_GETDURATION_OFFSET))(this);
		}

		::System::Single GetTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTDRONESUBSYSTEM_WEAPONSKILLBASE_GETTIMER_OFFSET))(this);
		}
	};
}
