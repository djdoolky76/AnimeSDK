#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsDiscardResult.h"
class BKHHFIJCHEP;
class EEKIILDAMOL;

#define BJFGAJKANKB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7947A0)
#define BJFGAJKANKB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB7947C0)

inline static constexpr unsigned int BJFGAJKANKB_TypeDefinitionIndex = 60346;

	class BJFGAJKANKB : public ::EFNJLACKEDH
	{
	public:
		::EEKIILDAMOL* DBMHCIDGGLF; // 0x18
		::System::Int32 FFNBLDFFMCN; // 0x20
		::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult GNOEGILFEMD; // 0x24
		::System::UInt32 FFLMGCFDBKI; // 0x28
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::UInt32 a2, ::System::Int32 a3, ::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult a4, ::EEKIILDAMOL* a5)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::UInt32, ::System::Int32, ::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult, ::EEKIILDAMOL*))((::PBYTE)hIl2Cpp + BJFGAJKANKB_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFGAJKANKB_NPAFMEBNFOB_OFFSET))(this);
		}

	};
