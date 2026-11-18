#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJEMDDDGPG.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralConsoleExistNormalBtnWidgetController; }

#define LGEOAAADCIJ_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x11F0BAD0)
#define LGEOAAADCIJ_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x11F0C0F0)
#define LGEOAAADCIJ_GJHHHKOHDHF_OFFSET UNITYSDK_OFFSET(0x11F0BFE0)
#define LGEOAAADCIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11F0BFD0)

inline static constexpr unsigned int LGEOAAADCIJ_TypeDefinitionIndex = 76698;

class LGEOAAADCIJ : public ::KDJEMDDDGPG
{
public:
	::MoleMole::UIGeneralConsoleExistNormalBtnWidgetController* HIBCIGOOMLI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEOAAADCIJ__CTOR_OFFSET))(this);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + LGEOAAADCIJ_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void GJHHHKOHDHF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEOAAADCIJ_GJHHHKOHDHF_OFFSET))(this);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + LGEOAAADCIJ_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}
};
