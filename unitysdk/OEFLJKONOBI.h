#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/GFHEOLGDLGH.h"

#define OEFLJKONOBI_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xF17BF50)
#define OEFLJKONOBI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xF17BEC0)
#define OEFLJKONOBI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xF17BE30)
#define OEFLJKONOBI__CCTOR_OFFSET UNITYSDK_OFFSET(0xF17BDB0)
#define OEFLJKONOBI__CTOR_OFFSET UNITYSDK_OFFSET(0xF17BE20)

inline static constexpr unsigned int OEFLJKONOBI_TypeDefinitionIndex = 71689;

class OEFLJKONOBI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x129; // 0x0
	::System::Boolean GDIJAFPHPLI; // 0x20
	::System::Byte _padding0[0x3];
	::GFHEOLGDLGH NBMAMKAKOEO; // 0x24
	::System::UInt32 PLJABCHPOCF; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEFLJKONOBI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFLJKONOBI__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFLJKONOBI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFLJKONOBI_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::UInt32 NAKMEEAHGCH, ::System::Boolean EDIAHADIOHD, ::GFHEOLGDLGH JAFKJKEIHHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::GFHEOLGDLGH))((::PBYTE)hIl2Cpp + OEFLJKONOBI_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, NAKMEEAHGCH, EDIAHADIOHD, JAFKJKEIHHI);
	}
};
