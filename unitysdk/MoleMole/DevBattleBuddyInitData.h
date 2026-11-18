#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DevBuddyInitData.h"

#define MOLEMOLE_DEVBATTLEBUDDYINITDATA_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x19B361F0)
#define MOLEMOLE_DEVBATTLEBUDDYINITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B36200)

namespace MoleMole
{
	inline static constexpr unsigned int DevBattleBuddyInitData_TypeDefinitionIndex = 93251;

	class DevBattleBuddyInitData : public ::MoleMole::DevBuddyInitData
	{
	public:
		::System::Boolean CreateAsAvatar; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 BuddyTemplateID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVBATTLEBUDDYINITDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_TemplateID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVBATTLEBUDDYINITDATA_GET_TEMPLATEID_OFFSET))(this);
		}
	};
}
