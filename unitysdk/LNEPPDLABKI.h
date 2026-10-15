#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NBHCDAEKHGJ;
namespace RPG::GameCore { class GameEntity; }

#define LNEPPDLABKI_FAFGAKLPDJA_OFFSET UNITYSDK_OFFSET(0x1B150)
#define LNEPPDLABKI_GBGALBKMCBN_OFFSET UNITYSDK_OFFSET(0x1B100)

	struct alignas(8) LNEPPDLABKI
	{
		::NBHCDAEKHGJ* HAFKKAFAJPL; // 0x10
		::RPG::GameCore::FixPoint ICCFLGMOHEH; // 0x18
		::System::Void GBGALBKMCBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNEPPDLABKI_GBGALBKMCBN_OFFSET))(this);
		}

		::System::Void FAFGAKLPDJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LNEPPDLABKI_FAFGAKLPDJA_OFFSET))(this, a1);
		}

	};
