#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_InsertAbility; }

#define BFHDPKOBGMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C589020)
#define BFHDPKOBGMN_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C589030)

inline static constexpr unsigned int BFHDPKOBGMN_TypeDefinitionIndex = 36312;

	class BFHDPKOBGMN : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_InsertAbility* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_InsertAbility* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + BFHDPKOBGMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHDPKOBGMN_MLKLPMJEHPF_OFFSET))(this);
		}

	};
