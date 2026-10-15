#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsRefreshResult.h"
class BKHHFIJCHEP;
class EEKIILDAMOL;

#define HFFNACEFPJH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C6C6C0)
#define HFFNACEFPJH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15C6C6E0)

inline static constexpr unsigned int HFFNACEFPJH_TypeDefinitionIndex = 60345;

	class HFFNACEFPJH : public ::EFNJLACKEDH
	{
	public:
		::EEKIILDAMOL* DBMHCIDGGLF; // 0x18
		::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult GNOEGILFEMD; // 0x20
		::System::UInt32 LEIIALKPPNK; // 0x24
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::UInt32 a2, ::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult a3, ::EEKIILDAMOL* a4)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::UInt32, ::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult, ::EEKIILDAMOL*))((::PBYTE)hIl2Cpp + HFFNACEFPJH_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFNACEFPJH_NPAFMEBNFOB_OFFSET))(this);
		}

	};
