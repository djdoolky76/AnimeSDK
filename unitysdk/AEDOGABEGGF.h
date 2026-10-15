#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsBuyResult.h"
class BKHHFIJCHEP;
class EEKIILDAMOL;

#define AEDOGABEGGF_CTOR_OFFSET UNITYSDK_OFFSET(0xB14CAB0)
#define AEDOGABEGGF_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB14CAD0)

inline static constexpr unsigned int AEDOGABEGGF_TypeDefinitionIndex = 60344;

	class AEDOGABEGGF : public ::EFNJLACKEDH
	{
	public:
		::EEKIILDAMOL* DBMHCIDGGLF; // 0x18
		::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult GNOEGILFEMD; // 0x20
		::System::UInt32 CMGPDNDPJOC; // 0x24
		::System::Int32 FFNBLDFFMCN; // 0x28
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::UInt32 a2, ::System::Int32 a3, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult a4, ::EEKIILDAMOL* a5)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::UInt32, ::System::Int32, ::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult, ::EEKIILDAMOL*))((::PBYTE)hIl2Cpp + AEDOGABEGGF_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDOGABEGGF_NPAFMEBNFOB_OFFSET))(this);
		}

	};
