#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOIMHHECJLF.h"
#include "unitysdk/KOHMKGPKKLN.h"

class KGBFLHNJHHN;
class ODMCBODOICO;

#define LPMONEBLJPH_KNENHKDOFBH_OFFSET UNITYSDK_OFFSET(0x19DAD8F0)
#define LPMONEBLJPH__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAD8E0)

inline static constexpr unsigned int LPMONEBLJPH_TypeDefinitionIndex = 13249;

class LPMONEBLJPH : public ::JOIMHHECJLF
{
public:
	::ODMCBODOICO* _AJLDOGIMDPC_k__BackingField; // 0x50

	::System::Void _ctor(::KOHMKGPKKLN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KOHMKGPKKLN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LPMONEBLJPH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void KNENHKDOFBH(::ODMCBODOICO* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ODMCBODOICO*))((::PBYTE)hIl2Cpp + LPMONEBLJPH_KNENHKDOFBH_OFFSET))(this, EGEGIMGMJHN);
	}
};
