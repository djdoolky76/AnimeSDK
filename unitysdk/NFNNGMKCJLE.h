#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFNNGMKCJLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88BE60)

inline static constexpr unsigned int NFNNGMKCJLE_TypeDefinitionIndex = 94760;

class NFNNGMKCJLE : public ::CGGLJLECNJM
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* COHCBLLJIGN; // 0x20
	::System::Boolean JLGCMPJMDLO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNNGMKCJLE__CTOR_OFFSET))(this);
	}
};
