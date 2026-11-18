#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAOEIIBLJAN.h"
#include "unitysdk/System/ValueType.h"

class HGBFKACDPBM;
class LOICBEJNBOB;

#define HJPDBOPHPAL_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x7C1050)
#define HJPDBOPHPAL__CTOR_OFFSET UNITYSDK_OFFSET(0x7C1020)

inline static constexpr unsigned int HJPDBOPHPAL_TypeDefinitionIndex = 88196;

struct alignas(4) HJPDBOPHPAL
{
	::KAOEIIBLJAN LNLDPCPNKNM; // 0x10

	::System::Void _ctor(::HGBFKACDPBM* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::HGBFKACDPBM*))((::PBYTE)hIl2Cpp + HJPDBOPHPAL__CTOR_OFFSET))(this, GEEHGDABNJF);
	}

	::LOICBEJNBOB* PKOGNPKCHHE()
	{
		return ((::LOICBEJNBOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPDBOPHPAL_PKOGNPKCHHE_OFFSET))(this);
	}
};
