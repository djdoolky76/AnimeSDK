#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHIKCGJDEAF.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCBBBFJPPMC__CTOR_OFFSET UNITYSDK_OFFSET(0x14ABAF60)

inline static constexpr unsigned int FCBBBFJPPMC_TypeDefinitionIndex = 80690;

class FCBBBFJPPMC : public ::EHIKCGJDEAF
{
public:
	::System::Collections::Generic::List_1<::EHIKCGJDEAF*>* AFDLLFEPNMN; // 0x30

	::System::Void _ctor(::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FCBBBFJPPMC__CTOR_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
