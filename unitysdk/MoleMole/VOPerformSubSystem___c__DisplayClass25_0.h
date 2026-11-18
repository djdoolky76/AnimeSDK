#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1671FC20)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS25_0__PLAYAVATARENTERSCENEPERFORM_B__0_OFFSET UNITYSDK_OFFSET(0x1671FC30)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem___c__DisplayClass25_0_TypeDefinitionIndex = 76203;

	class VOPerformSubSystem___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Action* finishAction; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAvatarEnterScenePerform_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS25_0__PLAYAVATARENTERSCENEPERFORM_B__0_OFFSET))(this);
		}
	};
}
