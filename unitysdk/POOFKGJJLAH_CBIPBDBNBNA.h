#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBFPMLALDOK;
class IBPCDEKGHCJ;
namespace MoleMole { class UILineupSelectContext; }

#define POOFKGJJLAH_CBIPBDBNBNA_DPIODHCIPOM_OFFSET UNITYSDK_OFFSET(0x1374A880)
#define POOFKGJJLAH_CBIPBDBNBNA_MDAEONBELPD_OFFSET UNITYSDK_OFFSET(0x1374A850)
#define POOFKGJJLAH_CBIPBDBNBNA__CTOR_OFFSET UNITYSDK_OFFSET(0x1374A840)

inline static constexpr unsigned int POOFKGJJLAH_CBIPBDBNBNA_TypeDefinitionIndex = 81841;

class POOFKGJJLAH_CBIPBDBNBNA : public ::System::Object
{
public:
	::MoleMole::UILineupSelectContext* BNEKAJJFPLH; // 0x10
	::IBPCDEKGHCJ* PLGHEACEEEF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOFKGJJLAH_CBIPBDBNBNA__CTOR_OFFSET))(this);
	}

	::System::Boolean MDAEONBELPD(::System::Int32 EOGLMAEPALE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POOFKGJJLAH_CBIPBDBNBNA_MDAEONBELPD_OFFSET))(this, EOGLMAEPALE);
	}

	::System::Void DPIODHCIPOM(::IBFPMLALDOK* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::IBFPMLALDOK*))((::PBYTE)hIl2Cpp + POOFKGJJLAH_CBIPBDBNBNA_DPIODHCIPOM_OFFSET))(this, PIIPCLCCOIG);
	}
};
