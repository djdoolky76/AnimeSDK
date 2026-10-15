#pragma once
#include "unitysdk/unitysdk.h"
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByPropertyCompare; }

#define IOJGBFCBGFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E4140)
#define IOJGBFCBGFG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C6E41C0)

	class IOJGBFCBGFG
	{
	public:
		::IFBFJDCECML* JMMECHDFLKH; // 0x28
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*))((::PBYTE)hIl2Cpp + IOJGBFCBGFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJGBFCBGFG_EVALUATE_OFFSET))(this);
		}

	};
