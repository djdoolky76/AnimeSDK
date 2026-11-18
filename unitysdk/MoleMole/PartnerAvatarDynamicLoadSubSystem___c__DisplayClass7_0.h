#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14BB6AD0)

namespace MoleMole
{
	inline static constexpr unsigned int PartnerAvatarDynamicLoadSubSystem___c__DisplayClass7_0_TypeDefinitionIndex = 68990;

	class PartnerAvatarDynamicLoadSubSystem___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action* onComplete; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}
	};
}
