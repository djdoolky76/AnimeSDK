#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFLONJKEAKP.h"
class IGACELAIJCM;

#define CKPCGBNKOMK_CTOR_OFFSET UNITYSDK_OFFSET(0xD76CCB0)
#define CKPCGBNKOMK_OPBFNDKICAC_OFFSET UNITYSDK_OFFSET(0xD76CCC0)

	class CKPCGBNKOMK : public ::DFLONJKEAKP
	{
	public:
		::IGACELAIJCM* NOKJFPPOHKM; // 0x10
		::System::Void _ctor(::IGACELAIJCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGACELAIJCM*))((::PBYTE)hIl2Cpp + CKPCGBNKOMK_CTOR_OFFSET))(this, a1);
		}

		::IGACELAIJCM* OPBFNDKICAC()
		{
			return ((::IGACELAIJCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPCGBNKOMK_OPBFNDKICAC_OFFSET))(this);
		}

	};
