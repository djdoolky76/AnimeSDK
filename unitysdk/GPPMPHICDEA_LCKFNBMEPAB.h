#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }

#define GPPMPHICDEA_LCKFNBMEPAB_DOCAPFMEGBF_OFFSET UNITYSDK_OFFSET(0x19DEA050)
#define GPPMPHICDEA_LCKFNBMEPAB__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEA040)

inline static constexpr unsigned int GPPMPHICDEA_LCKFNBMEPAB_TypeDefinitionIndex = 42629;

class GPPMPHICDEA_LCKFNBMEPAB : public ::System::Object
{
public:
	::MoleMole::UIControllerContextBase* PJCLCLCNDCG; // 0x10
	::MIKOMFIBMBN JOLDOMEIKEF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_LCKFNBMEPAB__CTOR_OFFSET))(this);
	}

	::System::Void DOCAPFMEGBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_LCKFNBMEPAB_DOCAPFMEGBF_OFFSET))(this);
	}
};
