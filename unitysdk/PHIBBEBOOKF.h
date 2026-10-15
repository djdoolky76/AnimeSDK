#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EHMBINMCDGN;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DamageValueCompare; }

#define PHIBBEBOOKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7ED1B0)
#define PHIBBEBOOKF_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C7ED1D0)

	class PHIBBEBOOKF : public ::HHOHBHGLHHF
	{
	public:
		::EHMBINMCDGN* JFBABKALCPJ; // 0x30
		::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare* EMJIBBDCGMO; // 0x38
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare* a1, ::EHMBINMCDGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare*, ::EHMBINMCDGN*))((::PBYTE)hIl2Cpp + PHIBBEBOOKF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIBBEBOOKF_KFGJEKJHIMB_OFFSET))(this);
		}

	};
