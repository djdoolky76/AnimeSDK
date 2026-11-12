#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareHasEffect; }

#define CJGMDLNKCMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D757980)
#define CJGMDLNKCMP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1D757A60)

inline static constexpr unsigned int CJGMDLNKCMP_TypeDefinitionIndex = 37908;

	class CJGMDLNKCMP
	{
	public:
		::IFBFJDCECML* MMLCJLCFEBB; // 0x28
		::AGENEONNBML* HEJHGJIGEGK; // 0x30
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*))((::PBYTE)hIl2Cpp + CJGMDLNKCMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGMDLNKCMP_EVALUATE_OFFSET))(this);
		}

	};
