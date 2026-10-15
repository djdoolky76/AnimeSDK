#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerIceEffect; }

#define KJNBMHIJCAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E6B10)
#define KJNBMHIJCAM_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C6E6B20)

inline static constexpr unsigned int KJNBMHIJCAM_TypeDefinitionIndex = 36321;

	class KJNBMHIJCAM : public ::AJBKGPOEBFG
	{
	public:
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + KJNBMHIJCAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNBMHIJCAM_MLKLPMJEHPF_OFFSET))(this);
		}

	};
