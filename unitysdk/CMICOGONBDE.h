#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatTaskConfig_ModifyPreviewValue; }

#define CMICOGONBDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D7760)
#define CMICOGONBDE_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C5D7770)

	class CMICOGONBDE : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue* IGHAHBNLIJA; // 0x18
		::EGDGOMKKEJI* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + CMICOGONBDE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMICOGONBDE_MLKLPMJEHPF_OFFSET))(this);
		}

	};
