#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MENMIHAMGKH.h"

class GFHOCGNJKEF;
namespace MoleMole { class TurnBattleEntityDummyUnit; }
namespace MoleMole { class TurnBattleEntityUnit; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CAKFNAFOPHC_CEDHOGANOMM_OFFSET UNITYSDK_OFFSET(0x199EF4D0)
#define CAKFNAFOPHC_NEWTURNBATTLEUNIT_OFFSET UNITYSDK_OFFSET(0x199EF450)
#define CAKFNAFOPHC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x199EF430)
#define CAKFNAFOPHC__CTOR_2_OFFSET UNITYSDK_OFFSET(0x199EF440)
#define CAKFNAFOPHC__CTOR_OFFSET UNITYSDK_OFFSET(0x199EF420)

inline static constexpr unsigned int CAKFNAFOPHC_TypeDefinitionIndex = 55242;

class CAKFNAFOPHC : public ::MENMIHAMGKH
{
public:
	::System::Void _ctor(::System::Int32 CLACNEMIOBA, ::System::UInt32 NJNCGJLHLKC, ::System::Collections::Generic::IReadOnlyList_1<::GFHOCGNJKEF*>* EIKFBBGMGNM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::GFHOCGNJKEF*>*))((::PBYTE)hIl2Cpp + CAKFNAFOPHC__CTOR_OFFSET))(this, CLACNEMIOBA, NJNCGJLHLKC, EIKFBBGMGNM);
	}

	::System::Void _ctor_1(::System::Int32 CLACNEMIOBA, ::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CAKFNAFOPHC__CTOR_1_OFFSET))(this, CLACNEMIOBA, NJNCGJLHLKC);
	}

	::System::Void _ctor_2(::MoleMole::TurnBattleEntityDummyUnit* DGCGOJNDKPM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityDummyUnit*))((::PBYTE)hIl2Cpp + CAKFNAFOPHC__CTOR_2_OFFSET))(this, DGCGOJNDKPM);
	}

	::MoleMole::TurnBattleEntityUnit* NewTurnBattleUnit()
	{
		return ((::MoleMole::TurnBattleEntityUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKFNAFOPHC_NEWTURNBATTLEUNIT_OFFSET))(this);
	}

	::MoleMole::TurnBattleEntityUnit* CEDHOGANOMM()
	{
		return ((::MoleMole::TurnBattleEntityUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKFNAFOPHC_CEDHOGANOMM_OFFSET))(this);
	}
};
