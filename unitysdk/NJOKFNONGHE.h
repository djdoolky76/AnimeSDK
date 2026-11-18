#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBKFEMNJBH.h"

#define NJOKFNONGHE_IFHPLPEKDMD_OFFSET UNITYSDK_OFFSET(0x1315BAE0)
#define NJOKFNONGHE_LPAHMCKBMGN_OFFSET UNITYSDK_OFFSET(0x1315BA80)
#define NJOKFNONGHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1315BAD0)

inline static constexpr unsigned int NJOKFNONGHE_TypeDefinitionIndex = 72660;

class NJOKFNONGHE : public ::FOBKFEMNJBH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJOKFNONGHE__CTOR_OFFSET))(this);
	}

	::System::Boolean LPAHMCKBMGN(::System::Boolean CGNBCLBONJI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NJOKFNONGHE_LPAHMCKBMGN_OFFSET))(this, CGNBCLBONJI);
	}

	::System::Boolean IFHPLPEKDMD(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NJOKFNONGHE_IFHPLPEKDMD_OFFSET))(this, MIALFKCCCPI);
	}
};
