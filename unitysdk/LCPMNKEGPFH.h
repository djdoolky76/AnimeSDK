#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareSupportCatRank; }

#define LCPMNKEGPFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7385E0)
#define LCPMNKEGPFH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C7386C0)

	class LCPMNKEGPFH
	{
	public:
		::IFBFJDCECML* MMLCJLCFEBB; // 0x28
		::AGENEONNBML* HEJHGJIGEGK; // 0x30
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*))((::PBYTE)hIl2Cpp + LCPMNKEGPFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPMNKEGPFH_EVALUATE_OFFSET))(this);
		}

	};
