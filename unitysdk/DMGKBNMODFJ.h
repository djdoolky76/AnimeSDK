#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBFEJFBALJN.h"
#include "unitysdk/FAPAFCMLKEA.h"
#include "unitysdk/OJLBKABDDPK.h"
#include "unitysdk/OLHAMBOCLLE.h"
#include "unitysdk/PBHOLIIJDHB.h"
#include "unitysdk/System/ValueType.h"

class IJBKAABGJJB;
namespace System { class String; }

#define DMGKBNMODFJ_BJIOAGEGLKK_OFFSET UNITYSDK_OFFSET(0x701F00)
#define DMGKBNMODFJ_CFBHCJODKGP_OFFSET UNITYSDK_OFFSET(0x701F10)
#define DMGKBNMODFJ_CHGCPCJPHJM_OFFSET UNITYSDK_OFFSET(0x701FA0)
#define DMGKBNMODFJ_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x701FF0)
#define DMGKBNMODFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x701EF0)

inline static constexpr unsigned int DMGKBNMODFJ_TypeDefinitionIndex = 58625;

struct alignas(8) DMGKBNMODFJ
{
	::OLHAMBOCLLE MIMEFHECGHC; // 0x10
	::System::Byte _padding0[0x4];
	::IJBKAABGJJB* ADACEEBMFCI; // 0x18
	::OJLBKABDDPK EPMNNELBGFG; // 0x20
	::FAPAFCMLKEA LNPPAFPNGNM; // 0x24
	::PBHOLIIJDHB DHDFFGJPILF; // 0x28
	::CBFEJFBALJN MGFHHBPFFJI; // 0x2C
	::OJLBKABDDPK CIFAMBMAMNA; // 0x34

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGKBNMODFJ_TOSTRING_OFFSET))(this);
	}

	::System::Boolean BJIOAGEGLKK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGKBNMODFJ_BJIOAGEGLKK_OFFSET))(this);
	}

	::System::Boolean CFBHCJODKGP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGKBNMODFJ_CFBHCJODKGP_OFFSET))(this);
	}

	::OJLBKABDDPK CHGCPCJPHJM()
	{
		return ((::OJLBKABDDPK(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGKBNMODFJ_CHGCPCJPHJM_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGKBNMODFJ_DPIHOJBBGLA_OFFSET))(this);
	}
};
