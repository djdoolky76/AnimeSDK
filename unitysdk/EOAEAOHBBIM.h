#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_ExchangeHP; }

#define EOAEAOHBBIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA64FC0)
#define EOAEAOHBBIM_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1BA8D520)

inline static constexpr unsigned int EOAEAOHBBIM_TypeDefinitionIndex = 37248;

	class EOAEAOHBBIM : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + EOAEAOHBBIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAEAOHBBIM_MLKLPMJEHPF_OFFSET))(this);
		}

	};
