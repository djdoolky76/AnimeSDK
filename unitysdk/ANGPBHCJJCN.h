#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANGPBHCJJCN_PIGCOKHBCHD.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define ANGPBHCJJCN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1853E580)
#define ANGPBHCJJCN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1853E4F0)
#define ANGPBHCJJCN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1853E460)
#define ANGPBHCJJCN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1853E3E0)
#define ANGPBHCJJCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1853E450)

inline static constexpr unsigned int ANGPBHCJJCN_TypeDefinitionIndex = 67019;

class ANGPBHCJJCN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x11F; // 0x0
	::System::Boolean KGIHECONBPA; // 0x20
	::System::Byte _padding0[0x3];
	::ANGPBHCJJCN_PIGCOKHBCHD OBNIAHNMHPF; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANGPBHCJJCN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGPBHCJJCN__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGPBHCJJCN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGPBHCJJCN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::ANGPBHCJJCN_PIGCOKHBCHD OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::ANGPBHCJJCN_PIGCOKHBCHD))((::PBYTE)hIl2Cpp + ANGPBHCJJCN_CNHBDOMKKDE_OFFSET))(this, OBNIAHNMHPF);
	}
};
