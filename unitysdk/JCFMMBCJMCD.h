#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFCKKOKHCDO.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define JCFMMBCJMCD_BEJPEFFCEKP_OFFSET UNITYSDK_OFFSET(0x160D6B40)
#define JCFMMBCJMCD_CHCJMALGOEB_OFFSET UNITYSDK_OFFSET(0x160D6B80)
#define JCFMMBCJMCD_COBPIICGJJA_OFFSET UNITYSDK_OFFSET(0x160D6B70)
#define JCFMMBCJMCD_DGEGLHGJALC_OFFSET UNITYSDK_OFFSET(0x160D6B30)
#define JCFMMBCJMCD_HHKKDJKPHFE_OFFSET UNITYSDK_OFFSET(0x160D6BB0)
#define JCFMMBCJMCD_KLOBFIDEMCJ_OFFSET UNITYSDK_OFFSET(0x160D6B20)
#define JCFMMBCJMCD_KMDNJDNCBJF_OFFSET UNITYSDK_OFFSET(0x160D6B10)
#define JCFMMBCJMCD_MAJEGKPILGF_OFFSET UNITYSDK_OFFSET(0x160D6BA0)
#define JCFMMBCJMCD_NIMAEICAPLN_OFFSET UNITYSDK_OFFSET(0x160D6B50)
#define JCFMMBCJMCD_OHEJFJOIHKJ_OFFSET UNITYSDK_OFFSET(0x160D6B90)
#define JCFMMBCJMCD__CTOR_OFFSET UNITYSDK_OFFSET(0x160D6AD0)

inline static constexpr unsigned int JCFMMBCJMCD_TypeDefinitionIndex = 50692;

class JCFMMBCJMCD : public ::NFCKKOKHCDO
{
public:
	::System::String* _INKMFIEAKAK_k__BackingField; // 0x18
	::UnityEngine::Vector3 _IGFODOGDCHK_k__BackingField; // 0x20
	::System::Single _CBMDBNAJICB_k__BackingField; // 0x2C
	::UnityEngine::Quaternion _ALJOIINAJFF_k__BackingField; // 0x30
	::System::Single _KLONEAFCKAF_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFMMBCJMCD__CTOR_OFFSET))(this);
	}

	::System::String* KMDNJDNCBJF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFMMBCJMCD_KMDNJDNCBJF_OFFSET))(this);
	}

	::System::Void KLOBFIDEMCJ(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCFMMBCJMCD_KLOBFIDEMCJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DGEGLHGJALC(::UnityEngine::Quaternion EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + JCFMMBCJMCD_DGEGLHGJALC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BEJPEFFCEKP(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JCFMMBCJMCD_BEJPEFFCEKP_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 NIMAEICAPLN()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFMMBCJMCD_NIMAEICAPLN_OFFSET))(this);
	}

	::UnityEngine::Quaternion COBPIICGJJA()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFMMBCJMCD_COBPIICGJJA_OFFSET))(this);
	}

	::System::Single CHCJMALGOEB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFMMBCJMCD_CHCJMALGOEB_OFFSET))(this);
	}

	::System::Void OHEJFJOIHKJ(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCFMMBCJMCD_OHEJFJOIHKJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single MAJEGKPILGF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFMMBCJMCD_MAJEGKPILGF_OFFSET))(this);
	}

	::System::Void HHKKDJKPHFE(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JCFMMBCJMCD_HHKKDJKPHFE_OFFSET))(this, EGEGIMGMJHN);
	}
};
