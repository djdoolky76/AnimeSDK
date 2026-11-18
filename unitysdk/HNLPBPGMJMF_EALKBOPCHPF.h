#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayColliderCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayColliderCfgData_PanelSettle.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define HNLPBPGMJMF_EALKBOPCHPF_MGIEINBMEII_OFFSET UNITYSDK_OFFSET(0x15DCE920)
#define HNLPBPGMJMF_EALKBOPCHPF_PJCNIFHDPPG_OFFSET UNITYSDK_OFFSET(0x15DCE9A0)
#define HNLPBPGMJMF_EALKBOPCHPF__CTOR_OFFSET UNITYSDK_OFFSET(0x15DCE910)

inline static constexpr unsigned int HNLPBPGMJMF_EALKBOPCHPF_TypeDefinitionIndex = 86289;

class HNLPBPGMJMF_EALKBOPCHPF : public ::System::Object
{
public:
	::System::Func_2<::System::Object*, ::System::Boolean>* DLMJCFBENGB; // 0x10
	::System::Int32 KCNOHOOPNAH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLPBPGMJMF_EALKBOPCHPF__CTOR_OFFSET))(this);
	}

	::System::Boolean MGIEINBMEII(::MoleMole::Config::DisplayCase::DisplayColliderCfgData HBJOLKHGGDD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DisplayCase::DisplayColliderCfgData))((::PBYTE)hIl2Cpp + HNLPBPGMJMF_EALKBOPCHPF_MGIEINBMEII_OFFSET))(this, HBJOLKHGGDD);
	}

	::System::Boolean PJCNIFHDPPG(::MoleMole::Config::DisplayCase::DisplayColliderCfgData_PanelSettle CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DisplayCase::DisplayColliderCfgData_PanelSettle))((::PBYTE)hIl2Cpp + HNLPBPGMJMF_EALKBOPCHPF_PJCNIFHDPPG_OFFSET))(this, CBLGCIFLMKL);
	}
};
