#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNBLIKPHDEA.h"

#define MEOGLIAOJBM__CTOR_OFFSET UNITYSDK_OFFSET(0x156A3D40)

inline static constexpr unsigned int MEOGLIAOJBM_TypeDefinitionIndex = 63832;

class MEOGLIAOJBM : public ::MNBLIKPHDEA
{
public:
	::System::Int32 NFACFCMFNEC; // 0x10

	::System::Void _ctor(::System::Int32 KCNOHOOPNAH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MEOGLIAOJBM__CTOR_OFFSET))(this, KCNOHOOPNAH);
	}
};
