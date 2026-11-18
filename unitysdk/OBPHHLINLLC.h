#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"

namespace System { class Action; }

#define OBPHHLINLLC_ADPIGIGKEJJ_OFFSET UNITYSDK_OFFSET(0x10058320)
#define OBPHHLINLLC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x10057EE0)
#define OBPHHLINLLC_BJCHLHKAAGK_OFFSET UNITYSDK_OFFSET(0x100582C0)
#define OBPHHLINLLC_CBAADACDEMO_OFFSET UNITYSDK_OFFSET(0x100582B0)
#define OBPHHLINLLC_EGFOBCDBEJF_OFFSET UNITYSDK_OFFSET(0x10058360)
#define OBPHHLINLLC_FEJDODDDIMI_OFFSET UNITYSDK_OFFSET(0x100583C0)
#define OBPHHLINLLC_HAAMLAPHFIC_OFFSET UNITYSDK_OFFSET(0x10058310)
#define OBPHHLINLLC_LBODGKNICHM_OFFSET UNITYSDK_OFFSET(0x100580E0)
#define OBPHHLINLLC_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x10058250)
#define OBPHHLINLLC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10057FB0)
#define OBPHHLINLLC__CTOR_OFFSET UNITYSDK_OFFSET(0x10057E10)

inline static constexpr unsigned int OBPHHLINLLC_TypeDefinitionIndex = 42763;

class OBPHHLINLLC : public ::System::Object
{
public:
	::System::Action* FHJPINMHDEP; // 0x10
	::System::Action* DICHHNFAAMN; // 0x18
	::System::Single HKEFLKGDPGL; // 0x20
	::System::Boolean DPBCEHPEHLC; // 0x24
	::System::Boolean ADFKPALAADM; // 0x25
	::System::Boolean CLNMIHABNDE; // 0x26
	::System::Byte _padding0[0x1];
	::System::Single NAOMMOIOPIC; // 0x28
	::System::Single GPDCBHEPDGL; // 0x2C
	::System::Boolean DPDOJNFEHHF; // 0x30
	::System::Boolean _IEHNCLLPPDB_k__BackingField; // 0x31
	::System::Byte _padding1[0x2];
	::System::Single GIHBDFEDJIN; // 0x34

	::System::Void _ctor(::System::Single NAOMMOIOPIC, ::System::Action* FHJPINMHDEP, ::System::Single HKEFLKGDPGL, ::System::Action* DICHHNFAAMN, ::System::Boolean FLMIJCJJIBA, ::System::Boolean ADFKPALAADM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Single, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OBPHHLINLLC__CTOR_OFFSET))(this, NAOMMOIOPIC, FHJPINMHDEP, HKEFLKGDPGL, DICHHNFAAMN, FLMIJCJJIBA, ADFKPALAADM);
	}

	::System::Void _ctor_1(::System::DateTime OBDCKIIBEJM, ::System::Action* FHJPINMHDEP, ::System::Boolean FLMIJCJJIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + OBPHHLINLLC__CTOR_1_OFFSET))(this, OBDCKIIBEJM, FHJPINMHDEP, FLMIJCJJIBA);
	}

	::System::Void LBODGKNICHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPHHLINLLC_LBODGKNICHM_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPHHLINLLC_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Boolean CBAADACDEMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPHHLINLLC_CBAADACDEMO_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Single NAOMMOIOPIC, ::System::Action* FHJPINMHDEP, ::System::Single HKEFLKGDPGL, ::System::Action* DICHHNFAAMN, ::System::Boolean FLMIJCJJIBA, ::System::Boolean ADFKPALAADM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Single, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OBPHHLINLLC_BBOMJDBNHIC_OFFSET))(this, NAOMMOIOPIC, FHJPINMHDEP, HKEFLKGDPGL, DICHHNFAAMN, FLMIJCJJIBA, ADFKPALAADM);
	}

	::System::Void BJCHLHKAAGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPHHLINLLC_BJCHLHKAAGK_OFFSET))(this);
	}

	::System::Void HAAMLAPHFIC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBPHHLINLLC_HAAMLAPHFIC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ADPIGIGKEJJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPHHLINLLC_ADPIGIGKEJJ_OFFSET))(this);
	}

	::System::Void EGFOBCDBEJF(::System::Single GFKIDBPICBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBPHHLINLLC_EGFOBCDBEJF_OFFSET))(this, GFKIDBPICBL);
	}

	::System::Void FEJDODDDIMI(::System::Boolean PNJFPDDLKPD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBPHHLINLLC_FEJDODDDIMI_OFFSET))(this, PNJFPDDLKPD);
	}
};
