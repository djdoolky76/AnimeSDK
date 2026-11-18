#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPDNMFONAEH.h"
#include "unitysdk/ALODNBLGKKM.h"

namespace System { class String; }

#define CGCBJLCDNMM_EFMCNJGCMNM_OFFSET UNITYSDK_OFFSET(0x145B4FF0)
#define CGCBJLCDNMM_KIIONEDFMPN_OFFSET UNITYSDK_OFFSET(0x145B5150)
#define CGCBJLCDNMM_KMGIOBEPIDI_OFFSET UNITYSDK_OFFSET(0x145B5270)
#define CGCBJLCDNMM_OJEFBNNBELP_OFFSET UNITYSDK_OFFSET(0x145B51C0)
#define CGCBJLCDNMM__CTOR_OFFSET UNITYSDK_OFFSET(0x145B4FD0)

inline static constexpr unsigned int CGCBJLCDNMM_TypeDefinitionIndex = 38651;

class CGCBJLCDNMM : public ::PPDNMFONAEH
{
public:
	::System::Void _ctor(::ALODNBLGKKM KPGAFJBIBCC)
	{
		return ((::System::Void(*)(::PVOID, ::ALODNBLGKKM))((::PBYTE)hIl2Cpp + CGCBJLCDNMM__CTOR_OFFSET))(this, KPGAFJBIBCC);
	}

	::System::Void EFMCNJGCMNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCBJLCDNMM_EFMCNJGCMNM_OFFSET))(this);
	}

	::System::String* KIIONEDFMPN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCBJLCDNMM_KIIONEDFMPN_OFFSET))(this);
	}

	::System::String* OJEFBNNBELP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCBJLCDNMM_OJEFBNNBELP_OFFSET))(this);
	}

	::System::Void KMGIOBEPIDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCBJLCDNMM_KMGIOBEPIDI_OFFSET))(this);
	}
};
