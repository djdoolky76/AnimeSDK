#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_COVERTAG_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA5F0D0)
#define MOLEMOLE_COVERTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA5F650)
#define MOLEMOLE_COVERTAG___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA5F6E0)

namespace MoleMole
{
	inline static constexpr unsigned int CoverTag_TypeDefinitionIndex = 51848;

	class CoverTag : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::String* AdjustTagName; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::System::String* TagName; // 0x68
		::MoleMole::AITargetType TargetType; // 0x70
		::System::Single Value; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COVERTAG__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COVERTAG_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COVERTAG___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
