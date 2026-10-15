#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareHasEffect; }

#define CJGMDLNKCMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D6140)
#define CJGMDLNKCMP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C5D6220)

	class CJGMDLNKCMP
	{
	public:
		::AGENEONNBML* HEJHGJIGEGK; // 0x28
		::IFBFJDCECML* MMLCJLCFEBB; // 0x30
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*))((::PBYTE)hIl2Cpp + CJGMDLNKCMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGMDLNKCMP_EVALUATE_OFFSET))(this);
		}

	};
