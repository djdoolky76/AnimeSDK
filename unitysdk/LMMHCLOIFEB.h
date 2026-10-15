#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_StrikeBackDamage; }

#define LMMHCLOIFEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C740C10)
#define LMMHCLOIFEB_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C740C20)

	class LMMHCLOIFEB : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + LMMHCLOIFEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMHCLOIFEB_MLKLPMJEHPF_OFFSET))(this);
		}

	};
