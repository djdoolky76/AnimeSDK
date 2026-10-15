#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_RemoveModifier; }

#define JHCBFNAOLJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C6CE0)
#define JHCBFNAOLJG_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C6C6CF0)

inline static constexpr unsigned int JHCBFNAOLJG_TypeDefinitionIndex = 36299;

	class JHCBFNAOLJG : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + JHCBFNAOLJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCBFNAOLJG_MLKLPMJEHPF_OFFSET))(this);
		}

	};
