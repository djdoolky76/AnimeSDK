#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFPNEMOCKMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BBAF0)

inline static constexpr unsigned int KFPNEMOCKMP_TypeDefinitionIndex = 94717;

class KFPNEMOCKMP : public ::CGGLJLECNJM
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KLELKLHEGOF; // 0x20
	::System::Int32 IIMEPIFKPCH; // 0x28
	::System::UInt32 DIBGMOMCOMM; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPNEMOCKMP__CTOR_OFFSET))(this);
	}
};
