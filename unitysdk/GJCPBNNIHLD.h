#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue; }

#define GJCPBNNIHLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C643070)
#define GJCPBNNIHLD_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C643080)

	class GJCPBNNIHLD : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue* IGHAHBNLIJA; // 0x18
		::EGDGOMKKEJI* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + GJCPBNNIHLD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCPBNNIHLD_MLKLPMJEHPF_OFFSET))(this);
		}

	};
