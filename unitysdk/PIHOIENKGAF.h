#pragma once
#include "unitysdk/unitysdk.h"

class ALMILPMLGLJ;
namespace System { class String; }

#define PIHOIENKGAF_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x150CCF50)
#define PIHOIENKGAF_FIJIFCANNII_OFFSET UNITYSDK_OFFSET(0x150CC210)
#define PIHOIENKGAF_IDHPMOJIJFA_OFFSET UNITYSDK_OFFSET(0x150CCF60)
#define PIHOIENKGAF_IEHDGFDEHIO_OFFSET UNITYSDK_OFFSET(0x150CC7D0)
#define PIHOIENKGAF_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x150CD7F0)
#define PIHOIENKGAF_INFBHMMCNCD_OFFSET UNITYSDK_OFFSET(0x150CD530)
#define PIHOIENKGAF_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x150CBE40)
#define PIHOIENKGAF_KEHGLBFBHCM_OFFSET UNITYSDK_OFFSET(0x150CBE50)
#define PIHOIENKGAF_NOPCNDOEGLI_OFFSET UNITYSDK_OFFSET(0x150CB6B0)
#define PIHOIENKGAF_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x150CBB70)
#define PIHOIENKGAF_ONENABLE_OFFSET UNITYSDK_OFFSET(0x150CA6E0)
#define PIHOIENKGAF_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x150CA680)
#define PIHOIENKGAF__CTOR_OFFSET UNITYSDK_OFFSET(0x150CBE00)

inline static constexpr unsigned int PIHOIENKGAF_TypeDefinitionIndex = 50935;

class PIHOIENKGAF
{
public:
	::System::String* AHIBFJKEBJF; // 0x28
	::System::String* LFBFJCIEPDO; // 0x30
	::System::String* FADBDMHGPDK; // 0x38
	::System::String* ILNKPDMPELG; // 0x40
	::System::Int32 HBMOPMEOGMC; // 0x48
	::System::UInt32 LBNCLPAONNB; // 0x4C
	::System::Boolean MCIOHONLJAF; // 0x50
	::System::Boolean NJDMCEFMKON; // 0x51
	::System::Boolean FCMIEIDILAL; // 0x52
	::System::Boolean LCKFMBFCKJA; // 0x53
	::System::Boolean NBCHKDBNFJG; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHOIENKGAF__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHOIENKGAF_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHOIENKGAF_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHOIENKGAF_ONDISABLE_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHOIENKGAF_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void KEHGLBFBHCM(::System::Boolean HPFBPFMPPIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PIHOIENKGAF_KEHGLBFBHCM_OFFSET))(this, HPFBPFMPPIO);
	}

	::System::Void IEHDGFDEHIO(::System::Boolean HPFBPFMPPIO, ::System::Boolean GKFPOBBIBBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PIHOIENKGAF_IEHDGFDEHIO_OFFSET))(this, HPFBPFMPPIO, GKFPOBBIBBH);
	}

	::System::Void FIJIFCANNII(::System::Boolean HPFBPFMPPIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PIHOIENKGAF_FIJIFCANNII_OFFSET))(this, HPFBPFMPPIO);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHOIENKGAF_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void IDHPMOJIJFA(::System::Boolean HPFBPFMPPIO, ::ALMILPMLGLJ* JMDONAMBDIH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::ALMILPMLGLJ*))((::PBYTE)hIl2Cpp + PIHOIENKGAF_IDHPMOJIJFA_OFFSET))(this, HPFBPFMPPIO, JMDONAMBDIH);
	}

	::System::Void NOPCNDOEGLI(::System::Boolean HPFBPFMPPIO, ::ALMILPMLGLJ* JMDONAMBDIH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::ALMILPMLGLJ*))((::PBYTE)hIl2Cpp + PIHOIENKGAF_NOPCNDOEGLI_OFFSET))(this, HPFBPFMPPIO, JMDONAMBDIH);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHOIENKGAF_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void INFBHMMCNCD(::System::Boolean HPFBPFMPPIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PIHOIENKGAF_INFBHMMCNCD_OFFSET))(this, HPFBPFMPPIO);
	}
};
