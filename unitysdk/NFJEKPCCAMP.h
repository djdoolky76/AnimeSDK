#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBKGPOEBFG.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatTaskConfig_ModifyOwedRollCount; }

#define NFJEKPCCAMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C793B40)
#define NFJEKPCCAMP_MLKLPMJEHPF_OFFSET UNITYSDK_OFFSET(0x1C793B50)

	class NFJEKPCCAMP : public ::AJBKGPOEBFG
	{
	public:
		::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount* IGHAHBNLIJA; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + NFJEKPCCAMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MLKLPMJEHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJEKPCCAMP_MLKLPMJEHPF_OFFSET))(this);
		}

	};
