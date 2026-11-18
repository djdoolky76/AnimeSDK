#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JFLHGHFBNGJ;
namespace System { class Action; }

#define MOLEMOLE_UIGENERALACHIEVEMENTTIPSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x199B7B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralAchievementTipsContext_TypeDefinitionIndex = 76572;

	class UIGeneralAchievementTipsContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JFLHGHFBNGJ* AchievementData; // 0x28
		::System::Action* onClose; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACHIEVEMENTTIPSCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
