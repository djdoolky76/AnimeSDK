#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class EMLGAENDHFO;
class LDKAJKFFOED;
class LKMLPNBBOBJ;
namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }

#define LDKAJKFFOED_LCNIKJFFFFF_AONOEOLHANF_OFFSET UNITYSDK_OFFSET(0x184E2230)
#define LDKAJKFFOED_LCNIKJFFFFF__CTOR_OFFSET UNITYSDK_OFFSET(0x184E2220)

inline static constexpr unsigned int LDKAJKFFOED_LCNIKJFFFFF_TypeDefinitionIndex = 90509;

class LDKAJKFFOED_LCNIKJFFFFF : public ::System::Object
{
public:
	::EMLGAENDHFO* EPCNNMMENJD; // 0x10
	::LDKAJKFFOED* KLHPEBKNIFB; // 0x18
	::LKMLPNBBOBJ* IAGHKKBPKGJ; // 0x20
	::MoleMole::UIZenkovItemIconBtnWidgetController* KALIOANLELE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKAJKFFOED_LCNIKJFFFFF__CTOR_OFFSET))(this);
	}

	::System::Void AONOEOLHANF(::MNAGAGOHIGH& NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + LDKAJKFFOED_LCNIKJFFFFF_AONOEOLHANF_OFFSET))(this, NFFNEFLKPDG);
	}
};
