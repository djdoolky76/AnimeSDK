#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_AttackDamage; }

#define JBHHMDOOLLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F1350)
#define JBHHMDOOLLI_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C6F1360)

inline static constexpr unsigned int JBHHMDOOLLI_TypeDefinitionIndex = 36309;

	class JBHHMDOOLLI : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_AttackDamage* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AttackDamage* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AttackDamage*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + JBHHMDOOLLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHHMDOOLLI_MLKLPMJEHPF_OFFSET))(this);
		}

	};
