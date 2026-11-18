#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_EOUSGAMESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14654FC0)
#define MOLEMOLE_EOUSGAMESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14654D60)
#define MOLEMOLE_EOUSGAMESUBSYSTEM_SETHACKSKILLACTIVE_OFFSET UNITYSDK_OFFSET(0x14654E30)
#define MOLEMOLE_EOUSGAMESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14655010)
#define MOLEMOLE_EOUSGAMESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14655030)
#define MOLEMOLE_EOUSGAMESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x146550C0)

namespace MoleMole
{
	inline static constexpr unsigned int EousGameSubSystem_TypeDefinitionIndex = 91125;

	class EousGameSubSystem
	{
	public:
		// static const ::System::String* HackSkillTag; // 0x0
		// static const ::System::Int32 HackSkillPriority = 0x63; // 0x0
		::System::Boolean _hackSkillActive; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EOUSGAMESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EOUSGAMESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EOUSGAMESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetHackSkillActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EOUSGAMESUBSYSTEM_SETHACKSKILLACTIVE_OFFSET))(this, active);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EOUSGAMESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EOUSGAMESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
