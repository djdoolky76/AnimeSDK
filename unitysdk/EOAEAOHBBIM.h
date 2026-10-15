#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_ExchangeHP; }

#define EOAEAOHBBIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B0650)
#define EOAEAOHBBIM_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C5D8D10)

inline static constexpr unsigned int EOAEAOHBBIM_TypeDefinitionIndex = 36320;

	class EOAEAOHBBIM : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + EOAEAOHBBIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAEAOHBBIM_MLKLPMJEHPF_OFFSET))(this);
		}

	};
