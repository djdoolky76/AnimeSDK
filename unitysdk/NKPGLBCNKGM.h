#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_DirectDamage; }

#define NKPGLBCNKGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C79C3E0)
#define NKPGLBCNKGM_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C79C3F0)

	class NKPGLBCNKGM : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_DirectDamage* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_DirectDamage* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_DirectDamage*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + NKPGLBCNKGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKPGLBCNKGM_MLKLPMJEHPF_OFFSET))(this);
		}

	};
