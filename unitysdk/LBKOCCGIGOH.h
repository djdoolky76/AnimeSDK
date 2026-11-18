#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJEMDDDGPG.h"

namespace MoleMole { class UIControllerContextBase; }

#define LBKOCCGIGOH_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x15BB6150)
#define LBKOCCGIGOH_GGAGCFAACCC_OFFSET UNITYSDK_OFFSET(0x15BB6350)
#define LBKOCCGIGOH_PAFHOKGAAGB_OFFSET UNITYSDK_OFFSET(0x15BB62A0)
#define LBKOCCGIGOH__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB6290)

inline static constexpr unsigned int LBKOCCGIGOH_TypeDefinitionIndex = 63026;

class LBKOCCGIGOH : public ::KDJEMDDDGPG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKOCCGIGOH__CTOR_OFFSET))(this);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + LBKOCCGIGOH_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void PAFHOKGAAGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKOCCGIGOH_PAFHOKGAAGB_OFFSET))(this);
	}

	::System::Void GGAGCFAACCC(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + LBKOCCGIGOH_GGAGCFAACCC_OFFSET))(this, MIALFKCCCPI);
	}
};
