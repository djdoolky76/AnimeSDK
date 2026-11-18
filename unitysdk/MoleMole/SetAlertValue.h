#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class FLNIDONOPNI;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_SETALERTVALUE_ONRESET_OFFSET UNITYSDK_OFFSET(0x19CEA830)
#define MOLEMOLE_SETALERTVALUE_ONSTART_OFFSET UNITYSDK_OFFSET(0x19CEA630)
#define MOLEMOLE_SETALERTVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19CEA780)
#define MOLEMOLE_SETALERTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CEA880)
#define MOLEMOLE_SETALERTVALUE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x19CEA910)
#define MOLEMOLE_SETALERTVALUE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x19CEA9A0)
#define MOLEMOLE_SETALERTVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19CEAA30)

namespace MoleMole
{
	inline static constexpr unsigned int SetAlertValue_TypeDefinitionIndex = 57319;

	class SetAlertValue : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* TargetSharedValue; // 0x58
		::FLNIDONOPNI* _enterBattleComponent; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
