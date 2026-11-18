#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJNJBJKHDCJ.h"
#include "unitysdk/CCDFJCPDCLB.h"
#include "unitysdk/ECLDJGAJPJM.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"

class FCICALKKEFA;
class GFHOCGNJKEF;
class LDFHCNHINCB;
namespace MoleMole { class TurnBattleEntityUnit; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MENMIHAMGKH_NEWTURNBATTLEUNIT_OFFSET UNITYSDK_OFFSET(0x17D1E140)
#define MENMIHAMGKH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D1D840)
#define MENMIHAMGKH__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17D1DD00)
#define MENMIHAMGKH__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1D250)

inline static constexpr unsigned int MENMIHAMGKH_TypeDefinitionIndex = 63374;

class MENMIHAMGKH : public ::CCDFJCPDCLB
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::LDFHCNHINCB*>* MCOJLFNLFHC; // 0x10
	::Il2CppArray<::BJNJBJKHDCJ>* IJDAHKKEMNK; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::ECLDJGAJPJM>* KBHMEHKGBGN; // 0x20
	::FCICALKKEFA* IFOJNJLAOGB; // 0x28
	::System::Single GJLKCLKBNME; // 0x30
	::System::Int32 KMLPFPOCOEO; // 0x34
	::System::UInt32 AOGNNJLKHGL; // 0x38

	::System::Void _ctor(::System::Int32 CLACNEMIOBA, ::System::UInt32 NJNCGJLHLKC, ::System::Collections::Generic::IReadOnlyList_1<::GFHOCGNJKEF*>* EIKFBBGMGNM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::GFHOCGNJKEF*>*))((::PBYTE)hIl2Cpp + MENMIHAMGKH__CTOR_OFFSET))(this, CLACNEMIOBA, NJNCGJLHLKC, EIKFBBGMGNM);
	}

	::System::Void _ctor_1(::System::Int32 CLACNEMIOBA, ::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MENMIHAMGKH__CTOR_1_OFFSET))(this, CLACNEMIOBA, NJNCGJLHLKC);
	}

	::System::Void _ctor_2(::MoleMole::TurnBattleEntityUnit* DGCGOJNDKPM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + MENMIHAMGKH__CTOR_2_OFFSET))(this, DGCGOJNDKPM);
	}

	::MoleMole::TurnBattleEntityUnit* NewTurnBattleUnit()
	{
		return ((::MoleMole::TurnBattleEntityUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENMIHAMGKH_NEWTURNBATTLEUNIT_OFFSET))(this);
	}
};
