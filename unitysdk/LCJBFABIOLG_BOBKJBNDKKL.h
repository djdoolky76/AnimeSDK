#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LCJBFABIOLG;
namespace MoleMole { class UIGeneralLoginDropDownBoxRowWidgetController; }
namespace System { class String; }

#define LCJBFABIOLG_BOBKJBNDKKL_LMCDDFBFDPM_OFFSET UNITYSDK_OFFSET(0x1997B490)
#define LCJBFABIOLG_BOBKJBNDKKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1997B480)

inline static constexpr unsigned int LCJBFABIOLG_BOBKJBNDKKL_TypeDefinitionIndex = 53687;

class LCJBFABIOLG_BOBKJBNDKKL : public ::System::Object
{
public:
	::MoleMole::UIGeneralLoginDropDownBoxRowWidgetController* FPPPIIFJOBO; // 0x10
	::LCJBFABIOLG* KLHPEBKNIFB; // 0x18
	::System::Int32 LHACGIGNCFE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBFABIOLG_BOBKJBNDKKL__CTOR_OFFSET))(this);
	}

	::System::Void LMCDDFBFDPM(::System::String* OCBHNNKABAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJBFABIOLG_BOBKJBNDKKL_LMCDDFBFDPM_OFFSET))(this, OCBHNNKABAA);
	}
};
