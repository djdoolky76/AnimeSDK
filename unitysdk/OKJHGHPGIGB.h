#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_ModifierData; }

#define OKJHGHPGIGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D0AA0)
#define OKJHGHPGIGB_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C7D0AB0)

inline static constexpr unsigned int OKJHGHPGIGB_TypeDefinitionIndex = 36367;

	class OKJHGHPGIGB : public ::AJBKGPOEBFG
	{
	public:
		::EGDGOMKKEJI* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + OKJHGHPGIGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJHGHPGIGB_MLKLPMJEHPF_OFFSET))(this);
		}

	};
