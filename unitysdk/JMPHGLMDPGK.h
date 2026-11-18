#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define JMPHGLMDPGK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x17B4D1A0)
#define JMPHGLMDPGK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x17B4D110)
#define JMPHGLMDPGK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17B4D080)
#define JMPHGLMDPGK__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B4D000)
#define JMPHGLMDPGK__CTOR_OFFSET UNITYSDK_OFFSET(0x17B4D070)

inline static constexpr unsigned int JMPHGLMDPGK_TypeDefinitionIndex = 82412;

class JMPHGLMDPGK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x109; // 0x0
	::System::String* IFKIKJCCFBB; // 0x20
	::System::Boolean DEBGKPLOPCG; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMPHGLMDPGK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHGLMDPGK__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHGLMDPGK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHGLMDPGK_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 PPNALIJJAJL, ::System::Boolean FIPHFGHNNBE, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + JMPHGLMDPGK_CNHBDOMKKDE_OFFSET))(this, PPNALIJJAJL, FIPHFGHNNBE, HIAIKHDFCLN);
	}
};
