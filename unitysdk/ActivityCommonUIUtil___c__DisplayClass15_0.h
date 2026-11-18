#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANOKJGCCGAO;
class CALIGLPABNP;

#define ACTIVITYCOMMONUIUTIL___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x143BE2B0)
#define ACTIVITYCOMMONUIUTIL___C__DISPLAYCLASS15_0__GETGROUPMONSTERCONFIGS_B__0_OFFSET UNITYSDK_OFFSET(0x143BE2C0)

inline static constexpr unsigned int ActivityCommonUIUtil___c__DisplayClass15_0_TypeDefinitionIndex = 62554;

class ActivityCommonUIUtil___c__DisplayClass15_0 : public ::System::Object
{
public:
	::ANOKJGCCGAO* member; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetGroupMonsterConfigs_b__0(::CALIGLPABNP* match)
	{
		return ((::System::Boolean(*)(::PVOID, ::CALIGLPABNP*))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL___C__DISPLAYCLASS15_0__GETGROUPMONSTERCONFIGS_B__0_OFFSET))(this, match);
	}
};
