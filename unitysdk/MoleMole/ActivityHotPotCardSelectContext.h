#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FADPHIBJJBL.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ACTIVITYHOTPOTCARDSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x131B51B0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityHotPotCardSelectContext_TypeDefinitionIndex = 48684;

	class ActivityHotPotCardSelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 PoolID; // 0x28
		::FADPHIBJJBL Source; // 0x2C
		::System::Int32 DialogType; // 0x30
		::System::Int32 Times; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOTPOTCARDSELECTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
