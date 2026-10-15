#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsBuyFinishResult.h"
class BKHHFIJCHEP;

#define NDNBMAEMOEC_CTOR_OFFSET UNITYSDK_OFFSET(0xBB53110)
#define NDNBMAEMOEC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBB53120)

	class NDNBMAEMOEC : public ::EFNJLACKEDH
	{
	public:
		::RPG::LittleGameShare::DiceCombatCore::TacticsBuyFinishResult GNOEGILFEMD; // 0x18
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyFinishResult a2)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyFinishResult))((::PBYTE)hIl2Cpp + NDNBMAEMOEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNBMAEMOEC_NPAFMEBNFOB_OFFSET))(this);
		}

	};
