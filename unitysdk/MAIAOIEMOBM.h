#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareSupportCatBehindDistance; }

#define MAIAOIEMOBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C747170)
#define MAIAOIEMOBM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C747250)

inline static constexpr unsigned int MAIAOIEMOBM_TypeDefinitionIndex = 36981;

	class MAIAOIEMOBM
	{
	public:
		::AGENEONNBML* HEJHGJIGEGK; // 0x28
		::IFBFJDCECML* MMLCJLCFEBB; // 0x30
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*))((::PBYTE)hIl2Cpp + MAIAOIEMOBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAIAOIEMOBM_EVALUATE_OFFSET))(this);
		}

	};
