#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkWeatherInEffect; }

#define JIALGMPAGJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1318C0)
#define JIALGMPAGJE_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C1318D0)

inline static constexpr unsigned int JIALGMPAGJE_TypeDefinitionIndex = 37222;

	class JIALGMPAGJE : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect* IGHAHBNLIJA; // 0x18
		::EGDGOMKKEJI* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + JIALGMPAGJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIALGMPAGJE_MLKLPMJEHPF_OFFSET))(this);
		}

	};
