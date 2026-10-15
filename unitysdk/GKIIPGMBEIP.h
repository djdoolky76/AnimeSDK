#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class LBKMCGDMNJO;
class LOJIKMHLCBL;
class OINNEGOFKAA;
namespace RPG::AvatarSystem { class IAvatar; }

#define GKIIPGMBEIP_CTOR_OFFSET UNITYSDK_OFFSET(0x15A98B80)
#define GKIIPGMBEIP_DHOCFJDCLLN_OFFSET UNITYSDK_OFFSET(0x15A98C70)

	class GKIIPGMBEIP : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x10
		::ACINIALAFDE FMDMKNPNBAM; // 0x18
		::System::UInt32 ACCJKGEKHKP; // 0x1C
		::System::Void _ctor(::LBKMCGDMNJO* a1, ::OINNEGOFKAA* a2, ::LOJIKMHLCBL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LBKMCGDMNJO*, ::OINNEGOFKAA*, ::LOJIKMHLCBL*))((::PBYTE)hIl2Cpp + GKIIPGMBEIP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::AvatarSystem::IAvatar* DHOCFJDCLLN()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIIPGMBEIP_DHOCFJDCLLN_OFFSET))(this);
		}

	};
