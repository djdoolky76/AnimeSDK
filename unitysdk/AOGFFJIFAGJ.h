#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAJELNMMPIP.h"

class AJAMLAJJNHA;
class AJEJMDEKBCE;

#define AOGFFJIFAGJ_IBELDKINIOF_OFFSET UNITYSDK_OFFSET(0x14C23500)
#define AOGFFJIFAGJ_OFINMOFKGFI_OFFSET UNITYSDK_OFFSET(0x14C23620)
#define AOGFFJIFAGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14C23460)

inline static constexpr unsigned int AOGFFJIFAGJ_TypeDefinitionIndex = 43071;

class AOGFFJIFAGJ : public ::KAJELNMMPIP
{
public:
	::AJEJMDEKBCE* ELPBKMCLFDP; // 0x48

	::System::Void _ctor(::AJAMLAJJNHA* KAINLJMNCHE)
	{
		return ((::System::Void(*)(::PVOID, ::AJAMLAJJNHA*))((::PBYTE)hIl2Cpp + AOGFFJIFAGJ__CTOR_OFFSET))(this, KAINLJMNCHE);
	}

	::System::Void IBELDKINIOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGFFJIFAGJ_IBELDKINIOF_OFFSET))(this);
	}

	::System::Void OFINMOFKGFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGFFJIFAGJ_OFINMOFKGFI_OFFSET))(this);
	}
};
