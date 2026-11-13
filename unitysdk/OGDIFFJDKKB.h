#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_AddCurrentTurnMaxRollCount; }

#define OGDIFFJDKKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B0815E0)
#define OGDIFFJDKKB_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1B0815F0)

inline static constexpr unsigned int OGDIFFJDKKB_TypeDefinitionIndex = 37247;

	class OGDIFFJDKKB : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AddCurrentTurnMaxRollCount*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + OGDIFFJDKKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIFFJDKKB_MLKLPMJEHPF_OFFSET))(this);
		}

	};
