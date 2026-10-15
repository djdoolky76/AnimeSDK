#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class AOMMEMBHKKG;
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByCheckHaveSkill; }

#define GKJAKDLLLGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB0960)
#define GKJAKDLLLGA_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1CAB0980)
#define GKJAKDLLLGA___EVALUATEIMP_B__1_0_OFFSET UNITYSDK_OFFSET(0x1CAB0A80)

	class GKJAKDLLLGA : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByCheckHaveSkill* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByCheckHaveSkill* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCheckHaveSkill*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + GKJAKDLLLGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJAKDLLLGA_KHNFOOKHOJF_OFFSET))(this);
		}

		::System::Boolean __EvaluateImp_b__1_0(::AOMMEMBHKKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOMMEMBHKKG*))((::PBYTE)hIl2Cpp + GKJAKDLLLGA___EVALUATEIMP_B__1_0_OFFSET))(this, a1);
		}

	};
