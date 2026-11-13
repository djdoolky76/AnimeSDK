#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatTaskConfig_ModifyPreviewValue; }

#define CMICOGONBDE_CTOR_OFFSET UNITYSDK_OFFSET(0x17045390)
#define CMICOGONBDE_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x170453A0)

inline static constexpr unsigned int CMICOGONBDE_TypeDefinitionIndex = 37217;

	class CMICOGONBDE : public ::AJBKGPOEBFG
	{
	public:
		::EGDGOMKKEJI* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + CMICOGONBDE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMICOGONBDE_MLKLPMJEHPF_OFFSET))(this);
		}

	};
