#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareSupportCatID; }

#define GFANNMEIBJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C63B440)
#define GFANNMEIBJJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C63B520)

inline static constexpr unsigned int GFANNMEIBJJ_TypeDefinitionIndex = 36982;

	class GFANNMEIBJJ
	{
	public:
		::IFBFJDCECML* MMLCJLCFEBB; // 0x28
		::AGENEONNBML* HEJHGJIGEGK; // 0x30
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*))((::PBYTE)hIl2Cpp + GFANNMEIBJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFANNMEIBJJ_EVALUATE_OFFSET))(this);
		}

	};
