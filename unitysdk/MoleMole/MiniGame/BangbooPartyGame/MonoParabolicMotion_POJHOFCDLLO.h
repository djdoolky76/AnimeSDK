#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_POJHOFCDLLO_APDMFHDPELD_OFFSET UNITYSDK_OFFSET(0x1192F070)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_POJHOFCDLLO_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x1192F110)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_POJHOFCDLLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1192EEF0)

namespace MoleMole::MiniGame::BangbooPartyGame
{
	inline static constexpr unsigned int MonoParabolicMotion_POJHOFCDLLO_TypeDefinitionIndex = 82797;

	class MonoParabolicMotion_POJHOFCDLLO : public ::System::Object
	{
	public:
		::System::Single AGLJFMGPHMA; // 0x10
		::System::Single PDAMDBHMGHM; // 0x14
		::System::Single NNDKAPGDCJB; // 0x18
		::System::Single MDKIFPECHEE; // 0x1C
		::System::Single IKKJLHAOAFF; // 0x20
		::System::Single PKEOFALMDHD; // 0x24
		::System::Single FLDDGBMFABB; // 0x28

		::System::Void _ctor(::System::Single DHLHCIOMFLJ, ::System::Single HIPGACBCDMK, ::System::Single FCNPOKNKMOD, ::System::Single NBFLBCNEGCM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_POJHOFCDLLO__CTOR_OFFSET))(this, DHLHCIOMFLJ, HIPGACBCDMK, FCNPOKNKMOD, NBFLBCNEGCM);
		}

		::System::Single LBCBPEJEHNB(::System::Single FNIOPKPHDEH)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_POJHOFCDLLO_LBCBPEJEHNB_OFFSET))(this, FNIOPKPHDEH);
		}

		static ::System::Single APDMFHDPELD(::System::Single DHLHCIOMFLJ, ::System::Single JEMOEFBOHAO, ::System::Single FNIOPKPHDEH)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_POJHOFCDLLO_APDMFHDPELD_OFFSET))(DHLHCIOMFLJ, JEMOEFBOHAO, FNIOPKPHDEH);
		}
	};
}
