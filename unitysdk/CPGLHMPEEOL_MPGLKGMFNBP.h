#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CPGLHMPEEOL;
namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }

#define CPGLHMPEEOL_MPGLKGMFNBP_BOIOBOACAME_OFFSET UNITYSDK_OFFSET(0x16889490)
#define CPGLHMPEEOL_MPGLKGMFNBP__CTOR_OFFSET UNITYSDK_OFFSET(0x16889480)

inline static constexpr unsigned int CPGLHMPEEOL_MPGLKGMFNBP_TypeDefinitionIndex = 80117;

class CPGLHMPEEOL_MPGLKGMFNBP : public ::System::Object
{
public:
	::MoleMole::UIGeneralFilterItemRowWidgetController* MNOMCCLBJAO; // 0x10
	::CPGLHMPEEOL* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGLHMPEEOL_MPGLKGMFNBP__CTOR_OFFSET))(this);
	}

	::System::Void BOIOBOACAME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGLHMPEEOL_MPGLKGMFNBP_BOIOBOACAME_OFFSET))(this);
	}
};
