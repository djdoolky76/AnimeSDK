#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/VOPerformSubSystem_NpcNameShowInfo.h"

#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS71_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1058C8A0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS71_0___OPERATENPCENTITYNAMEBYENTITY_B__1_OFFSET UNITYSDK_OFFSET(0x1058C8B0)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem___c__DisplayClass71_0_TypeDefinitionIndex = 76192;

	class VOPerformSubSystem___c__DisplayClass71_0 : public ::System::Object
	{
	public:
		::MoleMole::EntityHandle targetEntity; // 0x10
		::System::Boolean isShow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS71_0__CTOR_OFFSET))(this);
		}

		::System::Void __OperateNpcEntityNameByEntity_b__1(::MoleMole::VOPerformSubSystem_NpcNameShowInfo& cur)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::VOPerformSubSystem_NpcNameShowInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS71_0___OPERATENPCENTITYNAMEBYENTITY_B__1_OFFSET))(this, cur);
		}
	};
}
