#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_StrikeBackDamage; }

#define LMMHCLOIFEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C2580)
#define LMMHCLOIFEB_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1D8C2590)

inline static constexpr unsigned int LMMHCLOIFEB_TypeDefinitionIndex = 37243;

	class LMMHCLOIFEB : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + LMMHCLOIFEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMHCLOIFEB_MLKLPMJEHPF_OFFSET))(this);
		}

	};
