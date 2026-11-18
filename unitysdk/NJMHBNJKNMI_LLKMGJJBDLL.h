#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class DFEONFMKCKE;
class LHLDPHDJLNL;
class LJELFDJAHOD;
class NJMHBNJKNMI;
namespace MoleMole { class UIHollowMainPageController; }

#define NJMHBNJKNMI_LLKMGJJBDLL_CKHKIPLAJCM_OFFSET UNITYSDK_OFFSET(0x1289A350)
#define NJMHBNJKNMI_LLKMGJJBDLL_MJMKFFANPBL_OFFSET UNITYSDK_OFFSET(0x1289A4B0)
#define NJMHBNJKNMI_LLKMGJJBDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1289A340)

inline static constexpr unsigned int NJMHBNJKNMI_LLKMGJJBDLL_TypeDefinitionIndex = 67824;

class NJMHBNJKNMI_LLKMGJJBDLL : public ::System::Object
{
public:
	::NJMHBNJKNMI* KLHPEBKNIFB; // 0x10
	::MoleMole::UIHollowMainPageController* FIEJJJIKOPC; // 0x18
	::LHLDPHDJLNL* EIFFKEJBIOP; // 0x20
	::LJELFDJAHOD* NFCFCMIOOKJ; // 0x28
	::DFEONFMKCKE* NGOPKHCAIPF; // 0x30
	::DFEONFMKCKE* JDEDABNKDCF; // 0x38
	::MoleMole::HollowChessboard::HollowChessboardUID GNHEHOMMHPB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBNJKNMI_LLKMGJJBDLL__CTOR_OFFSET))(this);
	}

	::System::Void CKHKIPLAJCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBNJKNMI_LLKMGJJBDLL_CKHKIPLAJCM_OFFSET))(this);
	}

	::System::Void MJMKFFANPBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBNJKNMI_LLKMGJJBDLL_MJMKFFANPBL_OFFSET))(this);
	}
};
