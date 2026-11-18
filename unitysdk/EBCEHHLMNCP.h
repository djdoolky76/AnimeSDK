#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HJPDBOPHPAL.h"

class GCLAFEHANBM;

#define EBCEHHLMNCP_GBIMFDIADMD_OFFSET UNITYSDK_OFFSET(0x7A2620)
#define EBCEHHLMNCP__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int EBCEHHLMNCP_TypeDefinitionIndex = 84161;

struct alignas(8) EBCEHHLMNCP
{
	::GCLAFEHANBM* BGIAPGLPLFG; // 0x10

	::System::Void _ctor(::GCLAFEHANBM* DGEMEBMAAEA)
	{
		return ((::System::Void(*)(::PVOID, ::GCLAFEHANBM*))((::PBYTE)hIl2Cpp + EBCEHHLMNCP__CTOR_OFFSET))(this, DGEMEBMAAEA);
	}

	::System::Void GBIMFDIADMD(::HJPDBOPHPAL& HGDMBHDKFPK)
	{
		return ((::System::Void(*)(::PVOID, ::HJPDBOPHPAL&))((::PBYTE)hIl2Cpp + EBCEHHLMNCP_GBIMFDIADMD_OFFSET))(this, HGDMBHDKFPK);
	}
};
