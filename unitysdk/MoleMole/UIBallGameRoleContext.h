#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJAKAMBLNJH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class AGAEFOGEGAB;

#define MOLEMOLE_UIBALLGAMEROLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1983EE40)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameRoleContext_TypeDefinitionIndex = 56724;

	class UIBallGameRoleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::AGAEFOGEGAB* levelData; // 0x28
		::IJAKAMBLNJH levelType; // 0x30
		::System::Boolean isFromArchive; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
