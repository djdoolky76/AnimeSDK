#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEGNCADIMBJ.h"
#include "unitysdk/HFLADMCGDOG.h"

#define BEDIJHDBPJH_FPJCBGDDECA_OFFSET UNITYSDK_OFFSET(0x14384920)
#define BEDIJHDBPJH_MKBIIFEEOBL_OFFSET UNITYSDK_OFFSET(0x14384930)
#define BEDIJHDBPJH__CTOR_OFFSET UNITYSDK_OFFSET(0x14384910)

inline static constexpr unsigned int BEDIJHDBPJH_TypeDefinitionIndex = 46090;

class BEDIJHDBPJH : public ::EEGNCADIMBJ
{
public:
	::System::Void _ctor(::HFLADMCGDOG CIAHAAKLADN)
	{
		return ((::System::Void(*)(::PVOID, ::HFLADMCGDOG))((::PBYTE)hIl2Cpp + BEDIJHDBPJH__CTOR_OFFSET))(this, CIAHAAKLADN);
	}

	::System::Boolean FPJCBGDDECA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDIJHDBPJH_FPJCBGDDECA_OFFSET))(this);
	}

	::System::Boolean MKBIIFEEOBL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDIJHDBPJH_MKBIIFEEOBL_OFFSET))(this);
	}
};
