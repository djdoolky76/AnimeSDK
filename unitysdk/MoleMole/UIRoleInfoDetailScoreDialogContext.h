#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/OOHBEPCMHMC.h"

class BPHGNMNLLHF;

#define MOLEMOLE_UIROLEINFODETAILSCOREDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x164A10F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoDetailScoreDialogContext_TypeDefinitionIndex = 66284;

	class UIRoleInfoDetailScoreDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BPHGNMNLLHF* avatarItemData; // 0x28
		::OOHBEPCMHMC equipScore; // 0x30
		::OOHBEPCMHMC weaponScore; // 0x34
		::System::Int32 index; // 0x38
		::OOHBEPCMHMC levelScore; // 0x3C
		::OOHBEPCMHMC skillScore; // 0x40
		::OOHBEPCMHMC totalScore; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODETAILSCOREDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
