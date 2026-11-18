#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOJCBOPABKB.h"
#include "unitysdk/CBJMEIMMCDG.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/OPPKNDHKKHN.h"

class BKGKJNHLCKC;

#define MOLEMOLE_LEVELUPDETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16262380)

namespace MoleMole
{
	inline static constexpr unsigned int LevelUpDetailContext_TypeDefinitionIndex = 50880;

	class LevelUpDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BKGKJNHLCKC* battleBuddyData; // 0x28
		::OPPKNDHKKHN skillViewMode; // 0x30
		::System::UInt32 weaponUid; // 0x40
		::AOJCBOPABKB worldLevelPopupKind; // 0x44
		::System::Int32 worldLevelPopupGroupId; // 0x48
		::System::Int32 avatarId; // 0x4C
		::CBJMEIMMCDG levelUpType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELUPDETAILCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
