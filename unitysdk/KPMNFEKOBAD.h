#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFMDDCPMGKC.h"
#include "unitysdk/LHMMBAGOCLO.h"

#define KPMNFEKOBAD_MHMOIBOIPAK_OFFSET UNITYSDK_OFFSET(0x1D3EF770)
#define KPMNFEKOBAD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D3EF750)
#define KPMNFEKOBAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EF730)

inline static constexpr unsigned int KPMNFEKOBAD_TypeDefinitionIndex = 93565;

class KPMNFEKOBAD
{
public:
	::System::Single MLEEKAMODAB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMNFEKOBAD__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Single PFDEICFIHDC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPMNFEKOBAD__CTOR_1_OFFSET))(this, PFDEICFIHDC);
	}

	::IFMDDCPMGKC MHMOIBOIPAK(::LHMMBAGOCLO& HBMGHPEPBNC)
	{
		return ((::IFMDDCPMGKC(*)(::PVOID, ::LHMMBAGOCLO&))((::PBYTE)hIl2Cpp + KPMNFEKOBAD_MHMOIBOIPAK_OFFSET))(this, HBMGHPEPBNC);
	}
};
