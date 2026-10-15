#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKHHFIJCHEP;
class GLPPDCIBMIH;
class IFLICGOLBIG;
namespace RPG::Client::DiceCombat { class DiceCombatBattleDiceDisplayInfo; }

#define MIMFLJPLACJ_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xB95E8B0)
#define MIMFLJPLACJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB95E800)
#define MIMFLJPLACJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB95E7B0)
#define MIMFLJPLACJ_LBKFBMLNFFP_OFFSET UNITYSDK_OFFSET(0xB95EA10)

inline static constexpr unsigned int MIMFLJPLACJ_TypeDefinitionIndex = 76040;

	class MIMFLJPLACJ : public ::System::Object
	{
	public:
		::BKHHFIJCHEP* FLMODBLFAGD; // 0x10
		::GLPPDCIBMIH* EFCOEOGMHPO; // 0x18
		::System::Void _ctor(::BKHHFIJCHEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*))((::PBYTE)hIl2Cpp + MIMFLJPLACJ_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo* BPLPBPMEODA(::IFLICGOLBIG* a1, ::System::Single a2)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*(*)(::PVOID, ::IFLICGOLBIG*, ::System::Single))((::PBYTE)hIl2Cpp + MIMFLJPLACJ_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

		::System::Void ALJIOCDBMKO(::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo* a1, ::IFLICGOLBIG* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*, ::IFLICGOLBIG*, ::System::Single))((::PBYTE)hIl2Cpp + MIMFLJPLACJ_ALJIOCDBMKO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LBKFBMLNFFP(::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo* a1, ::IFLICGOLBIG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*, ::IFLICGOLBIG*))((::PBYTE)hIl2Cpp + MIMFLJPLACJ_LBKFBMLNFFP_OFFSET))(this, a1, a2);
		}

	};
