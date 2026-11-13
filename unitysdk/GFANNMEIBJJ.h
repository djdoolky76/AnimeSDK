#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareSupportCatID; }

#define GFANNMEIBJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA4A980)
#define GFANNMEIBJJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1AA4AA60)

inline static constexpr unsigned int GFANNMEIBJJ_TypeDefinitionIndex = 37910;

	class GFANNMEIBJJ
	{
	public:
		::AGENEONNBML* HEJHGJIGEGK; // 0x28
		::IFBFJDCECML* MMLCJLCFEBB; // 0x30
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*))((::PBYTE)hIl2Cpp + GFANNMEIBJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFANNMEIBJJ_EVALUATE_OFFSET))(this);
		}

	};
