#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHMMBAGOCLO.h"
#include "unitysdk/MGHPLKGGLOB.h"

#define FAEBKDMDJMF_MHMOIBOIPAK_OFFSET UNITYSDK_OFFSET(0x1D987900)
#define FAEBKDMDJMF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9878F0)

inline static constexpr unsigned int FAEBKDMDJMF_TypeDefinitionIndex = 94168;

class FAEBKDMDJMF
{
public:
	::System::Boolean PEDANHBGIGE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEBKDMDJMF__CTOR_OFFSET))(this);
	}

	::MGHPLKGGLOB MHMOIBOIPAK(::LHMMBAGOCLO& HBMGHPEPBNC)
	{
		return ((::MGHPLKGGLOB(*)(::PVOID, ::LHMMBAGOCLO&))((::PBYTE)hIl2Cpp + FAEBKDMDJMF_MHMOIBOIPAK_OFFSET))(this, HBMGHPEPBNC);
	}
};
