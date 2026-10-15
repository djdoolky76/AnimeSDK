#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkWeatherInEffect; }

#define JIALGMPAGJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F5400)
#define JIALGMPAGJE_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C6F5410)

inline static constexpr unsigned int JIALGMPAGJE_TypeDefinitionIndex = 36294;

	class JIALGMPAGJE : public ::AJBKGPOEBFG
	{
	public:
		::EGDGOMKKEJI* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkWeatherInEffect*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + JIALGMPAGJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIALGMPAGJE_MLKLPMJEHPF_OFFSET))(this);
		}

	};
