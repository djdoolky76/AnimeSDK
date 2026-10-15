#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_InsertAbility; }

#define BFHDPKOBGMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B7460)
#define BFHDPKOBGMN_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C5B7470)

inline static constexpr unsigned int BFHDPKOBGMN_TypeDefinitionIndex = 36312;

	class BFHDPKOBGMN : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_InsertAbility* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_InsertAbility* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + BFHDPKOBGMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHDPKOBGMN_MLKLPMJEHPF_OFFSET))(this);
		}

	};
