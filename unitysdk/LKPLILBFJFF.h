#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class CJPKCFAOFBG;
class EOJOKJMIDOL;
class KCLMCCOEAPN;

#define LKPLILBFJFF_ANBOPFAIOPL_OFFSET UNITYSDK_OFFSET(0x1402CF10)
#define LKPLILBFJFF_ICEMFKEEFBB_OFFSET UNITYSDK_OFFSET(0x1402CDC0)
#define LKPLILBFJFF_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x1402CCC0)
#define LKPLILBFJFF_ONSTART_OFFSET UNITYSDK_OFFSET(0x1402CBB0)
#define LKPLILBFJFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1402CDB0)

inline static constexpr unsigned int LKPLILBFJFF_TypeDefinitionIndex = 87891;

class LKPLILBFJFF : public ::DJBPFFLIECG
{
public:
	::CJPKCFAOFBG* GDJABOALEIN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPLILBFJFF__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPLILBFJFF_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPLILBFJFF_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void ICEMFKEEFBB(::KCLMCCOEAPN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KCLMCCOEAPN*))((::PBYTE)hIl2Cpp + LKPLILBFJFF_ICEMFKEEFBB_OFFSET))(this, NKMKJFCBBCK);
	}

	::System::Void ANBOPFAIOPL(::EOJOKJMIDOL* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::EOJOKJMIDOL*))((::PBYTE)hIl2Cpp + LKPLILBFJFF_ANBOPFAIOPL_OFFSET))(this, GLAOEHCGCFO);
	}
};
