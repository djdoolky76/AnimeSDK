#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIsSkillCD; }

#define HLBMMEPAJCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C667D70)
#define HLBMMEPAJCB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C667E50)

	class HLBMMEPAJCB
	{
	public:
		::IFBFJDCECML* MMLCJLCFEBB; // 0x28
		::AGENEONNBML* HEJHGJIGEGK; // 0x30
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*))((::PBYTE)hIl2Cpp + HLBMMEPAJCB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBMMEPAJCB_EVALUATE_OFFSET))(this);
		}

	};
