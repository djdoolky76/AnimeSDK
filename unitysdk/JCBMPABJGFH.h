#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIFGNKADBKN.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { template <typename T> class QuickList_1; }

#define JCBMPABJGFH_PKCPELIOGDC_OFFSET UNITYSDK_OFFSET(0x5ED6A0)

inline static constexpr unsigned int JCBMPABJGFH_TypeDefinitionIndex = 92107;

struct alignas(8) JCBMPABJGFH
{
	::Nap::NapECS::QuickList_1<::AIFGNKADBKN>* LEGFLBJANKO; // 0x10

	::System::Boolean PKCPELIOGDC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBMPABJGFH_PKCPELIOGDC_OFFSET))(this);
	}
};
