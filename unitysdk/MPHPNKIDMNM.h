#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define MPHPNKIDMNM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1274E590)
#define MPHPNKIDMNM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1274E500)
#define MPHPNKIDMNM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1274E470)
#define MPHPNKIDMNM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1274E3E0)
#define MPHPNKIDMNM__CTOR_OFFSET UNITYSDK_OFFSET(0x1274E450)

inline static constexpr unsigned int MPHPNKIDMNM_TypeDefinitionIndex = 71659;

class MPHPNKIDMNM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x126; // 0x0
	::System::String* POFLENIKPBD; // 0x20
	::System::Boolean JIPDCEPFHCG; // 0x28
	::System::Boolean FKKFMCIJGJC; // 0x29

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPHPNKIDMNM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHPNKIDMNM__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHPNKIDMNM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHPNKIDMNM_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* JJDEADLPLKD, ::System::Boolean EFHLBKOBIAC, ::System::Boolean KJDNDFCONCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MPHPNKIDMNM_CNHBDOMKKDE_OFFSET))(this, JJDEADLPLKD, EFHLBKOBIAC, KJDNDFCONCN);
	}
};
