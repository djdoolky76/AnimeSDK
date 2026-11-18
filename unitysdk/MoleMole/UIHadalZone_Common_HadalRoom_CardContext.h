#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CALIGLPABNP;
namespace System { class Action; }

#define MOLEMOLE_UIHADALZONE_COMMON_HADALROOM_CARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x175A8EA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_HadalRoom_CardContext_TypeDefinitionIndex = 50975;

	class UIHadalZone_Common_HadalRoom_CardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* clickCallback; // 0x28
		::CALIGLPABNP* monsterConfig; // 0x30
		::System::Int32 cardSelectIndex; // 0x38
		::System::Boolean hideMonsterLevel; // 0x3C
		::System::Boolean unknownMonsterFlag; // 0x3D
		::System::Byte _padding0[0x2];
		::System::Int32 monsterLevel; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_HADALROOM_CARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
