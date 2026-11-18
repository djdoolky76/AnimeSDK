#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class FDBKLDNMNJK;
class GIBMJLOJLKD;
class IOLJFHJPFOL;
namespace MoleMole { class UIActivityWeekRewardComponentPopWindowController; }

#define AFPGBIDMLBG_DLDFNCNKNJN_OFFSET UNITYSDK_OFFSET(0x144D79A0)
#define AFPGBIDMLBG_HCMOKEIOBEP_OFFSET UNITYSDK_OFFSET(0x144D7D50)
#define AFPGBIDMLBG_IDODIBLLJGD_OFFSET UNITYSDK_OFFSET(0x144D76E0)
#define AFPGBIDMLBG_KCAOPAGDPKD_OFFSET UNITYSDK_OFFSET(0x144D7F60)
#define AFPGBIDMLBG_LLBBBKOPFLF_OFFSET UNITYSDK_OFFSET(0x144D85B0)
#define AFPGBIDMLBG_PNEJPEMOHBE_OFFSET UNITYSDK_OFFSET(0x144D7730)
#define AFPGBIDMLBG__CTOR_OFFSET UNITYSDK_OFFSET(0x144D7680)

inline static constexpr unsigned int AFPGBIDMLBG_TypeDefinitionIndex = 44038;

class AFPGBIDMLBG : public ::System::Object
{
public:
	::MoleMole::UIActivityWeekRewardComponentPopWindowController* NGJMHIBMPCG; // 0x10
	::IOLJFHJPFOL* DJNOJGDOIDE; // 0x18
	::FDBKLDNMNJK* JCJOJGHFNGO; // 0x20
	::System::Single FNIOFNFDEEL; // 0x28
	::Foundation::Coroutine::CoroutineHandle NEIEMHLFGIL; // 0x2C
	::System::Single IFOKLBAOPGI; // 0x30
	::System::Single JKAGGKKINMB; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPGBIDMLBG__CTOR_OFFSET))(this);
	}

	::System::Void IDODIBLLJGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPGBIDMLBG_IDODIBLLJGD_OFFSET))(this);
	}

	::System::Void PNEJPEMOHBE(::System::Boolean JOBHFEMGBDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFPGBIDMLBG_PNEJPEMOHBE_OFFSET))(this, JOBHFEMGBDG);
	}

	::System::Void DLDFNCNKNJN(::System::UInt32 JMCLFJCPMPB, ::System::UInt32 MJDJLJMBIBF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AFPGBIDMLBG_DLDFNCNKNJN_OFFSET))(this, JMCLFJCPMPB, MJDJLJMBIBF);
	}

	::System::Void HCMOKEIOBEP(::MoleMole::UIActivityWeekRewardComponentPopWindowController* NGJMHIBMPCG, ::GIBMJLOJLKD* DJNOJGDOIDE, ::FDBKLDNMNJK* CENDLIKDNJA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityWeekRewardComponentPopWindowController*, ::GIBMJLOJLKD*, ::FDBKLDNMNJK*))((::PBYTE)hIl2Cpp + AFPGBIDMLBG_HCMOKEIOBEP_OFFSET))(this, NGJMHIBMPCG, DJNOJGDOIDE, CENDLIKDNJA);
	}

	::System::Void KCAOPAGDPKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPGBIDMLBG_KCAOPAGDPKD_OFFSET))(this);
	}

	::System::Void LLBBBKOPFLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPGBIDMLBG_LLBBBKOPFLF_OFFSET))(this);
	}
};
