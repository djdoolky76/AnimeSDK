#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EPAOAGKDGHO;
class NLHKPEDIGOI;

#define MOLEMOLE_ACTIVITYPIGRECOMMANDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1274F6C0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityPigRecommandContext_TypeDefinitionIndex = 63734;

	class ActivityPigRecommandContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EPAOAGKDGHO* LoginInfoData; // 0x28
		::NLHKPEDIGOI* TabData; // 0x30
		::EPAOAGKDGHO* ShopData; // 0x38

		::System::Void _ctor(::NLHKPEDIGOI* tabData, ::EPAOAGKDGHO* loginInfoData)
		{
			return ((::System::Void(*)(::PVOID, ::NLHKPEDIGOI*, ::EPAOAGKDGHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYPIGRECOMMANDCONTEXT__CTOR_OFFSET))(this, tabData, loginInfoData);
		}
	};
}
